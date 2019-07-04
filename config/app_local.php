<?php
define('IS_LOCALHOST', true);
define('DISPLAY_ERRORS', 1);

// Cache ---------
define('CACHE_CSSJS_DISABLED', true);  // set false in production
define('CSSJSLOAD_MINIFY',     false); // set true in production

# Vendor ---------
define('PATH_VENDOR', DOC_ROOT_MAIN.'/vendor');
define('URL_VENDOR', 'http://vendor.app.local');

# Uploads --------
$CONFIG_APP['path_uploads'] = DOC_ROOT_MAIN.'/public/uploads';
$CONFIG_APP['url_uploads']  = '/uploads';
// $CONFIG_APP['url_uploads']  = 'http://uploads.app.local';
$CONFIG_APP['url_uploads_web'] = $CONFIG_APP['url_uploads'];

# Database -------
$CONFIG_DB['default'] = [
  'HOST'     => 'mysql',
  'USER'     => 'default',
  'PASSWORD' => 'secret',
  'DBNAME'   => 'membrillo'
];
