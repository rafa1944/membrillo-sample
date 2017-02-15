<?
use angelrove\utils\CssJsLoad;
use angelrove\membrillo2\WPage\Navbar;


// Theme ----------------
CssJsLoad::set(PATH_VENDOR.'/angelrove/membrillo2/src/_themes/basic-cms.css');
Navbar::setInverse(true);
CssJsLoad::set(PATH_VENDOR.'/angelrove/membrillo2/src/_themes/tuning-metro.css');

// user ---
CssJsLoad::set(__DIR__.'/_themes/my.css');
