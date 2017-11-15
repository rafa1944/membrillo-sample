<?
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\membrillo2\GenQuery;


class SqlQueries
{
  static $TABLE = 'users';

  //--------------------------------------------------------------
  static function rows()
  {
    global $objectsStatus;

    // Search ---
    $filtros = $objectsStatus->getDatos('simple');

    $listCondiciones = array();
    if(isset($filtros['f_search'])) {
       $listCondiciones['f_search'] = "(login LIKE '%$filtros[f_search]%' OR name LIKE '%$filtros[f_search]%')";
    }
    $sqlFiltros = GenQuery::getSqlFiltros($listCondiciones, $filtros);

    // Query ---
    return GenQuery::selectFiltros(self::$TABLE, $sqlFiltros);
  }
  //--------------------------------------------------------------
  static function row()
  {
    // return GenQuery::selectRow(self::$TABLE, Event::$ROW_ID);
  }
  //--------------------------------------------------------------
}
