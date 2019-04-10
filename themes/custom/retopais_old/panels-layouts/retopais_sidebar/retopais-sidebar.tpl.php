<?php
/**
 * @file
 * Reto Pais Page with Sidebar layout template.
 */
?>

<section class="page page-sidebar clearfix">

  <?php if (!empty($content['left'])): ?>
    <div class="page-sidebar-primary-content">
      <?php
      print $content['left'];
      ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['right'])): ?>
    <div class="page-sidebar-secondary-content">
      <?php
      print $content['right'];
      ?>
    </div>
  <?php endif; ?>

</section>
