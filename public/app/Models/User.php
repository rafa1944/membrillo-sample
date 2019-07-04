<?php
namespace App\Models;

use angelrove\membrillo\Database\Model;
use angelrove\membrillo\Database\GenQuery;
use angelrove\membrillo\Login\Login;

class User extends Model
{
    protected const CONF = array(
        'table' => 'users',
        'soft_delete' => true,
    );

    public static $profiles = array(
      'admin' => 'Admin',
      'basic' => 'Basic',
      // 'root' => 'Root', // hidden
    );
}
