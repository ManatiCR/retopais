<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<article class="blog-item">
  <?php if (!empty($fields['field_image']->content)): ?>
    <section class="blog-item--image">
      <?php print $fields['field_image']->content; ?>
    </section>
  <?php endif; ?>
  <section class="blog-item--content">
    <h3 class="blog-item--title"><?php print $fields['title']->content; ?></h3>
    <span class="blog-item--date"><?php print $fields['created']->content; ?></span>
    <div class="blog-item--body"><?php print $fields['body']->content; ?></div>
    <?php if (!empty($fields['view_node'])): ?>
    <div class="blog-item--link"><?php print $fields['view_node']->content; ?></div>
    <?php endif; ?>
  </section>
</article>
