<?php
/**
 * @file
 * Template file for propuestas pais homepage component.
 */
?>
<div class="que-es-reto-pais--container">
  <div class="que-es-reto-pais--container-inner">
    <div class="que-es-reto-pais--left">
      <h2 class="que-es-reto-pais--title">¡<?php print $cantidad_ideas; ?> ideas y <?php print $cantidad_soluciones; ?> soluciones en marcha han sido enviadas!</h2>
      <p class="que-es-reto-pais--description">
        <?php print $text; ?>
      </p>
      <div class="que-es-reto-pais--link"><?php print $link; ?></div>
    </div>
    <div class="que-es-reto-pais--right">
      <?php if ($video): ?>
        <div class="que-es-reto-pais--video">
          <iframe width="560" height="315" src="<?php print $video; ?>" frameborder="0"></iframe>
        </div>
      <?php elseif ($image): ?>
        <div class="que-es-reto-pais--image">
          <?php print $image; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>
