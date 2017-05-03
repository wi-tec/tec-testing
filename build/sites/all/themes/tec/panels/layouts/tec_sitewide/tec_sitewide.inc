<?php

// Plugin definition
$plugin = array(

  'title'    => t('TEC Sitewide'),
  'category' => t('TEC Layouts'),
  'icon'     => 'tec_sitewide.png',
  'theme'    => 'tec_sitewide',
  'css'      => 'tec_sitewide.css',

  'regions'  => array(
    // HEADER
    'top_bar'             => t('Top Bar'),
    'header'              => t('Header'),
    // MAIN
    'breadcrumb'          => t('Breadcrumb'),
    'main_content'        => t('Main content'),
    // FOOTER
    'footer'              => t('Footer'),
  ),

);
