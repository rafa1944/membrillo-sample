<?php
use angelrove\membrillo\WObjectsStatus\Event;
use angelrove\membrillo\Messages;
use App\Models\User;

switch(Event::$OPER) {

  case CRUD_OPER_INSERT:
    User::create();
  break;

  //--------------------

  case CRUD_OPER_UPDATE:
    User::update();
    Messages::set("¡Guardado!");
  break;

  //--------------------

  case CRUD_OPER_DELETE:
    User::delete();
    Messages::set("¡Deleted!");
  break;

}
