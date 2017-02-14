<?
use angelrove\membrillo2\GenQuery;
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\utils\Db_mysql;
use angelrove\membrillo2\Messages;


switch(Event::$OPER) {

  case 'insert':
    GenQuery::helper_insert(SqlQueries::$TABLE);
  break;

  case 'update':
    GenQuery::helper_update(SqlQueries::$TABLE);
  break;

  case 'delete':
    $sqlQ = "UPDATE ".SqlQueries::$TABLE." SET deleted='1' WHERE id='".EVENT::$ROW_ID."'";
    Db_mysql::query($sqlQ);

    Messages::set("Deleted.");
  break;

}
