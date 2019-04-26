<?php

/**
 * @file
 * retopais_feature_blog.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function retopais_feature_blog_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'blog';
  $path_breadcrumb->name = 'Blog';
  $path_breadcrumb->path = 'blog';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Blog',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['blog'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'blog_entry';
  $path_breadcrumb->name = 'Blog Entry';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Blog',
      1 => '%node:field-category:name',
    ),
    'paths' => array(
      0 => 'blog',
      1 => 'blog/%node:field-category:name',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = 0;
  $export['blog_entry'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'blog_section';
  $path_breadcrumb->name = 'Blog Section';
  $path_breadcrumb->path = 'blog/%term_name';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Blog',
      1 => '%term_name',
    ),
    'paths' => array(
      0 => 'blog',
      1 => '<none>',
    ),
    'home' => 0,
    'translatable' => 0,
    'arguments' => array(
      'term_name' => array(
        'position' => 1,
        'argument' => 'term',
        'settings' => array(
          'identifier' => 'Taxonomy term: ID',
          'input_form' => 'term',
          'vids' => array(
            1 => '1',
            2 => 0,
            3 => 0,
          ),
          'breadcrumb' => 0,
          'transform' => 1,
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['blog_section'] = $path_breadcrumb;

  return $export;
}
