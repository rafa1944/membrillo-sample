<?
define('DOC_ROOT_MAIN', __DIR__);
define('IS_LOCALHOST', true);

//----------------
define('MAIL_ADMIN', 'develop@hobbiespot.com');
define('APP_NAME', 'Membrillo2');

define('COMPANY_NAME',   'Membrillo2');
define('COMPANY_DOMAIN', 'localhost');

// Errors --------
$CONFIG_APP['errors']['display']  = 1;
$CONFIG_APP['errors']['path_log'] = __DIR__.'/_logs';
$CONFIG_APP['errors']['log_file_pref'] = '';

// Cache --------
define('CACHE_VERSION', 'v1');   // update cache css, js, html files
define('CACHE_CSSJS_DISABLED', true);  // set false in production
define('CACHE_HTML_ENABLED', false);   // set true in production
define('CSSJSLOAD_MINIFY', false);     // set true in production

# Vendor ---------
define('PATH_VENDOR', __DIR__.'/vendor');

# Uploads --------
$CONFIG_APP['path_uploads'] = __DIR__.'/_uploads';
$CONFIG_APP['url_uploads']  = 'http://uploads.membrillo2.localhost';
$CONFIG_APP['url_uploads_web'] = $CONFIG_APP['url_uploads'];

// BBDD ----------
$CONFIG_DB['default'] = array(
 'HOST'     => 'mysql',
 'USER'     => 'default',
 'PASSWORD' => 'secret',
 'DBNAME'   => 'membrillo2'
);

// OTHER ------------------------
// Google APIs keys
define('GOOGLE_API_KEY',   'xxx');
define('RECAPTCHA_KEY',    'xxx');
define('RECAPTCHA_SECRET', 'xxx');
