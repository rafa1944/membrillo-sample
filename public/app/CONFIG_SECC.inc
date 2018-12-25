<?php
use angelrove\membrillo2\WApp\Config_Secciones;
use angelrove\membrillo2\WApp\Local;
use angelrove\membrillo2\WApp\Session;
use angelrove\membrillo2\Login\Login;

//-------------
$CONFIG_SECCIONES = Session::set('CONFIG_SECCIONES', new Config_Secciones());

// List Sections ------------
$listSecciones = array();
$listSubSecc = array();

$listSecciones['users'] = 'Users';
$listSecciones['seccs'] = 'Sections';

$listSubSecc['seccs'] = array(
  'sample-secc'  => 'Sample secc',
  'sample-secc2' => 'Sample secc2',
  'sample-secc3' => 'Sample secc3',
);

// switch (Login::$INFO['profile']) {
//     case 'root':
//     break;
// }

//----------------------------------------------
$CONFIG_SECCIONES->setSections($listSecciones, $listSubSecc);
$CONFIG_SECCIONES->setDefault('users');
