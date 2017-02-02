<?
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WObjectsStatus\Event;

use angelrove\membrillo2\WInputs\WInputRadios;
use angelrove\membrillo2\WInputs\WInputCheck;
use angelrove\membrillo2\WInputs\WInputHtml\WInputHtml;



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
  <?$formEdit->getWForm()?>

    <?$formEdit->setFields($listCampos, $datos)?>
    <b>Samples</b><hr>
    <?$formEdit->setField('Test',  '<input type="text" class="form-control" name="xxx" value="xxx">')?>
    <?$formEdit->setField('InputCheck', WInputCheck::get('check_1', 'WInputCheck 2', 1).
                                        WInputCheck::get('check_1', 'WInputCheck 2', 1)
                          )?>
    <?//$formEdit->setField('Test', $wInputHtml->get('theInputHtml', ''))?>

  <?$formEdit->getWForm_END()?>
<?WApplication::getHtm_END()?>
