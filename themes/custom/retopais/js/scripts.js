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
    const markupDisplacer = (pageClassName, elements, reference) => {
      if (document.body.classList.contains(pageClassName)) {
        console.log(elements);
        return elements.forEach(element =>
          reference.parentNode.insertBefore(element, reference.nextSibling)
        );
      }
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
    markupDisplacer(
      problematicasPageClass,
      [paneProblematicaIntro],
      problematicaParentDiv
    );
    // Blog Markup
    const blogPageClass = "page-blog";
    const blogIntro = document.querySelector(
      ".view-display-id-panel_pane_1 .view-header"
    );
    const blogParentDiv = document.querySelector(
      ".panel-pane.pane-page-content > h2.pane-title"
    );
    markupDisplacer(blogPageClass, [blogIntro], blogParentDiv);
    // Que es Reto Markup
    const retoPageClass = "page-que-es-reto-pais";
    const retoIntro = document.querySelector(
      ".que-es-reto-pais.introduction-text"
    );
    const retoProblemasPane = document.querySelector(
      ".panel-pane.pane-views-panes.pane-problems-panel-pane-1"
    );
    const retoProposals = document.querySelector(
      ".panel-pane.pane-que-es-retopais-proposals"
    );
    const retoParentDiv = document.querySelector(
      ".panel-pane.pane-page-content > h2.pane-title"
    );
    markupDisplacer(
      retoPageClass,
      [retoProposals, retoProblemasPane, retoIntro],
      retoParentDiv
    );
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
