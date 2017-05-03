<?php

// Plugin definition
$plugin = array(

  'title'    => t('TEC One Column'),
  'category' => t('TEC Layouts'),
  'icon'     => 'tec_onecol.png',
  'theme'    => 'tec_onecol',
  'css'      => 'tec_onecol.css',

  'regions'  => array(
    'featured'       => t('Featured'),
    'main_above'     => t('Above main'),
    'main_content'   => t('Main content'),
    'main_below'     => t('Below main'),
  ),

);
