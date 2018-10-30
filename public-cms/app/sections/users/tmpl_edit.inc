<?php
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\utils\CssJsLoad;
use App\Models\User;

$controlName = 'simple';

//-------
$form = new WForm($controlName, $form_data);

// Campos -----
$loginType = (Event::$ROW_ID == 1)? 'text_read' : 'text';

CssJsLoad::set(__DIR__.'/autocomplete.js');
?>

<?php WPage::get()?>
  <?php $form->get()?>

    <?=$form->getInput('name', 'Nombre', true)?>
    <?=$form->getInput('hobbiespot_user_id', 'Hobbiespot user ID', true, 'number')?>
    <hr>

    <?=$form->getInput('login',  'Login', true, $loginType)?>
    <?=$form->getInput('passwd', 'Password', true)?>
    <?=$form->getInput('profile', 'Profile', true, 'select_array', [User::$profileValues])?>

  <?php $form->get_end()?>
<?php WPage::get_end()?>
