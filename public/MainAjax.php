<?php
/**
 * Class Main
 *
 * @author José A. Romero Vegas <jangel.romero@gmail.com>
 */

namespace MainAjax;

use angelrove\membrillo\AppCmsAjax;
require_once __DIR__ . '/../vendor/autoload.php';


class MainAjax extends AppCmsAjax
{
    //------------------------------------------------------
    public static function run(array $args=array())
    {
        new MainAjax();
    }
    //------------------------------------------------------
    public function __construct()
    {
        parent::__construct(__DIR__);
    }
    //------------------------------------------------------
}
