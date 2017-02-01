<?
use angelrove\utils\Db_mysql;
use angelrove\membrillo\GenQuery;


class SqlQueries
{
  static $TABLE = 'sys_users';

  //--------------------------------------------------------------
  static function rows()
  {
    return GenQuery::select(self::$TABLE);
  }
  //--------------------------------------------------------------
  static function row($id)
  {
    $sqlQ = GenQuery::selectRow(self::$TABLE, $id);
    return Db_mysql::getRow($sqlQ);
  }
 //--------------------------------------------------------------
}
