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
    if(isset($filtros['f_text'])) {
       $listCondiciones['f_text'] = "(login LIKE '%$filtros[f_text]%' OR name LIKE '%$filtros[f_text]%')";
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
