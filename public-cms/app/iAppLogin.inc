<?
use angelrove\membrillo\AppLogin\iAppLogin;


class IntAppLogin implements iAppLogin
{
  function getQuery()
  {
    $sqlQ = "SELECT * FROM sys_users
             WHERE login='$_REQUEST[LOGIN_USER]' AND
                   passwd='$_REQUEST[LOGIN_PASSWD]' AND
                   deleted=0";
    // return $sqlQ;
    return false;
  }
}

$iAppLogin = new IntAppLogin();
