<?
use angelrove\utils\CssJsLoad;
use angelrove\membrillo2\WPage\Navbar;


// Theme ----------------
// CssJsLoad::set(__DIR__.'/_themes/tuning-yeti.css');

CssJsLoad::set(__DIR__.'/_themes/tuning-basic.css');
CssJsLoad::set(__DIR__.'/_themes/tuning-metro.css');
CssJsLoad::set(__DIR__.'/_themes/my.css');

Navbar::setInverse(true);
