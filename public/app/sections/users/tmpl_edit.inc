<?php
use angelrove\membrillo\WPage\WPage;
use angelrove\membrillo\WObjects\WForm\WForm;
use angelrove\membrillo\WObjectsStatus\Event;
use App\Models\User;

$controlName = 'simple';

// form_data -------
switch(Event::$EVENT) {
  case CRUD_EDIT_NEW:
    $form_data = User::findEmpty();
  break;

  case CRUD_EDIT_UPDATE:
    $form_data = User::findById(Event::$ROW_ID);
  break;
}

//-------
$form = new WForm($controlName, $form_data);

// Campos -----
$loginType = (Event::$ROW_ID == 1)? 'text_read' : 'text';
?>

<?php WPage::get()?>
  <?php $form->get()?>

    <?=$form->getInput('name', 'Nombre', true)?>
    <?=$form->getInput('login',  'Login', true, $loginType)?>
    <?=$form->getInput('passwd', 'Password', true)?>
    <?=$form->getInput('profile', 'Profile', true, 'select_array', [User::$profileValues])?>

  <?php $form->get_end()?>
<?php WPage::get_end()?>
