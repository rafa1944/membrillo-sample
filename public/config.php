<?php
define('CACHE_VERSION', 'v11'); // update cache css, js, html files

// Debug ---------
define('DEBUG_VARS', false);
define('DEBUG_SQL',  false);

// Log sql queries ----
define('LOG_SQL', false); // in database

// Login ----------
$CONFIG_APP['login'] = [
   'LOGIN'       => true,
   'LOGIN_TABLE' => 'users',
   'LOGIN_URL'   => '',
   'LOGIN_VIEW'  => __DIR__.'/app/loginView.php',
];

// angelrove\membrillo\Login\LoginCtrl::set_iLoginQuery(new \App\Services\AuthLogin());

// App data ------
$CONFIG_APP['data'] = [
   'COMPANY_NAME' => 'TheCompany',
   'TITLE'     => 'Membrillo - TheCompany',
   'TITLE_IMG' => '',
];
