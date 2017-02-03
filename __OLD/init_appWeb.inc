<?
/**
 * @author José A. Romero Vegas <jangel.romero@gmail.com>
 *
 */

require('init_front.inc');

//------------------------
$include_path = ini_get('include_path') . PATH_SEPARATOR.
                BASE_DIR.'/app' . PATH_SEPARATOR;
ini_set('include_path', $include_path);

session_start();

//------------------------
require('./app/onInitPage.inc');
require('app/'.$_GET['secc'].'/index.inc');
