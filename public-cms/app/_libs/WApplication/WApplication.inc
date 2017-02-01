<?
/**
 * jangel.romero@gmail.com
 *
 */

use angelrove\membrillo2\WPage\WPage;


class WApplication
{
  //----------------------------------------------------
  static function getHtm()
  {
    WPage::start();
  }
  //---------------------------------
  static function getHtm_END() {
    WPage::end();
  }
  //----------------------------------------------------
}

