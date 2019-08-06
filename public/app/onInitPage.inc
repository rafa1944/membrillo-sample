<?php
use angelrove\utils\CssJsLoad;
use angelrove\membrillo\WPage\Navbar;

// Theme ----------------
CssJsLoad::set(PATH_VENDOR.'/angelrove/membrillo/src/_themes/basic-cms.css');
Navbar::setInverse(true);
CssJsLoad::set(PATH_VENDOR.'/angelrove/membrillo/src/_themes/tuning-metro.css');

// Theme user ---
CssJsLoad::set(__DIR__.'/_themes/my.css');
