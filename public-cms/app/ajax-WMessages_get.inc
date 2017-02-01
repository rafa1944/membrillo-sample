<?
use angelrove\membrillo\WMessages\WMessages;


$msgs = WMessages::get();
if(!$msgs) {
   exit();
}
?>
<div class="WApplication_msgs">
  <?=$msgs?>
<div>
