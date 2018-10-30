<?php
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

<?php WPage::get_main() ?>
  <main class="container">
    <?php WPage::get_page_header() ?>
    <?php Messages::show() ?>
    <?=$htmList->formSearch_complet()?>
    <?=$htmList->get()?>
  </main>
  <?php WPage::get_footer() ?>
<?php WPage::get_main_end() ?>
