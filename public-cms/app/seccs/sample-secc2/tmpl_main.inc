<?
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WPage\Navbar;
use angelrove\membrillo2\Messages;
?>

<? WPage::get_main() ?>

  <? WPage::get_web_header() ?>
  <? Navbar::get() ?>
  <main class="container-fluid">
    <? WPage::get_page_header() ?>
    <? Messages::show() ?>

    ¡¡Holaaaa!!

  </main>
  <? WPage::get_footer() ?>

<? WPage::get_main_end() ?>
