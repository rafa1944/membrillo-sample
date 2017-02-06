<?
use angelrove\membrillo2\WPage\WPage;
use angelrove\membrillo2\WObjects\WForm\WForm;
use angelrove\membrillo2\WObjectsStatus\Event;


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
?>

<?WPage::get()?>
  <?$formEdit->get()?>
    <?$formEdit->setFields($listCampos, $datos)?>
  <?$formEdit->get_end()?>
<?WPage::get_end()?>
