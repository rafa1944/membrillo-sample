<?
$CONFIG_APP['debug'] = array(
      'LOG_UPDATES' => true,
);

$CONFIG_APP['login'] = array(
      'LOGIN'       => true,
      'LOGIN_TABLE' => 'sys_users',
      'LOGIN_URL'   => '',
);

$CONFIG_APP['varios'] = array(
      'CACHING'   => false,
);

$CONFIG_APP['data'] = array(
      'TITLE'     => APP_NAME,
      'TITLE_IMG' => '',
);


// Login -----------------------------------
use angelrove\membrillo2\Login\LoginCtrl;
use angelrove\membrillo2\Login\LoginQueryInterface;


class ILoginQuery implements LoginQueryInterface
{
   public function get($user, $passwd)
   {
      $sqlQ = "SELECT * FROM sys_users
               WHERE login='$user' AND
                     passwd='$passwd' AND
                     deleted=0";
      return $sqlQ;
   }
}

LoginCtrl::set_iLoginQuery(new ILoginQuery());
