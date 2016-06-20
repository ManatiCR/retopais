<?php

/**
 * @file
 * Template file for proposal progress.
 */
?>
<aside class="proposal-progress-block">
  <ul class="proposal-progress-list">
    <?php foreach ($steps as $step): ?>
      <li class="proposal-progress-list-item <?php print $step['class']; ?>">
        <?php print $step['title']; ?>
      </li>
    <?php endforeach; ?>
  </ul>
</aside>
