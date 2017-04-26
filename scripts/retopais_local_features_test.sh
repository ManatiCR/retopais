#!/usr/bin/env bash
DRUSH="./.vendor/bin/drush"
SITE_ALIAS="@retopais.retopais.dev"
$DRUSH $SITE_ALIAS fl | grep -qi 'overridden' && (echo 'Overridden Features: fail' && exit 1) || (echo 'Overridden Features: pass' && exit 0)
