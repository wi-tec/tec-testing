<?php

// Plugin definition
$plugin = array(

  'title'    => t('TEC Menu Landing Page Layout'),
  'category' => t('TEC Layouts'),
  'icon'     => 'tec_menu_landing_page.png',
  'theme'    => 'tec_menu_landing_page',
  'css'      => 'tec_menu_landing_page.css',

  'regions'  => array(
    'featured'       => t('Featured'),
    'main_content'   => t('Main content'),
    'sidebar_second' => t('Sidebar second'),
  ),
);
