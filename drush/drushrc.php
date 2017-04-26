<?php

/**
 * @file
 * Custom Drush settings.
 * @link https://github.com/drush-ops/drush/blob/master/examples/example.aliases.drushrc.php
 */

$command_specific['master-exec'] = array(
  'cache-clear-before' => 'retopais_taxonomy',
);
