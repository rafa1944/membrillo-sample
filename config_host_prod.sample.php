<?php
define('DOC_ROOT_MAIN', __DIR__);
define('IS_LOCALHOST', false);

//----------------
define('MAIL_ADMIN', 'develop@membrillo.com');
define('APP_NAME', 'Membrillo');

define('COMPANY_NAME',   'Membrillo');
define('COMPANY_DOMAIN', 'www.membrillo.com');

// Errors --------
$CONFIG_APP['errors']['display']  = 0;
$CONFIG_APP['errors']['path_log'] = __DIR__.'/_logs';
$CONFIG_APP['errors']['log_file_pref'] = '';

// Cache --------
define('CACHE_VERSION', 'v1');   // update cache css, js, html files
define('CACHE_CSSJS_DISABLED', false); // set false in production
define('CSSJSLOAD_MINIFY',     true);  // set true in production

# Vendor ---------
define('PATH_VENDOR', __DIR__.'/vendor');
define('URL_VENDOR', 'http://vendor.xxxx.com');

# Uploads --------
$CONFIG_APP['path_uploads'] = __DIR__.'/_uploads';
$CONFIG_APP['url_uploads']  = '/uploads';
$CONFIG_APP['url_uploads_web'] = $CONFIG_APP['url_uploads'];

// BBDD ----------
$CONFIG_DB['default'] = array(
 'HOST'     => 'mysql',
 'USER'     => 'default',
 'PASSWORD' => 'secret',
 'DBNAME'   => 'membrillo'
);

// OTHER ------------------------
// Google APIs keys
define('GOOGLE_API_KEY',   'xxx');
define('RECAPTCHA_KEY',    'xxx');
define('RECAPTCHA_SECRET', 'xxx');
