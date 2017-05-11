<?php

// Plugin definition
$plugin = array(

  'title'    => t('TEC Reference'),
  'category' => t('TEC Layouts'),
  'icon'     => 'tec_ref.png',
  'theme'    => 'tec_ref',
  'css'      => 'tec_ref.css',

  'regions'  => array(
    // HEADER
    'top_bar'             => t('Top Bar'),
    'header'              => t('Header'),
    'navigation'          => t('Navigation'),
    'featured'            => t('Featured'),
    // MAIN
    'main_above'          => t('Above main'),
    'main_content'        => t('Main content'),
    'sidebar_first'       => t('Sidebar first'),
    'sidebar_second'      => t('Sidebar second'),
    'main_below'          => t('Below main'),
    // FOOTER
    'footer_firstcolumn'  => t('Footer first column'),
    'footer_secondcolumn' => t('Footer second column'),
    'footer_thirdcolumn'  => t('Footer third column'),
    'footer'              => t('Footer'),
  ),

);
