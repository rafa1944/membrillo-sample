<?php
use angelrove\membrillo\WApp\Config_Secciones;
use angelrove\membrillo\WApp\Local;
use angelrove\membrillo\WApp\Session;
use angelrove\membrillo\Login\Login;

//-------------
$CONFIG_SECCIONES = Session::set('CONFIG_SECCIONES', new Config_Secciones());

// List Sections ------------
$CONFIG_SECCIONES->setSection("myaccount", Local::$t['My account'])
    ->logo('<i class="fas fa-user-cog fa-lg"></i>');
$CONFIG_SECCIONES->setSubSection("myaccount", "mydata", Local::$t['My data']);
$CONFIG_SECCIONES->setSubSection("myaccount", "updatepasswd", Local::$t['Change password']);

$CONFIG_SECCIONES->setSection("users", Local::$t['Users'], true)
    ->logo('<i class="fas fa-users fa-lg"></i>');

$CONFIG_SECCIONES->setSection("sample-secc2", Local::$t['Sample secc2']);
$CONFIG_SECCIONES->setSection("sample-secc3", Local::$t['Sample secc3']);


// switch (Login::$INFO['profile']) {
//     case 'root':
//     break;
// }
