<?
use angelrove\utils\CssJsLoad;

use angelrove\membrillo\WObjects\WList\WList;
use angelrove\membrillo\WObjects\WList\WListColumn;

//-----------------------------
CssJsLoad::set(__DIR__.'/sample.css');

//-----------------------------
$controlName = 'simple';
$campos = array(new WListColumn('date_insert', 'Date insert', '140', 'center'),
                new WListColumn('nombre',      'Nombre', '220'),
                new WListColumn('login',       'Login',  '90')
                );

$sqlUsers = SqlQueries::rows();
$htmList = new WList($controlName, $sqlUsers, $campos);

$htmList->showPaginacion(false);
$htmList->setDefaultOrder('nombre, login');
$htmList->showNew();
$htmList->showUpdate();
$htmList->showDelete();
?>

<? WApplication::getHtm($seccCtrl->title) ?>
   <h3>Sample text</h3>

  <?=$htmList->getHtmRows()?>
<? WApplication::getHtm_END() ?>
