<?
use angelrove\membrillo2\WObjects\WList\WList;
use angelrove\membrillo2\WObjects\WList\WListColumn;
use angelrove\membrillo2\Login\Login;

//-----------------------------
$controlName = 'simple';
$campos = array(new WListColumn('date_insert', 'Date insert', '140', 'center'),
                new WListColumn('name',        'Name', '220'),
                new WListColumn('login',       'Login',  '90')
                );

$htmList = new WList($controlName, SqlQueries::rows(), $campos);

$htmList->setDefaultOrder('login');
$htmList->showPaginacion(false);
$htmList->showNew();
$htmList->showUpdate();
$htmList->showDelete();
?>

<?WApplication::getHtm($seccCtrl->title)?>

  <? if(Login::$user_id == 1) { ?>
     root: <a href="?CONTROL=simple&EVENT=editUpdate&ROW_ID=1">Update...</a><br>
  <?}?>

  <?=$htmList->getHtmRows()?>
<?WApplication::getHtm_END()?>
