<?
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\membrillo2\WInputs\WInputFile\WInputFile;


$controlName = 'simple';

//-------
$formEdit = new WForm($controlName, SqlQueries::$TABLE);
$datos = $formEdit->getDatos();

// Campos ------
$disabledLogin = (Event::$ROW_ID == 1)? 'disabled' : '';

// File
$input_photo = new WInputFile('file_photo', $datos['file_photo']);
$input_photo->set_required(true);
$input_photo->showImg(true, 200);
$input_photo->img_setMaxWidth(1060);

$listCampos = array(
   'passwd' => 'Passwd',
   'name'   => 'Nombre',
    array('Foto', $input_photo->get()),
);
?>

<? WPage::get() ?>
  <?$formEdit->get()?>

    <?$formEdit->getField('User',
      '<input required class="form-control" type="text" '.$disabledLogin.' id="login" name="login" value="'.$datos['login'].'">')?>

    <?$formEdit->getFields($listCampos, $datos, true)?>

  <?$formEdit->get_end()?>
<? WPage::get_end() ?>