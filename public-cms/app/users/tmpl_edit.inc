<?
use angelrove\membrillo\WObjects\WForm\WForm;
use angelrove\membrillo\WInputs\WInputCheck\WInputCheck;
use angelrove\membrillo\WInputs\WInputSelect\WInputSelect;


$secc_title = $seccCtrl->title . ' - Insertar -';

/** Form edit **/
 $controlName = 'simple';
 $id_usuario = $seccCtrl->getRowId($controlName);

 // Datos
 $datos = array();
 if($seccCtrl->EVENT == 'editUpdate') {
    $secc_title = $seccCtrl->title . ' - Modificar -';
    $datos = SqlQueries::row($id_usuario);

    // Deshabilitar login "administrador"
    $disabledLogin = '';
    if($id_usuario == 1) $disabledLogin = 'disabled';
 }
 if($errors) {
    $datos = array_merge($datos, $_POST);
 }

 // WForm
 $formEdit = new WForm($controlName);

 $sqlListEmpresas = "SELECT id, nombre FROM empresas";
?>

<?WApplication::getHtm($secc_title)?>
 <?$formEdit->getWForm()?>
   <tr>
     <td>Login / Pass</td>
     <td>
       <input <?=$disabledLogin?> type="text" id="login" name="login" size="19" value="<?=$datos['login']?>"> /
       <input type="text" size="14" maxlength="20" id="passwd" name="passwd" value="<?=$datos['passwd']?>">
     <td>
   </tr>

   <? if($id_usuario != 1): ?>
     <tr><td>Nombre</td><td><input type="text" size="40" name="nombre" value="<?=$datos['nombre']?>"></td></tr>
   <? endif ?>

 <?$formEdit->getWForm_END()?>
<?WApplication::getHtm_END()?>
