<?php
/* >> $msg */

use angelrove\membrillo\WApp\Local;
global $CONFIG_APP;

?>
<html>
<head>
 <title><?=$CONFIG_APP['data']['TITLE']?> - Login</title>

 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
 <meta name="viewport" content="width=device-width, initial-scale=1">

 <style>
 body {
   margin:0px;
   margin-top:45px;
   font-family: Verdana, Arial;
   color:#333;
   text-align:center;
   background-color:#fff;
 }
 /* --------------- */
 form {
  margin:0px;
 }
 input, select, textarea {
  font-family: Arial, "Helvetica Neue", Verdana;
  font-size: 15px;
 }
 #boxForm select,
 #boxForm input[type="text"], input[type="password"] {
  border-radius: 3px;
  border: 1px solid #bbb;
  padding: 10px;
  color: #555;
  width: 100%;
 }
 input[type="button"], input[type="submit"] {
  padding: 4px 5px;
  min-width:94px;
 }
 /* --------------- */
 #boxForm {
   border:1px solid #ddd;
   border-radius:7px;
   width:450px;
 }
 #boxForm .boxCabecera {
   /*background-color:#fdd;*/
   /*color:#fff;*/
   padding:9px;
   padding-left:10px;
   font-size:18px;
 }
 /* --------------- */
 #boxForm .cuerpo_form {
  padding: 12px;
 }
 #boxForm .boxErrMsg   {
  color:#DD0000;
  padding:3px;
 }

 #boxForm table {
  width: 100%;
 }
 #boxForm table td {
  padding: 6px 0;
 }
 /* --------------- */
 .bt_form {
   padding-left:15px;
   padding-right:15px;
 }

 #Login_pie {
   width:100%;
   font-size:9px;
   color:#888;
 }
 </style>

</head>
<body>

 <!-- Formulario -->
 <table id="boxForm" cellspacing="0" cellpadding="0" align="center">
 <tr><td style="padding: 23px; text-align: center;">

   <img src="/app/_themes/logo-1.png" style="width: 200px">
   <div class="boxCabecera">Inventory</div>

   <form class="cuerpo_form" name="formLogin" method="POST" action="">
      <input type="hidden" name="timezone_offset">

      <?php  foreach($_GET as $name=>$value) { ?>
         <input type="hidden" name="<?=$name?>" value="<?=$value?>">
      <?php }?>

      <div class="boxErrMsg"><?=$msg?></div>

      <table>
        <tr><td><?=Local::$t['Username']?> </td><td><input type="text" name="LOGIN_USER"></td></tr>
        <tr><td><?=Local::$t['Password']?></td><td><input type="password" name="LOGIN_PASSWD"></td></tr>
        <tr><td colspan="2" align="right"><input class="bt_form" type="submit" value="<?=Local::$t['accept']?>"></td></tr>
      </table>
   </form>

 </td></tr>
 </table>
 <!-- FIN Formulario -->

 <!-- Pie -->
 <table align="center"><tr><td id="Login_pie">
  &copy; <?=$CONFIG_APP['data']['COMPANY_NAME']?>
 </td></tr></table>
 <!-- / Pie -->

<script>
document.formLogin.LOGIN_USER.focus();
</script>

</body>
</html>
