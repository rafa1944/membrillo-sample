<?php
use angelrove\membrillo\WObjectsStatus\EventComponent2;
use angelrove\membrillo\WObjectsStatus\ObjectStatus;
use angelrove\membrillo\Messages;

use app\lib\TmplPage;


include_once('app/_libs/TmplPage.php');


// class SimpleComponent extends EventComponent2
// {
//    //----------------------------------------------------------------------------
//    function __construct()
//    {
//       parent::__construct('comp_1');
//    }
//    //----------------------------------------------------------------------------
//    public function parse_oper($oper, $row_id)
//    {
//       switch($oper) {
//          case 'oper_1':
//             echo ">> $oper";
//          break;

//          case 'oper_2':
//             echo ">> $oper";
//          break;
//       }
//    }
//    //----------------------------------------------------------------------------
//    public function parse_event($event)
//    {
//       switch($event) {
//          case 'event_1':
//             echo ">> $event";
//          break;

//          case 'event_2':
//             echo ">> $event";
//          break;
//       }
//    }
//    //----------------------------------------------------------------------------
// }

// new SimpleComponent();
?>

<?php TmplPage::get()?>
  <h1>Hello world!!</h1>
  <a href="<?=angelrove\membrillo\CrudUrl::get('event_test', 'simple', 1)?>">Event >></a>
<?php TmplPage::get_end()?>
