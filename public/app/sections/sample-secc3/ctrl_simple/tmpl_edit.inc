<?php
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WObjectsStatus\Event;
use angelrove\membrillo2\WInputs\WInputFile\WInputFile;

$controlName = 'simple';

//-------
$formEdit = new WForm($controlName, SqlQueries::$TABLE);
$datos = $formEdit->getDatos();

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

<?php WPage::get() ?>
  <?php $formEdit->get()?>

    <?php $formEdit->getField('User',
      '<input required class="form-control" type="text" name="login" value="'.$datos['login'].'">')?>

    <?php $formEdit->getFields($listCampos, $datos, true)?>

  <?php $formEdit->get_end()?>
<?php WPage::get_end() ?>
