#!/usr/bin/env bash
DRUSH="./.vendor/bin/drush"
SITE_ALIAS="@retopais.retopais.local"
DB_FILE="./retopais.sql.gz"
if [ ! -f $DB_FILE ]; then
  wget `terminus backup:get retopais.live --element=db` -O retopais.sql.gz
fi
$DRUSH $SITE_ALIAS cc drush
echo "Drop database..."
$DRUSH $SITE_ALIAS sql-drop -y
echo "Import database..."
gunzip -c $DB_FILE | $DRUSH $SITE_ALIAS sqlc
echo "Sanitizing de database..."
$DRUSH $SITE_ALIAS sqlsan -y
echo "Enable Master..."
$DRUSH $SITE_ALIAS en -y master
$DRUSH $SITE_ALIAS cc drush
echo "Setting master scope..."
$DRUSH $SITE_ALIAS master-set-current-scope local
echo "Executing master..."
$DRUSH $SITE_ALIAS master-execute -y
echo "Update database..."
$DRUSH $SITE_ALIAS updb -y
echo "Reverting features..."
$DRUSH $SITE_ALIAS fra -y
echo "Setting environment..."
$DRUSH $SITE_ALIAS environment-switch local --force
echo "Cleaning cache..."
$DRUSH $SITE_ALIAS cc all
echo "Generating an admin one time login..."
$DRUSH $SITE_ALIAS uli
