<?php
$CONFIG_APP['debug'] = array(
   'LOG_UPDATES' => false,
);

$CONFIG_APP['login'] = array(
   'LOGIN'       => true,
   'LOGIN_TABLE' => 'users',
   'LOGIN_URL'   => '',
   'LOGIN_VIEW'  => '',
);

$CONFIG_APP['varios'] = array(
   'CACHING'   => false,
);

$CONFIG_APP['data'] = array(
   'TITLE'     => APP_NAME,
   'TITLE_IMG' => '',
);


// Login -----------------------------------
// angelrove\membrillo\Login\LoginCtrl::set_iLoginQuery(new \App\Services\AuthLogin());
