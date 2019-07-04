<?php
define('DOC_ROOT_MAIN', __DIR__.'/..');
define('IS_LOCALHOST', false);

// Company -------
define('MAIL_ADMIN', 'develop@company.com');
define('APP_NAME', 'Inventory - TheCompany');

define('COMPANY_NAME',   'TheCompany');
define('COMPANY_DOMAIN', 'https://thecompany.com/');

// Errors --------
$CONFIG_APP['errors']['display']  = 0;
$CONFIG_APP['errors']['path_log'] = DOC_ROOT_MAIN.'/_logs';
$CONFIG_APP['errors']['log_file_pref'] = '';

// Cache ---------
define('CACHE_CSSJS_DISABLED', false); // set false in production
define('CSSJSLOAD_MINIFY',     true);  // set true in production

# Vendor ---------
define('PATH_VENDOR', DOC_ROOT_MAIN.'/vendor');
define('URL_VENDOR', 'http://vendor.thecompany.com');

# Uploads --------
$CONFIG_APP['path_uploads'] = DOC_ROOT_MAIN.'/public/uploads';
$CONFIG_APP['url_uploads']  = '/uploads';
// $CONFIG_APP['url_uploads']  = 'http://uploads.thecompany.com';
$CONFIG_APP['url_uploads_web'] = $CONFIG_APP['url_uploads'];

# Database -------
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
