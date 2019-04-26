<?php
/**
 * @file
 * Reto Pais Page with Sidebar layout definition.
 */

$plugin = array(
  'title'       => t('Simple page with sidebar'),
  'category'    => t('Reto País'),
  'icon'        => 'icon.png',
  'theme'       => 'retopais_sidebar',
  'admin css'   => '../../css/panels-layouts/retopais_sidebar.admin.css',
  'regions'     => array(
    'left'          => t('Left'),
    'right'         => t('Right'),
  ),
);
