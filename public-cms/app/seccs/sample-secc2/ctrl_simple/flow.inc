<?
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\membrillo2\Messages;


Messages::set("Event: ".Event::$EVENT);

switch(Event::$EVENT) {

  default:
    include('tmpl_main.inc');
  break;

}
