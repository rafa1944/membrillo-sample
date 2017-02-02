<?
/**
 * Operations events
 */

use angelrove\membrillo2\GenQuery;
use angelrove\membrillo2\WObjectsStatus\Event;


switch(Event::$OPER) {

  case 'insert':
    GenQuery::insert(SqlQueries::$TABLE);
  break;

  case 'update':
    GenQuery::update(SqlQueries::$TABLE);
  break;

  case 'delete':
    $sqlQ = "UPDATE libs_usuarios SET deleted='1' WHERE id='$seccCtrl->ROW_ID'";
    Db_mysql::query($sqlQ);

    WMessages::set("Usuario eliminado.");
  break;

}
