<?php if (!empty($content['featured'])): ?>
  <div class="l-featured" role="navigation">
    <?php print $content['featured']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['main_above'])): ?>
  <div class="l-main-above">
    <?php print $content['main_above']; ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['main_content'])): ?>
  <main class="l-main-content" role="main">
    <?php print $content['main_content']; ?>
  </main>
<?php endif; ?>

<?php if (!empty($content['main_below'])): ?>
  <div class="l-main-below">
    <?php print $content['main_below']; ?>
  </div>
<?php endif; ?>
