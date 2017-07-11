<?php
/**
 * @file
 * retopais_feature_field_bases.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function retopais_feature_field_bases_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Blog Categories',
      'machine_name' => 'blog_categories',
      'description' => 'Contains categories for the blog',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'cantons' => array(
      'name' => 'Cantons',
      'machine_name' => 'cantons',
      'description' => 'Contains Costa Rica cantons.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'problems' => array(
      'name' => 'Problems',
      'machine_name' => 'problems',
      'description' => 'Contains problems to be solved by citizens proposals.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'provinces_cantons' => array(
      'name' => 'Provinces and Cantons',
      'machine_name' => 'provinces_cantons',
      'description' => 'Contains Costa Rica Provinces and Cantons',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
