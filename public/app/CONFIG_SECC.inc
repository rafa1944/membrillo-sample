<?php
use angelrove\membrillo2\Login\Login;

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
global $CONFIG_SECCIONES;

$CONFIG_SECCIONES->setSections($listSecciones, $listSubSecc);
$CONFIG_SECCIONES->setDefault('users');
