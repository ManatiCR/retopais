(function($, Drupal, window, document, enquire) {
  "use strict";

  $(document).ready(function parallelogramBtns() {
    let buttons = document.querySelectorAll(".button");
    buttons.forEach(button => {
      const newSpan = document.createElement("span");
      newSpan.classList.add("skew-fix");
      newSpan.innerHTML = button.textContent;
      button.replaceChild(newSpan, button.childNodes[0]);
      button.classList.add("parallelogram");
    });
  });

  Drupal.behaviors.mobileNav = {
    attach: function(context, settings) {
      var menu = $(".nav-main");
      menu.once("mobile-nav", function() {
        enquire.register("screen and (max-width: 768px)", {
          match: function() {
            var toggle = $(
              '<span id="toggle-nav" class="toggle-nav">Menú</span>'
            ).prependTo(menu);
            var itemList = menu.find(".menu").addClass("collapsed");
            toggle.bind("click", function() {
              itemList.toggleClass("collapsed");
            });
          },
          unmatch: function() {
            var toggle = $("#toggle-nav");
            toggle.unbind("click");
            toggle.remove();
            menu.find(".menu").removeClass("collapsed");
          }
        });
      });
    }
  };
})(jQuery, Drupal, this, this.document, enquire);
