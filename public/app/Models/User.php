<?php
namespace App\Models;

use angelrove\membrillo\Database\ModelInterface;
use angelrove\membrillo\Database\ModelHelper;
use angelrove\membrillo\WObjectsStatus\Event;
use angelrove\utils\Db_mysql;

class User implements ModelInterface
{
    public static $TABLE = 'users';

    public static $profileValues = array(
      'root'   => 'Root',
      'admin'  => 'Admin',
      'basic'  => 'Basic',
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
