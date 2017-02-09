<?
use angelrove\membrillo2\WPage\WPage;
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
?>

<?WPage::get()?>
  <?=$htmList->formSearch_complet()?>
  <?=$htmList->get()?>
<?WPage::get_end()?>
