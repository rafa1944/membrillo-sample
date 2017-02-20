<?
use angelrove\membrillo2\GenQuery;
use angelrove\membrillo2\WObjectsStatus\Event;


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
    GenQuery::delete(SqlQueries::$TABLE);
  break;

}
