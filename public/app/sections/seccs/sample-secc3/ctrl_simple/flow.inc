<?php
use angelrove\membrillo\WObjectsStatus\Event;


switch(Event::$EVENT) {

  case 'editNew':
  case 'editUpdate':
    include('ctrl_simple/tmpl_edit.inc');
  break;

  default:
    include('tmpl_main.inc');
  break;

}
