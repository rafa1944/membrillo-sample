<?php
/**
 * Put a 'pre-commit' file in '.git/hooks/'
 *
 * 'pre-commit' file:
------------------
php "DBSchema/dump-mysql.php"
exit 0
------------------
 */

$DBNAME = "membrillo2";
$DBUSER = "root";
$DBPASS = "root";

$SCHEMAPATH = "./DBSchema";
$DB_FILE = $SCHEMAPATH."/".$DBNAME."-".$_SERVER['COMPUTERNAME'].".sql";

# mysqldump --no-data --skip-add-drop-table --skip-comments -u $DBUSER -p$DBPASS $DBNAME > $DBFILE.sql
system("mysqldump --no-data --skip-add-drop-table --skip-comments -u $DBUSER $DBNAME | sed 's/ AUTO_INCREMENT=[0-9]*\b//' > $DB_FILE");
system("git add $DB_FILE");
