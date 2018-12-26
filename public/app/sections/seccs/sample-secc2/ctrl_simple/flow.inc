<?php
use angelrove\membrillo\WObjectsStatus\Event;
use angelrove\membrillo\Messages;


Messages::set("Event: ".Event::$EVENT);

switch(Event::$EVENT) {

  default:
    include('tmpl_main.inc');
  break;

}
