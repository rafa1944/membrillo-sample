<?
use angelrove\membrillo\WObjects\WForm\WForm;


$secc_title = $seccCtrl->title . ' - Insertar -';

/** Form edit **/
 $controlName = 'simple';
 $id_usuario = $seccCtrl->getRowId($controlName);

 // Datos
 $datos = array();
 if($seccCtrl->EVENT == 'editUpdate') {
    $secc_title = $seccCtrl->title . ' - Modificar -';
    $datos = SqlQueries::row($id_usuario);
 }
 if($errors) {
    $datos = array_merge($datos, $_POST);
 }

 // WForm
 $formEdit = new WForm($controlName);
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

   <tr><td>Nombre</td><td><input type="text" size="40" name="nombre" value="<?=$datos['nombre']?>"></td></tr>

   <tr><td colspan="2"><br><b>WInputs</b> <hr></td></tr>
   <tr><td colspan="2">WInputRadios <?$wInputRadios->get('test', array('d1','d2','d3'), 'd2')?></td></tr>
   <tr><td colspan="2">
     <?$wInputCheck->get('test1', 'WInputCheck 1', '')?> &nbsp;
     <?$wInputCheck->get('test2', 'WInputCheck 2', 1)?>
   </td></tr>
   <tr><td colspan="2">
     WInputHtml2<br><?$wInputHtml2->get('WInputHtml2', '')?>
   </td></tr>

 <?$formEdit->getWForm_END()?>
<?WApplication::getHtm_END()?>
