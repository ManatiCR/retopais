(function ($, Drupal, window, document, enquire) {
  "use strict";

  (function () {
    var parallelogramMarkup = function parallelogramMarkup(elements) {
      elements.forEach(function (element) {
        var newSpan = document.createElement("span");
        newSpan.classList.add("skew-fix");
        newSpan.innerHTML = element.textContent;
        element.replaceChild(newSpan, element.childNodes[0]);
        element.classList.add("parallelogram");
      });
    };

    var markupDisplacer = function markupDisplacer(
      pageClassName,
      elements,
      reference
    ) {
      if (document.body.classList.contains(pageClassName)) {
        return elements.forEach(function (element) {
          return reference.parentNode.insertBefore(
            element,
            reference.nextSibling
          );
        });
      }

      return null;
    };

    var globalBtns = document.querySelectorAll(".button");
    var blogBtns = document.querySelectorAll(".blog-item--link a");
    parallelogramMarkup(blogBtns);
    parallelogramMarkup(globalBtns);
    var problematicasPageClass = "page-problematicas";
    var paneProblematicaIntro = document.querySelector(
      ".panel-pane.pane-problematicas-intro"
    );
    var problematicaParentDiv = document.querySelector(
      ".panel-pane.pane-page-content > h2.pane-title"
    );
    markupDisplacer(
      problematicasPageClass,
      [paneProblematicaIntro],
      problematicaParentDiv
    );
    var blogPageClass = "page-blog";
    var blogIntro = document.querySelector(
      ".view-display-id-panel_pane_1 .view-header"
    );
    var blogParentDiv = document.querySelector(
      ".panel-pane.pane-page-content > h2.pane-title"
    );
    markupDisplacer(blogPageClass, [blogIntro], blogParentDiv);
    var retoPageClass = "page-que-es-reto-pais";
    var retoIntro = document.querySelector(
      ".que-es-reto-pais.introduction-text"
    );
    var retoProblemasPane = document.querySelector(
      ".panel-pane.pane-views-panes.pane-problems-panel-pane-1"
    );
    var retoProposals = document.querySelector(
      ".panel-pane.pane-que-es-retopais-proposals"
    );
    var retoParentDiv = document.querySelector(
      ".panel-pane.pane-page-content > h2.pane-title"
    );
    markupDisplacer(
      retoPageClass,
      [retoProposals, retoProblemasPane, retoIntro],
      retoParentDiv
    );
  })();
})(jQuery, Drupal, this, this.document, enquire);
