<?php
/**
 * @file
 * Template file for que es reto pais homepage component.
 */
?>
<div class="que-es-reto-pais--container">
  <div class="que-es-reto-pais--left">
    <h3 class="que-es-reto-pais--title">¿Qué es <span class="homepage-highlighted">Reto País</span>?</h3>
    <p class="que-es-reto-pais--description">
      <span class="homepage-highlighted">Reto PAÍS</span> es un esfuerzo nacional para invitar a todos los ciuidadanos y ciudadanas a <span class="homepage-highlighted">proponer soluciones innovadoras para cuatro problemáticas</span> que nos afectan a nivel país. Cualquier persona con una idea o una solución en marcha puede participar. Las mejores ideas serán seleccionadas como ganadores y se les dará apoyo para desarrollarlas.
    </p>
    <div class="que-es-reto-pais--link"><?php print $link; ?></div>
  </div>
  <div class="que-es-reto-pais--right">
    <div class="que-es-reto-pais--video">
      <iframe width="560" height="315" src="<?php print $video; ?>" frameborder="0"></iframe>
    </div>
  </div>
</div>
