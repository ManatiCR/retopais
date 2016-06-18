<?php
/**
 * @file
 * Reto País site layout template.
 */

// Plugin definition.
$plugin = array(
  'title'       => t('General Site Wrapper'),
  'category'    => t('Reto País'),
  'icon'        => 'icon.png',
  'theme'       => 'retopais_site_layout',
  'admin css'   => '../../css/panels-layouts/retopais-site-layout.css',
  'regions'      => array(
    'top_bar'    => t('Top Bar'),
    'header'     => t('Header'),
    'nav'        => t('Nav'),
    'main'       => t('Main Content'),
    'footer'     => t('Footer'),
  ),
);
