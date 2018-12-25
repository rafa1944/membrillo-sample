<?php
/**
 * Class Main
 *
 * @author José A. Romero Vegas <jangel.romero@gmail.com>
 */

namespace Main;

use angelrove\membrillo\AppCms;
require_once __DIR__ . '/../vendor/autoload.php';


class Main extends AppCms
{
    //------------------------------------------------------
    public static function run(array $args=array())
    {
        new Main();
    }
    //------------------------------------------------------
    public function __construct()
    {
        parent::__construct(__DIR__);
    }
    //------------------------------------------------------
}
