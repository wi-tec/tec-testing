<?php
/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>
        <iframe
          width="100%"
          height="240"
          scrolling="no"
          frameborder="no"
          src="https://w.soundcloud.com/player/?url=<?php print render($item); ?>&amp;auto_play=false&amp;hide_related=false&amp;show_comments=true&amp;show_user=true&amp;show_reposts=false&amp;visual=true">
        </iframe>
      </div>
    <?php endforeach; ?>
  </div>
</div>
