<?php
/**
 * @file
 * Outermost template for Reto País providing a global header & footer.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * region of the layout. For example, $content['main'].
 */
?>

<?php if (isset($content['header'])): ?>
<header id="header" role="banner" class="site-header">
  <?php if (isset($content['top_bar'])): ?>
  <div class="header-top-bar">
    <div class="container">
      <?php print $content['top_bar']; ?>
    </div>
  </div>
  <?php endif; ?>
  <div class="container">
    <?php print $content['header']; ?>
    <?php if (isset($content['nav'])): ?>
    <?php print $content['nav']; ?>
    <?php endif; ?>
  </div>
</header>
<?php endif; ?>

<?php if (isset($content['main'])): ?>
<main id="main" role="main">
  <?php print $content['main']; ?>
</main>
<?php endif; ?>

<?php if (isset($content['footer'])): ?>
<footer id="footer" class="site-footer" role="contentinfo">
  <div class="container">
    <?php print $content['footer']; ?>
  </div>
</footer>
<?php endif; ?>
