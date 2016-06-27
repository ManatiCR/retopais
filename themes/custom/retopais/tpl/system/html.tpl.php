<?php

/**
 * @file
 * Main template file.
 */

?><!DOCTYPE html>
<!--[if lt IE <?php print $minie; ?> ]>    <html class="lt-ie<?php print $minie; ?> no-js" <?php print $html_attributes; ?>> <![endif]-->
<!--[if gte IE <?php print $minie; ?>]><!--> <html class="no-js" <?php print $html_attributes; ?> <?php print $rdf_attributes; ?>> <!--<![endif]-->
  <head>
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>

    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>" <?php print $body_attributes;?>>
    <div id="skip-link">
      <a href="#main" class="element-invisible element-focusable" role="link"><?php print t('Skip to main content'); ?></a>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
    <script>
    (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
      (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
      m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
    })(window,document,'script','https://www.google-analytics.com/analytics.js','ga');
    ga('create', 'UA-79164541-1', 'auto');
    ga('send', 'pageview');
    </script>
  </body>
</html>
