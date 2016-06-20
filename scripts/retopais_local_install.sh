#!/usr/bin/env bash
DRUSH="./vendor/bin/drush"
SITE_ALIAS="@retopais.retopais.dev"
$DRUSH $SITE_ALIAS cc drush
echo "Installing..."
$DRUSH $SITE_ALIAS si --account-pass=admin -y
echo "Setting master scope..."
$DRUSH $SITE_ALIAS master-set-current-scope local
echo "Executing master..."
$DRUSH $SITE_ALIAS master-execute -y
echo "Setting environment..."
$DRUSH $SITE_ALIAS environment-switch local --force
echo "Cleaning cache..."
$DRUSH $SITE_ALIAS cc all
