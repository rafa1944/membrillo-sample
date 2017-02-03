<?
/**
 * @author José A. Romero Vegas <jangel.romero@gmail.com>
 *
 */

namespace membrillo;

use membrillo/classes/Cron_Utils;


class AppCron extends Application
{
   //--------------------------------------------------
   function __construct(base_dir)
   {
     parent::__construct($base_dir);
     $app = $this;
   }
   //--------------------------------------------------
   function run()
   {
      // System process -------------
      // Cron_Utils::db_create_backup();
      // Cron_Utils::db_delete_backups();
      //-----------------------------

      // User processes -------------
      define('TIME_HOUR',      date('H'));
      define('TIME_WEEK_DAY',  date('N'));
      define('TIME_MONTH_DAY', date('d'));

      $this->exec_tasks($TIMER_DAILY,   TIME_HOUR);
      $this->exec_tasks($TIMER_WEEKLY,  TIME_WEEK_DAY.'-'.TIME_HOUR);
      $this->exec_tasks($TIMER_MONTHLY, TIME_MONTH_DAY.'-'.TIME_HOUR);

      echo "Cron ok";
   }
   //--------------------------------------------------
   function exec_tasks($dateList, $dateToFind)
   {
      // Con "require_once" evito que ocurra el mismo proceso más de una vez
      foreach ($dateList as $task => $dates) {
         if (in_array($dateToFind, $dates)) {
             require_once('tasks/task_'.$task.'.inc');
         }
      }
   }
   //--------------------------------------------------
   }
