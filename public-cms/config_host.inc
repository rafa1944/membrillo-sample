<?
/**
 * >> DOC_ROOT_MAIN
 *    DOCUMENT_ROOT
 *    IS_LOCALHOST
 */

define('CACHE_PATH', __DIR__.'/_cache');
define('CACHE_URL', '/_cache');

define('DEBUG_VARS', false);
define('DEBUG_SQL',  false);

$CONFIG_APP['errors']['log_file_pref'] .= 'admin-';

// System -----------------------
// if($CONFIG_APP['errors']['display']) {
//    error_reporting(E_ALL ^ E_NOTICE);
// }
