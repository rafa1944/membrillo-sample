<?
use angelrove\membrillo2\GenQuery;
use angelrove\membrillo2\WObjectsStatus\Event;

//--------------------------------------------------------------------
/** Eventos: operaciones de datos **/
//--------------------------------------------------------------------
switch(Event::$OPER) {

  case 'insert':
    GenQuery::insert(SqlQueries::$TABLE);
  break;

  case 'update':
    if(GenQuery::parseForm(SqlQueries::$TABLE)) return;
    // Db_mysql::query("...");
  break;

  case 'delete':
    GenQuery::delete(SqlQueries::$TABLE);
  break;

}
