(function($, Drupal, window, document, enquire) {
  "use strict";

  $(document).ready(() => {
    const parallelogramMarkup = elements => {
      elements.forEach(element => {
        const newSpan = document.createElement("span");
        newSpan.classList.add("skew-fix");
        newSpan.innerHTML = element.textContent;
        element.replaceChild(newSpan, element.childNodes[0]);
        element.classList.add("parallelogram");
      });
    };
    const markupMover = (pageClassName, element, reference) => {
      if (document.body.classList.contains(pageClassName)) {
        reference.parentNode.insertBefore(element, reference.nextSibling);
      }
      console.log(`Page classname don't match: ${pageClassName}`);
      return null;
    };
    //Parallelogram selectors
    const globalBtns = document.querySelectorAll(".button");
    const blogBtns = document.querySelectorAll(".blog-item--link a");
    parallelogramMarkup(blogBtns);
    parallelogramMarkup(globalBtns);
    //Problematicas Markup
    const problematicasPageClass = "page-problematicas";
    const paneProblematicaIntro = document.querySelector(
      ".panel-pane.pane-problematicas-intro"
    );
    const problematicaParentDiv = document.querySelector(
      ".panel-pane.pane-page-content > h2.pane-title"
    );
    markupMover(
      problematicasPageClass,
      paneProblematicaIntro,
      problematicaParentDiv
    );
    // Blog Markup
    const blogPageClass = "page-blog";
    const blogIntro = document.querySelector(
      ".view-dom-id-495054a0ffc8296955a5678e52dcad1c .view-header"
    );
    const blogParentDiv = document.querySelector(
      ".panel-pane.pane-page-content > h2.pane-title"
    );
    markupMover(blogPageClass, blogIntro, blogParentDiv);
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
