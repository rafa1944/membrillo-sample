<?php
namespace App\Models;

use angelrove\membrillo2\Database\ModelInterface;
use angelrove\membrillo2\Database\ModelHelper;
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\utils\Db_mysql;

class User implements ModelInterface
{
    public static $TABLE = 'users';

    public static $profileValues = array(
      // 'universities_admin' =>'Universities Admin',
      'plans_admin'  =>'Plans Admin',
      'plans_editor' =>'Plans Editor',
      'plans_user'   =>'Plans User',
    );

    //--------------------------------------------------------------
    public static function read(array $filtros=array(), $strict=false)
    {
        return "SELECT * FROM " . self::$TABLE . " WHERE id <> 1 and deleted=0";
    }
    //--------------------------------------------------------------
    public static function delete()
    {
        $sqlQ = "UPDATE " . self::$TABLE . " SET deleted='1' WHERE id='" . Event::$ROW_ID . "'";
        Db_mysql::query($sqlQ);
    }
    //--------------------------------------------------------------
    public static function getUsersPlan()
    {
        $sqlQ = "SELECT *
                 FROM " . self::$TABLE . "
                 WHERE profile IN ( 'plans_admin', 'plans_editor', 'plans_user' )";
        return Db_mysql::getList($sqlQ);
    }
    //--------------------------------------------------------------
    public static function rows()
    {
        return ModelHelper::rows(self::$TABLE)." ORDER BY name";
    }

    public static function findById($id, $asArray=true, $setHtmlSpecialChars = true)
    {
        return ModelHelper::findById(self::$TABLE, $id, $asArray, $setHtmlSpecialChars);
    }

    public static function getValueById($id, $field)
    {
        return ModelHelper::getValueById(self::$TABLE, $id, $field);
    }

    public static function find(array $filters)
    {
        return ModelHelper::find(self::$TABLE, $filters);
    }

    public static function findEmpty()
    {
        return ModelHelper::findEmpty(self::$TABLE);
    }

    //--------------------------------------------------------
    public static function create()
    {
        return ModelHelper::create(self::$TABLE);
    }

    public static function update(array $listValues=array(), $id='')
    {
        return ModelHelper::update(self::$TABLE, $listValues, $id);
    }
    //--------------------------------------------------------
}
