<?
use angelrove\utils\CssJsLoad;
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WPage\Navbar;


// Theme ----------------
// CssJsLoad::set('https://maxcdn.bootstrapcdn.com/bootswatch/3.3.7/yeti/bootstrap.min.css');
// CssJsLoad::set(__DIR__.'/_themes/tuning-yeti.css');

CssJsLoad::set(__DIR__.'/_themes/tuning-basic.css');
CssJsLoad::set(__DIR__.'/_themes/tuning-metro.css');
CssJsLoad::set(__DIR__.'/_themes/my.css');

Navbar::setInverse(true);

// WPage conf ---------------
// WPage::set_view_empty();


// Compatibilidad ------------
class WApplication
{
  static function getHtm()
  {
    WPage::start();
  }
  static function getHtm_END()
  {
    WPage::end();
  }
}
//----------------------------
