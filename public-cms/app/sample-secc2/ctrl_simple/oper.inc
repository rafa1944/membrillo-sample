<?
/*
 *  use angelrove\membrillo2\Messages;
 *
 *  case 'update':
 *    if(GenQuery::parseForm(SqlQueries::$TABLE)) return;
 *    GenQuery::update(SqlQueries::$TABLE)
 *  break;
 *
 */

use angelrove\membrillo2\GenQuery;
use angelrove\membrillo2\WObjectsStatus\Event;


switch(Event::$OPER) {

  case 'insert':
    GenQuery::helper_insert(SqlQueries::$TABLE);
  break;

  case 'update':
    GenQuery::helper_update(SqlQueries::$TABLE);
  break;

  case 'delete':
    GenQuery::delete(SqlQueries::$TABLE);
  break;

}
