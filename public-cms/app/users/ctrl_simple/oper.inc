<?
use angelrove\membrillo2\GenQuery;
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\utils\Db_mysql;
use angelrove\membrillo2\Messages;


switch(Event::$OPER) {

  case CRUD_OPER_INSERT:
    GenQuery::helper_insert(SqlQueries::$TABLE);
  break;

  //--------------------

  case CRUD_OPER_UPDATE:
    GenQuery::helper_update(SqlQueries::$TABLE);
  break;

  //--------------------

  case CRUD_OPER_DELETE:
    $sqlQ = "UPDATE ".SqlQueries::$TABLE." SET deleted='1' WHERE id='".Event::$ROW_ID."'";
    Db_mysql::query($sqlQ);

    Messages::set("Deleted");
  break;

}
