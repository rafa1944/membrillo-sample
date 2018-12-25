<?php
use angelrove\membrillo\GenQuery;
use angelrove\membrillo\WObjectsStatus\Event;


switch(Event::$OPER) {

  case 'insert':
    GenQuery::helper_insert(SqlQueries::$TABLE);
  break;

  case 'update':
    GenQuery::helper_update(SqlQueries::$TABLE);
  break;

  case 'delete':
    GenQuery::delete(SqlQueries::$TABLE);
  break;

}
