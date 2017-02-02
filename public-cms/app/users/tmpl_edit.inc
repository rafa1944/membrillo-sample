<?
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WObjectsStatus\Event;

$controlName = 'simple';

// Deshabilitar login "administrador"
$disabledLogin = (Event::$ROW_ID == 1)? 'disabled' : '';

//-------
$formEdit = new WForm($controlName, SqlQueries::row());
$datos = $formEdit->getDatos();

// $wInputHtml = new WInputHtml();

// Campos ------
$listCampos = array(
    array('User', '<input '.$disabledLogin.' type="text" class="form-control" id="login" name="login" value="'.$datos['login'].'">'),
   'passwd' => 'Passwd',
   'name'   => 'Nombre',
);
?>

<?WApplication::getHtm()?>
  <?$formEdit->get()?>
    <?$formEdit->setFields($listCampos, $datos)?>
  <?$formEdit->getWForm_END()?>
<?WApplication::getHtm_END()?>
