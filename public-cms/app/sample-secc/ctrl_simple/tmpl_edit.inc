<?
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WInputs\WInputHtml\WInputHtml;


$controlName = 'simple';

$formEdit = new WForm($controlName, SqlQueries::row());
$datos = $formEdit->getDatos();

$wInputHtml = new WInputHtml();

// Campos ------
$listCampos = array(
    array('User', '<input '.$disabledLogin.' type="text" class="form-control" id="login" name="login" value="'.$datos['login'].'">'),
   'passwd' => 'Passwd',
   'name'   => 'Nombre',
    array('Other', '<input type="text" class="form-control" name="xxx" value="xxx">'),
    array('Other', $wInputCheck->get('check_1', 'WInputCheck 2', 1) .' &nbsp; '. $wInputCheck->get('check_1', 'WInputCheck 2', 1)),
    array('Other', $wInputHtml->get('WInputHtml2', '')),
);
?>

<?WApplication::getHtm()?>
  <?$formEdit->getWForm()?>
    <?$formEdit->setFields($listCampos, $datos)?>
  <?$formEdit->getWForm_END()?>
<?WApplication::getHtm_END()?>
