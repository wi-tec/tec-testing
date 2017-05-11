<div class="l-page" role="document">

  <div class="l-top-bar">
    <?php print $content['top_bar']; ?>
  </div>

  <header class="l-header" role="banner">
    <?php print $content['header']; ?>
  </header>

  <?php if (!empty($content['breadcrumb'])): ?>
    <div class="l-breadcrumb" role="navigation">
      <?php print $content['breadcrumb']; ?>
    </div>
  <?php endif; ?>

  <div class="l-main">
    <?php print $content['main_content']; ?>
  </div>

  <footer class="l-footer" role="contentinfo">
    <?php print $content['footer']; ?>
  </footer>

</div>
