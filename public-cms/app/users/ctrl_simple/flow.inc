<?
switch($seccCtrl->EVENT) {

  case 'editNew':
  case 'editUpdate':
    include('tmpl_edit.inc');
  break;

  default:
    include('tmpl_main.inc');
  break;

}
?>
