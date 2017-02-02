<?
namespace angelrove\membrillo2\WPage;

// Clear template ---
// $CONFIG_APP['bootstrap']['theme'] = false;
// WPage::set_view_empty();

// WApplication -------------------------------------------
CssJsLoad::set(__DIR__.'/main.css');
require_once('_libs/WApplication/WApplication.inc');
