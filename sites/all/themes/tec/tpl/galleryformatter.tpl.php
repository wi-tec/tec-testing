<?php
/**
 * @file
 * Template file for the galleryformatter Responsive Formatter
 */
?>

<div class="galleryformatter galleryview galleryformatter-<?php print $settings['style'] ?>">

  <div class="gallery-slides">
    <div class="gallery-frame">
      <ul>
        <?php foreach ($slides as $id => $data): ?>
          <li class="gallery-slide" id="<?php print $data['hash_id']; ?>">
            <figure>
              <?php print $data['image']; ?>
              <?php if (!empty($data['title']) || !empty($data['alt'])): ?>
                <figcaption>
                  <?php if ($data['title']): ?><h3><?php print $data['title']; ?></h3><?php endif; ?>
                  <?php if ($data['alt']): ?><p><?php print $data['alt']; ?></p><?php endif; ?>
                </figcaption>
              <?php endif; ?>
            </figure>
          </li>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>

  <?php if(!empty($thumbs)): ?>
    <div class="gallery-thumbs">
      <div class="wrapper">
        <ul>
          <?php foreach ($thumbs as $id => $data): ?>
            <li class="thumb slide-<?php print $id; ?>">
            <a href="#<?php print $data['hash_id']; ?>"><?php print $data['image']; ?></a></li>
          <?php endforeach; ?>
        </ul>
      </div>
    </div>
  <?php endif; ?>

</div>
