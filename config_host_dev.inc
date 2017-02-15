<?
define('DOC_ROOT_MAIN', __DIR__);

//------------------------------
$CONFIG_APP['mail_admin'] = 'jangel.romero@gmail.com';
define('APP_NAME', 'Membrillo2');

define('COMPANY_NAME',   'Membrillo2');
define('COMPANY_DOMAIN', 'localhost');

// Domains -------
define('DOMAIN_CMS', 'cms.membrillo2-sample.localhost');

// Errors --------
$CONFIG_APP['errors']['display']  = 1;
$CONFIG_APP['errors']['path_log'] = __DIR__.'/_logs';
$CONFIG_APP['errors']['log_file_pref'] = '';

// Cache --------
define('CACHE_VERSION', 'v1');   // update cache css, js, html files
define('CACHE_CSSJS_DISABLED', 'auto');  // true, false, 'auto' (set false in production !!)
define('CACHE_HTML_ENABLED',   false);
define('CACHE_PATH_WEB', __DIR__.'/web/_cache');
define('CACHE_URL_WEB', '/_cache');

# Vendor ---------
define('PATH_VENDOR', __DIR__.'/vendor');

# Uploads --------
$CONFIG_APP['path_uploads'] = __DIR__.'/_uploads';
$CONFIG_APP['url_uploads']  = 'http://uploads.membrillo2-sample.localhost';

// BBDD ----------
$CONFIG_DB['default'] = array(
 'HOST'     => 'localhost',
 'USER'     => 'root',
 'PASSWORD' => '',
 'DBNAME'   => 'membrillo2_sample'
);

// OTHER ------------------------
// Google APIs keys
define('GOOGLE_API_KEY',   'xxx');
define('RECAPTCHA_KEY',    'xxx');
define('RECAPTCHA_SECRET', 'xxx');
