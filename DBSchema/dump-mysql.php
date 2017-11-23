<?php
/**
 * Put a 'pre-commit' file in '.git/hooks/'
 *
 * 'pre-commit' file:
 * ------------------
 * php "DBSchema/dump-mysql.php"
 * exit 0
 * ------------------
 */

//--------
$DOCKER_DIR = "docker-membrillo";
$DBNAME = "membrillo2";
$DBUSER = "root";
$DBPASS = "root";

//--------
$current_dir = getcwd();
$DB_FILE_CREATE = $current_dir."/DBSchema/create-".$DBNAME.".sql";
$DB_FILE_DATA   = $current_dir."/DBSchema/data-"  .$DBNAME.".sql";

//--------
$only_creates = "--no-data --skip-add-drop-table ";
$only_data    = "--no-create-info ";
$dump_command = "--skip-comments -u $DBUSER -p$DBPASS $DBNAME | sed 's/ AUTO_INCREMENT=[0-9]*\b//'";

$dump_command_create = "mysqldump ".$only_creates.$dump_command." > $DB_FILE_CREATE";
$dump_command_data   = "mysqldump ".$only_data   .$dump_command." > $DB_FILE_DATA";

//--------
chdir($DOCKER_DIR);
exec("docker-compose exec mysql ".$dump_command_create);
exec("docker-compose exec mysql ".$dump_command_data);

//---------
chdir($current_dir);
exec("git add $DB_FILE_CREATE $DB_FILE_DATA");

# mysqldump --no-data --skip-add-drop-table --skip-comments -u $DBUSER -p$DBPASS $DBNAME > $DBFILE.sql
