<?
use angelrove\utils\Db_mysql;
use angelrove\membrillo\GenQuery;


class SqlQueries
{
  static $TABLE = 'sys_users';

  //--------------------------------------------------------------
  static function rows()
  {
    $sqlQ = "SELECT * FROM ".self::$TABLE." WHERE id > 1";
    return $sqlQ;
  }
  //--------------------------------------------------------------
  static function row($id)
  {
    $sqlQ = GenQuery::selectRow(self::$TABLE, $id);
    return Db_mysql::getRow($sqlQ);
  }
 //--------------------------------------------------------------
}
