<?
/**
 * @author José A. Romero Vegas <jangel.romero@gmail.com>
 *
 * NOTA: también puede ser llamado por un "cron" o por "ajax"
 *
 */

namespace membrillo;

use membrillo\classes\Errors;
use membrillo\utils\Db_mysql;



class Application
{
  public $conf;

  //-----------------------------------------------------------------
  function __construct($base_dir)
  {
    define('BASE_DIR', dirname($base_dir));

    // $this->conf = $CONF;
  }
  //-----------------------------------------------------------------
  function run()
  {
    global $CONFIG_APP, $CONFIG_DB, $CONFIG_DATA, $CONFIG_DOMAIN;

    /** CONFIG **/
    define('LOG_DIR',       BASE_DIR.'/logs');
    define('UPLOADS_DIR',   BASE_DIR.$CONFIG_APP['rutas']['PATH_UPLOADS'].'/_uploads');
    define('MEMBRILLO_URL', $CONFIG_APP['rutas']['URL_VENDOR'].'/membrillo/core/src');

    $CONFIG_APP['data'] = $CONFIG_DATA;

    if(isset($CONFIG_DOMAIN)) {
       $CONFIG_APP['domain'] = $CONFIG_DOMAIN;
    }

    /** ERRORS **/
    Errors::init();

    /** DB **/
    if(isset($CONFIG_DB['default'])) {
       $datosDb = $CONFIG_DB['default'];
       Db_mysql::getConn($datosDb['HOST'], $datosDb['USER'], $datosDb['PASSWORD'], $datosDb['DBNAME']);
    }

    /** Session **/
    session_start();
  }
  //-----------------------------------------------------------------
}
