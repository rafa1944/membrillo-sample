<?
namespace app\lib;

use angelrove\membrillo\WPage\WPage;
use angelrove\membrillo\Messages;


class TmplPage
{
    //-----------------------------------------------
    public static function get()
    {
        WPage::get_main();
          ?><main class="container-fluid"><?
          Messages::show();
    }
    //-----------------------------------------------
    public static function get_end()
    {
          ?></main><?
        WPage::get_main_end();
    }
    //-----------------------------------------------
}