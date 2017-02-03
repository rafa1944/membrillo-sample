<?
/**
 * Página de error personalizada
 *   - es preferible llamarla mediante un "include()", ya que así se
 *     mantiene la url en la barra de direcciones
 */

header("HTTP/1.0 404 Not Found");
header("Status: 404 Not Found");
//trigger_error('404', E_USER_NOTICE);
?>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
 <meta name="viewport" content="initial-scale=1, maximum-scale=1">
</head>
<body>

<h1 style="text-align:center">Error</h1>

<table style="border:1px solid #ccc" cellspacing="10" cellpadding="10" align="center">
 <tr><td style="text-align:center">
   <div style="color:red">
     <b>No hay una página web en esta dirección</b>
   </div>
   <br>

   <div>
    Ha ocurrido un error al mostrar esta página. <br>
    El error ya ha sido registrado y será rectificado lo antes posible.
   </div>
   <br>

   Error 404 <b>Not Found</b><br>
 </td></tr>
</table>

</body>
</html>
<?exit();?>
