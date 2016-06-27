<?php
/**
 * @file
 * Reto Pais Page with Sidebar layout template.
 */
?>

<section class="page page-fullwidth clearfix">

  <?php if (!empty($content['first-full'])): ?>
    <div class="page-fullwidth-first-full">
      <?php print $content['first-full']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['second'])): ?>
    <div class="page-fullwidth-second">
      <?php print $content['second']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['third-full'])): ?>
    <div class="page-fullwidth-third-full">
      <?php print $content['third-full']; ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['fourth'])): ?>
    <div class="page-fullwidth-fourth">
      <?php print $content['fourth']; ?>
    </div>
  <?php endif; ?>

</section>
