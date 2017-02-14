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

$listCampos = array(
    array('User', '<input class="form-control" type="text" '.$disabledLogin.' id="login" name="login" value="'.$datos['login'].'">'),
   'passwd' => 'Passwd',
   'name'   => 'Nombre',
);
?>

<?WPage::get()?>
  <?$formEdit->get()?>
    <?$formEdit->getFields($listCampos, $datos)?>
  <?$formEdit->get_end()?>
<?WPage::get_end()?>
