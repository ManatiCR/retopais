<?php
/**
 * @file
 * Premios homepage component tpl file.
 */
?>

<div class="homepage-premios--container">
  <h2>Premios</h2>
  <div class="homepage-premios--ideas">
    <span class="homepage-premios--type">Ideas</span>
    <h3 class="homepage-premios--title"><?php print $ideas_title; ?></h3>
    <div class="homepage-premios--description"><?php print $ideas_description; ?></div>
  </div>
  <div class="homepage-premios--solution">
    <span class="homepage-premios--type">Solución</span>
    <h3 class="homepage-premios--title"><?php print $solution_title; ?></h3>
    <div class="homepage-premios--description"><?php print $solution_description; ?></div>
  </div>
  <footer class="homepage-premios--cta">
    <?php print $link; ?>
  </footer>
</div>
