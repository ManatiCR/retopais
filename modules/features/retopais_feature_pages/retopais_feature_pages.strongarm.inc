<?php

/**
 * @file
 * retopais_feature_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function retopais_feature_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'homepage';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
