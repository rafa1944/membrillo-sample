<?
use angelrove\utils\Db_mysql;
use angelrove\membrillo2\GenQuery;
use angelrove\membrillo2\WMessages\WMessages;

//--------------------------------------------------------------------
/** Eventos: operaciones de datos **/
//--------------------------------------------------------------------
switch($seccCtrl->OPER) {
  case 'insert':
  case 'update':
    if($errors = GenQuery::parseForm(SqlQueries::$TABLE)) return;
  break;
}

switch($seccCtrl->OPER) {

  case 'insert':
    if($errors = GenQuery::insert(SqlQueries::$TABLE)) return;
    WMessages::set("El registro se ha guardado correctamente.");
  break;

  //--------------------

  case 'update':
    if($errors = GenQuery::update(SqlQueries::$TABLE)) return;
    WMessages::set("El registro se ha guardado correctamente.");
  break;

  //--------------------

  case 'delete':
    if($errors = GenQuery::delete(SqlQueries::$TABLE)) return;
    WMessages::set("Usuario eliminado.");
  break;

}
