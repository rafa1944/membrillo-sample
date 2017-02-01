<?
switch($seccCtrl->EVENT) {

  case 'editNew':
  case 'editUpdate':
    include('ctrl_simple/tmpl_edit.inc');
  break;

  default:
    include('tmpl_main.inc');
  break;

}
