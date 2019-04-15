(function($, Drupal, window, document, enquire) {
  "use strict";

  $(document).ready(function parallelogramBtns() {
    const parallelogramMarkup = elements => {
      elements.forEach(element => {
        const newSpan = document.createElement("span");
        newSpan.classList.add("skew-fix");
        newSpan.innerHTML = element.textContent;
        element.replaceChild(newSpan, element.childNodes[0]);
        element.classList.add("parallelogram");
      });
    };
    //selectors
    const globalBtns = document.querySelectorAll(".button");
    const blogBtns = document.querySelectorAll(".blog-item--link a");
    parallelogramMarkup(blogBtns);
    parallelogramMarkup(globalBtns);
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
