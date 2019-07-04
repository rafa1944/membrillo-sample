<?php
define('DOC_ROOT_MAIN', __DIR__.'/..');
define('IS_LOCALHOST', true);

// Company -------
define('MAIL_ADMIN', 'develop@thecompany.com');

define('APP_NAME', 'Inventory - TheCompany');
define('COMPANY_NAME',   'TheCompany');
define('COMPANY_DOMAIN', 'https://thecompany.com/');

// Errors --------
$CONFIG_APP['errors']['display']  = 1;
$CONFIG_APP['errors']['path_log'] = DOC_ROOT_MAIN.'/_logs';
$CONFIG_APP['errors']['log_file_pref'] = '';

// Cache ---------
define('CACHE_CSSJS_DISABLED', true);  // set false in production
define('CSSJSLOAD_MINIFY',     false); // set true in production

# Vendor ---------
define('PATH_VENDOR', DOC_ROOT_MAIN.'/vendor');
define('URL_VENDOR', 'http://vendor.app.local');

# Uploads --------
$CONFIG_APP['path_uploads'] = DOC_ROOT_MAIN.'/public/uploads';
$CONFIG_APP['url_uploads']  = '/uploads';
// $CONFIG_APP['url_uploads']  = 'http://uploads.membrillo.localhost';
$CONFIG_APP['url_uploads_web'] = $CONFIG_APP['url_uploads'];

# Database -------
$CONFIG_DB['default'] = array(
 'HOST'     => 'mysql',
 'USER'     => 'default',
 'PASSWORD' => 'secret',
 'DBNAME'   => 'vk_inventory'
);

// OTHER ------------------------
define('GOOGLE_API_KEY',   'xxx');
define('RECAPTCHA_KEY',    'xxx');
define('RECAPTCHA_SECRET', 'xxx');
