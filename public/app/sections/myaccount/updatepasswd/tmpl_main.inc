<?php
use angelrove\membrillo\WPage\WPage;
use angelrove\membrillo\WObjects\WForm\WForm;
use angelrove\membrillo\WObjectsStatus\Event;
use angelrove\membrillo\WApp\Local;
use angelrove\membrillo\Login\Login;
use App\Models\User;

// Form pass ----------------------
$formPass = new WForm('password', ['password'=>'']);
$formPass->set_title(Local::$t['Change password']);
$formPass->isUpdate(Login::$user_id);
$formPass->setButtons(true, false, false);
?>

<?php WPage::get()?>
    <?php $formPass->get()?>
        <?=$formPass->getInput('password', Local::$t['Password'], true)?>
    <?php $formPass->get_end()?>
<?php WPage::get_end();
