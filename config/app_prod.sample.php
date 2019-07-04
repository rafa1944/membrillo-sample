<?php
define('IS_LOCALHOST', false);
define('DISPLAY_ERRORS', 0);

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
$CONFIG_DB['default'] = [
  'HOST'     => 'mysql',
  'USER'     => 'default',
  'PASSWORD' => 'secret',
  'DBNAME'   => 'membrillo'
];
