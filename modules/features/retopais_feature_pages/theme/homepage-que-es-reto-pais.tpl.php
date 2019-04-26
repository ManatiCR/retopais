<?php
/**
 * @file
 * Template file for que es reto pais homepage component.
 */
?>
<div class="que-es-reto-pais--container">
  <div class="que-es-reto-pais--container-inner">
    <?php if ($video || $image): ?>
      <div class="que-es-reto-pais--left">
        <h2 class="que-es-reto-pais--title"><?php print $title; ?></h2>
        <p class="que-es-reto-pais--description">
          <?php print $text; ?>
        </p>
        <?php if ($link): ?>
        <div class="que-es-reto-pais--link"><?php print $link; ?></div>
        <?php endif; ?>
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
    <?php else: ?>
      <div class="que-es-reto-pais--full">
        <h2 class="que-es-reto-pais--title"><?php print $title; ?></h2>
        <p class="que-es-reto-pais--description">
          <?php print $text; ?>
        </p>
        <?php if ($link): ?>
        <div class="que-es-reto-pais--link"><?php print $link; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
