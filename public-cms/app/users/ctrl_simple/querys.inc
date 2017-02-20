<?
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\membrillo2\GenQuery;


class SqlQueries
{
  static $TABLE = 'sys_users';

  //--------------------------------------------------------------
  static function rows()
  {
    // return GenQuery::select(self::$TABLE);
    return "SELECT * FROM ".self::$TABLE." WHERE deleted=0";
  }
  //--------------------------------------------------------------
}
