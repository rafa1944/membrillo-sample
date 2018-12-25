<?php
use angelrove\membrillo\WPage\WPage;
use angelrove\membrillo\WObjects\WList\WList;
use angelrove\membrillo\WObjects\WList\WListColumn;
use angelrove\membrillo\Login\Login;
use App\Models\User;


$controlName = 'simple';

//-----------------------------
$campos = array(new WListColumn('created_at', 'Created at', '90', 'center'),
                new WListColumn('profile', 'Profile', '90'),
                new WListColumn('name',  'Name',  '220'),
                new WListColumn('login', 'Login', '90')
                );

$htmList = new WList($controlName, User::read(), $campos);

$htmList->setDefaultOrder('name');
$htmList->showPagination(false);
$htmList->showNew();
$htmList->showUpdate();
$htmList->showDelete();

$url_admin = \angelrove\membrillo\CrudUrl::get(CRUD_EDIT_UPDATE, $controlName, 1);
?>

<?php WPage::get()?>
  <?php if(Login::$user_id == 1) { ?>
     root: <a href="<?=$url_admin?>">Update...</a><br>
  <?php }?>

  <?=$htmList->get()?>
<?php WPage::get_end()?>
