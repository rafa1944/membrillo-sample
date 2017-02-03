<?
/**
 * @author José A. Romero Vegas <jangel.romero@gmail.com>
 *
 */

use membrillo\status\Session;
use membrillo\status\SeccCtrl;
use membrillo\status\Config_Secciones;
use membrillo\LoginCtrl;
use membrillo\Messages;


//----------------------------------------------------//
/** SESSION **/
 session_start();
//----------------------------------------------------//

//----------------------------------------------------//
/** WApp objects **/
 LoginCtrl::init();

 // >> $CONFIG_SECCIONES ----
 $CONFIG_SECCIONES = Session::get('CONFIG_SECCIONES');

 // >> $seccCtrl ------------
 $seccCtrl = Session::get('seccCtrl');
 //$seccCtrl->initPage();

//----------------------------------------------------//
/** System services **/
if(isset($_REQUEST['sys_service'])) {
   if($_REQUEST['sys_service'] == 'Messages_get') {
      Messages::ajax_show_msg();
   }
   exit();
}

//----------------------------------------------------//
//@include_once('onInitPage.inc');

// Out
$secc = '';
if(isset($_REQUEST['secc'])) {
  if($_REQUEST['secc']) {
     $secc = $_REQUEST['secc'].'/';
  }
}
else {
   $secc = $CONFIG_SECCIONES->getFolder($seccCtrl->secc).'/';
}

require('./app/'.$secc.'ajax-'.$_REQUEST['service'].'.inc');
//----------------------------------------------------//
