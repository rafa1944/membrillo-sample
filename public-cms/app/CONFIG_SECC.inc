<?
$listSecciones = array();

$listSecciones['users'] = 'Users';
$listSecciones['seccs'] = 'Sections';

$listSubSecc['seccs'] = array(
  'sample-secc'  => 'Sample secc',
  'sample-secc2' => 'Sample secc2',
  'sample-secc3' => 'Sample secc3',
);

//----------------------------------------------
$CONFIG_SECCIONES->setSections($listSecciones, $listSubSecc);
$CONFIG_SECCIONES->setDefault('users');
