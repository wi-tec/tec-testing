<?php

// Plugin definition
$plugin = array(

  'title'    => t('TEC Three Colums'),
  'category' => t('TEC Layouts'),
  'icon'     => 'tec_threecol.png',
  'theme'    => 'tec_threecol',
  'css'      => 'tec_threecol.css',

  'regions'  => array(
    'featured'       => t('Featured'),
    'sidebar_first'  => t('Sidebar first'),
    'main_content'   => t('Main content'),
    'sidebar_second' => t('Sidebar second'),
  ),
);
