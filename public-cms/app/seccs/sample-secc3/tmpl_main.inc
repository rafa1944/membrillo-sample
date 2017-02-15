<?
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WPage\Navbar;
use angelrove\membrillo2\WObjects\WList\WList;
use angelrove\membrillo2\WObjects\WList\WListColumn;


$controlName = 'simple';

//-----------------------------
$campos = array(
    new WListColumn('date_insert', 'Date insert'),
    new WListColumn('name',  'Name'),
    new WListColumn('login', 'Login')
);

$htmList = new WList($controlName, SqlQueries::rows(), $campos);
$htmList->setDefaultOrder('login');

$htmList->showNew();
$htmList->showUpdate();
$htmList->showDelete();
$htmList->setNumRowsPage(3);
?>

<? WPage::get_main() ?>
  <main class="container">
    <? WPage::get_page_header() ?>
    <? Messages::show() ?>
    <?=$htmList->formSearch_complet()?>
    <?=$htmList->get()?>
  </main>
  <? WPage::get_footer() ?>
<? WPage::get_main_end() ?>
