<?php
/**
 * @file
 * Reto Pais theme templating functions.
 */

/**
 * Implements template_preprocess_page().
 */
function retopais_preprocess_page(&$variables) {
  // Add enquire.js.
  drupal_add_js(libraries_get_path('enquirejs') . '/enquire.min.js');
}
