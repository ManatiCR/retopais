<?php
/**
 * @file
 * Reto Pais Page full width layout definition.
 */

$plugin = array(
  'title'       => t('Simple page with sidebar'),
  'category'    => t('Reto País'),
  'icon'        => 'icon.png',
  'theme'       => 'retopais_sidebar',
  'admin css'   => '../../css/panels-layouts/retopais_sidebar.admin.css',
  'regions'     => array(
    'first-full'     => t('First full'),
    'second'         => t('Second'),
    'third-full'     => t('Third full'),
    'fourth'         => t('Fourth'),
  ),
);
