<?
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\membrillo2\WInputs\WInputFile\WInputFile;


$controlName = 'simple';

//-------
$formEdit = new WForm($controlName, SqlQueries::row());
$datos = $formEdit->getDatos();

// Campos ------
$disabledLogin = (Event::$ROW_ID == 1)? 'disabled' : '';

$listCampos = array(
    array('User',
          '<input '.$disabledLogin.' type="text" class="form-control" id="login" name="login" value="'.$datos['login'].'">'),
   'passwd' => 'Passwd',
   'name'   => 'Nombre',
);

// File ---
$input_photo = new WInputFile('file_photo', $datos['file_photo']);
$input_photo->showImg(true, 200);
$input_photo->img_setMaxWidth(1060);
?>

<? WPage::get() ?>
  <?$formEdit->get()?>
    <?$formEdit->setFields($listCampos, $datos)?>

    <?$formEdit->setField('Test', $input_photo->get())?>
  <?$formEdit->get_end()?>
<? WPage::get_end() ?>
