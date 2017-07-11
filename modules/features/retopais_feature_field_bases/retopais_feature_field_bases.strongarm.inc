<?php
/**
 * @file
 * retopais_feature_field_bases.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function retopais_feature_field_bases_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_cantons';
  $strongarm->value = '2';
  $export['rh_taxonomy_term_action_cantons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_problems';
  $strongarm->value = '2';
  $export['rh_taxonomy_term_action_problems'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_taxonomy_term_action_provinces_cantons';
  $strongarm->value = '2';
  $export['rh_taxonomy_term_action_provinces_cantons'] = $strongarm;

  return $export;
}
