<?php
/**
 * @author José A. Romero Vegas <jangel.romero@gmail.com>
 *
 */

require_once(__DIR__.'/../vendor/autoload.php');

$app = new angelrove\membrillo2\AppCms(__DIR__);
$app->run();
