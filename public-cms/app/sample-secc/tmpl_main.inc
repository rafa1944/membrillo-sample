<?
use angelrove\membrillo2\WObjects\WList\WList;
use angelrove\membrillo2\WObjects\WList\WListColumn;

//-----------------------------
$controlName = 'simple';
$campos = array(new WListColumn('date_insert', 'Date insert', '140'),
                new WListColumn('name',   'Name', '220'),
                new WListColumn('login',  'Login',  '90')
                );

$htmList = new WList($controlName, SqlQueries::rows(), $campos);

$htmList->setDefaultOrder('login');

$htmList->showNew();
$htmList->showUpdate();
$htmList->showDelete();
?>

<? WApplication::getHtm() ?>
   <?=$htmList->formSearch_complet()?>
   <?=$htmList->getHtmRows()?>
<? WApplication::getHtm_END() ?>
