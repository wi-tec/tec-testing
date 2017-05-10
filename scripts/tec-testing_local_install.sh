#!/usr/bin/env bash
DRUSH="./.vendor/bin/drush"
SITE_ALIAS="@tec-testing.tec-testing.dev"
DB_FILE="./tec-testing.sql.gz"
if [ ! -f $DB_FILE ]; then
  echo 'DB Dump does not exist. Please download it to this folder'
  exit 1
fi
$DRUSH $SITE_ALIAS cc drush
echo "Drop database..."
$DRUSH $SITE_ALIAS sql-drop -y
echo "Import database..."
gunzip -c $DB_FILE | $DRUSH $SITE_ALIAS sqlc
echo "Sanitizing the database..."
$DRUSH $SITE_ALIAS sqlsan -y
echo "Setting master scope..."
#$DRUSH $SITE_ALIAS master-set-current-scope local
echo "Executing master..."
#$DRUSH $SITE_ALIAS master-execute -y
echo "Update database..."
$DRUSH $SITE_ALIAS updb -y
echo "Cleaning cache..."
$DRUSH $SITE_ALIAS cc all
