<?php
namespace App\Services;

use angelrove\membrillo\Login\LoginQueryInterface;

class AuthLogin implements LoginQueryInterface
{
   public function get($user, $passwd, $params)
   {
      $sqlQ = "SELECT * FROM users
               WHERE login  = '$user' AND
                     passwd = '$passwd' AND
                     deleted_at IS NULL";
      return $sqlQ;
   }

}
