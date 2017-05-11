<?php

// Plugin definition
$plugin = array(

  'title'    => t('TEC Landing Page'),
  'category' => t('TEC Layouts'),
  'icon'     => 'tec_landing.png',
  'theme'    => 'tec_landing',
  'css'      => 'tec_landing.css',

  'regions'  => array(
    'featured'       => t('Featured'),
    'main_above'     => t('Above main'),
    'sidebar_first'  => t('Sidebar first'),
    'main_content'   => t('Main content'),
    'sidebar_second' => t('Sidebar second'),
    'main_below'     => t('Below main'),
  ),

);
