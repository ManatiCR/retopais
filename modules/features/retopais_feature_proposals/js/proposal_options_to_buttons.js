/**
 * @file
 * Change required option fields to buttons.
 */

(function ($, Drupal, window, document) {
  'use strict';
  Drupal.behaviors.proposalsOptionsToButtons = {
    attach: function (context, settings) {
      var fields = settings.proposalsOptionsToButtons;
      for (var index = 0; index < fields.length; index++) {
        var selector = '#edit-' + fields[index].replace(/_/g, '-') + '-und';
        if (jQuery(selector).length) {
          jQuery(selector).select2Buttons();
        }
      }
    }
  };

})(jQuery, Drupal, this, this.document);
