<?
use angelrove\membrillo2\WObjectsStatus\Event;


switch(Event::$EVENT) {

  case CRUD_EDIT_NEW:
  case CRUD_EDIT_UPDATE:
    include('tmpl_edit.inc');
  break;

  default:
    include('tmpl_main.inc');
  break;

}
