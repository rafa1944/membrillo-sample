<?
/**
 * >> DOC_ROOT_MAIN
 *    DOCUMENT_ROOT
 *    IS_LOCALHOST
 */

define('CACHE_PATH', __DIR__.'/_cache');
define('CACHE_URL', '/_cache');

$CONFIG_APP['errors']['log_file_pref'] .= 'admin-';

$CONFIG_APP['debug']['SQL'] = false;

// System -----------------------
if($CONFIG_APP['errors']['display']) {
   error_reporting(E_ALL ^ E_NOTICE);
}
