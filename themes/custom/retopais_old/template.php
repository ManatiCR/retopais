<?php
/**
 * @file
 * Reto Pais theme templating functions.
 */

/**
 * Implements template_preprocess_html().
 */
function retopaisold_preprocess_html(&$variables) {
  // Add enquire.js.
  drupal_add_js(libraries_get_path('enquirejs') . '/enquire.min.js');
}
