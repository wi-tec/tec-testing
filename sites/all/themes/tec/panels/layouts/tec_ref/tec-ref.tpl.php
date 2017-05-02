<?php if (!empty($content['top_bar'])): ?>
  <div class="l-wrapper-top-bar">
    <div class="l-top-bar">
      <?php print $content['top_bar']; ?>
    </div>
  </div>
<?php endif; ?>

<?php if (!empty($content['header'])): ?>
  <div class="l-wrapper-header">
    <header class="l-header" role="banner">
      <?php print $content['header']; ?>
    </header>
  </div>
<?php endif; ?>

<?php if (!empty($content['navigation'])): ?>
  <nav class="l-navigation" role="navigation">
    <?php print $content['navigation']; ?>
  </nav>
<?php endif; ?>

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

<div class="l-main">
  <?php if (!empty($content['main_content'])): ?>
    <main class="l-main-content" role="main">
      <?php print $content['main_content']; ?>
    </main>
  <?php endif; ?>

  <?php if (!empty($content['sidebar_first'])): ?>
    <aside class="l-sidebar-first" role="complementary">
      <?php print $content['sidebar_first']; ?>
    </aside>
  <?php endif; ?>

  <?php if (!empty($content['sidebar_second'])): ?>
    <aside class="l-sidebar-second" role="complementary">
      <?php print $content['sidebar_second']; ?>
    </aside>
  <?php endif; ?>
</div>

<?php if (!empty($content['main_below'])): ?>
  <div class="l-main-below">
    <?php print $content['main_below']; ?>
  </div>
<?php endif; ?>

<?php if ((!empty($content['footer_firstcolumn'])) || (!empty($content['footer_secondcolumn'])) || (!empty($content['footer_thirdcolumn']))): ?>
  <div class="l-wrapper-footer-columns">
    <section class="l-footer-columns" role="banner">
      <div class="l-footer-columns-item l-footer-firstcolumn">
        <?php print $content['footer_firstcolumn']; ?>
      </div>
      <div class="l-footer-columns-item l-footer-secondcolumn">
        <?php print $content['footer_secondcolumn']; ?>
      </div>
      <div class="l-footer-columns-item l-footer-thirdcolumn">
        <?php print $content['footer_thirdcolumn']; ?>
      </div>
    </section>
  </div>
<?php endif; ?>

<?php if (!empty($content['footer'])): ?>
  <div class="l-wrapper-footer">
    <footer class="l-footer" role="contentinfo">
      <?php print $content['footer']; ?>
    </footer>
  </div>
<?php endif; ?>
