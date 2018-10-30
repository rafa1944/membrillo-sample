<?php
use angelrove\membrillo2\WObjectsStatus\Event;
use App\Models\User;

switch(Event::$EVENT) {

  case CRUD_EDIT_NEW:
    $form_data = User::findEmpty();
    include('tmpl_edit.inc');
  break;

  case CRUD_EDIT_UPDATE:
    // if (Event::$CONTROL == 'xxx') { }

    $form_data = User::findById(Event::$ROW_ID);
    include('tmpl_edit.inc');
  break;

  default:
    include('tmpl_main.inc');
  break;

}
