<?
/**
 * José A. Romero Vegas, 2006
 * jangel.romero@gmail.com
 *
 */

use angelrove\membrillo2\WMessages\WMessages;
use angelrove\membrillo2\WObjects\WMain\WMain;
use angelrove\membrillo2\WObjects\WMainNavbar\WMainNavbar;
use angelrove\membrillo2\WObjects\WFrame\WFrame;


class WApplication
{
  static public $title;

  //----------------------------------------------------
  static function getHtm($title='', $linkClose='', $showClose=false)
  {
   if($title) {
      self::$title = $title;
   }

   WMain::__init();
   WMessages::__init();
   WMainNavbar::__init();
   WFrame::__init();

   //--------
   WMain::start();
    WMainNavbar::show();
     WMessages::show();
    ?><div id="WMainContent"><?
     WFrame::start(self::$title, '', $linkClose, $showClose);
  }
  //---------------------------------
  static function getHtm_END() {
     WFrame::end();
    ?></div><?
    WMain::end();
  }
  //----------------------------------------------------
  //----------------------------------------------------
  static function getHtmBasic($title='') {
    WMain::start();
     WMessages::show();
  }
  //---------------------------------
  static function getHtmBasic_END() {
    WMain::end();
  }
  //----------------------------------------------------
}

