(function ($, Drupal, window, document, enquire) {
  'use strict';

  Drupal.behaviors.mobileNav = {
    attach: function (context, settings) {
      var menu = $('.nav-main');
      menu.once('mobile-nav', function () {
        enquire.register('screen and (max-width: 768px)', {
          match: function () {
            var toggle = $('<span id="toggle-nav" class="toggle-nav">Menú</span>').prependTo(menu);
            var itemList = menu.find('.menu').addClass('collapsed');
            toggle.bind('click', function () {
              itemList.toggleClass('collapsed');
            });
          },
          unmatch: function () {
            var toggle = $('#toggle-nav');
            toggle.unbind('click');
            toggle.remove();
            menu.find('.menu').removeClass('collapsed');
          }
        });
      });
    }
  };

})(jQuery, Drupal, this, this.document, enquire);
