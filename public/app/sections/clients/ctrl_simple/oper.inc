<?php
use angelrove\membrillo\WObjectsStatus\Event;
use angelrove\membrillo\Messages;
use App\Models\Clients;

switch(Event::$OPER) {

  case CRUD_OPER_INSERT:
    Clients::create();
  break;

  //--------------------

  case CRUD_OPER_UPDATE:
    Clients::update();
    Messages::set("¡Guardado!");
  break;

  //--------------------

  case CRUD_OPER_DELETE:
    Clients::delete();
    Messages::set("¡Deleted!");
  break;

}
