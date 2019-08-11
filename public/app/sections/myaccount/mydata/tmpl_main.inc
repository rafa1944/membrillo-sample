<?php
use angelrove\membrillo\WPage\WPage;
use angelrove\membrillo\WObjects\WForm\WForm;
use angelrove\membrillo\WObjectsStatus\Event;
use angelrove\membrillo\WApp\Local;
use angelrove\membrillo\WInputs\WInputFile\WInputFile;
use angelrove\membrillo\Login\Login;
use App\Models\User;

// Edit data ----------------------
$form_data = User::findById(Login::$user_id);

$form = new WForm('simple', $form_data);
$form->set_title(Local::$t['My data']);
$form->isUpdate(Login::$user_id);
$form->setButtons(true, false, false);

$file_photo = new WInputFile('file_photo', $form_data['file_photo']);
?>

<?php WPage::get()?>
    <?php $form->get()?>
        <?=$form->getInput('name', Local::$t['Name'], true)?>
        <?=$form->getInput('email', 'Email', true, 'email')?>
        <?=$form->getField('Photo', $file_photo->get())?>
    <?php $form->get_end()?>
<?php WPage::get_end();
