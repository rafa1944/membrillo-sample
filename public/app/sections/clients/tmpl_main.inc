<?php
use angelrove\membrillo\WPage\WPage;
use angelrove\membrillo\WObjects\WList\WList;
use angelrove\membrillo\WObjects\WList\WListColumn;
use App\Models\Clients;


$controlName = 'simple';

//-----------------------------
$campos = array(new WListColumn('created_at', 'Created at', '90', 'center'),
                new WListColumn('name',  'Name',  '220'),
                );

$htmList = new WList($controlName, Clients::read(), $campos);

// $htmList->setDefaultOrder('xxxx');
// $htmList->showPagination(false);
$htmList->showNew();
$htmList->showUpdate();
$htmList->showDelete();
?>

<?php WPage::get()?>
  <?=$htmList->get()?>
<?php WPage::get_end()?>
