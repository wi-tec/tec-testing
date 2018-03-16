<?php

// CSS CLEANUP
//----------------------------------------------
/**
 * Implements hook_css_alter().
 */
function tec_css_alter(&$css) {
  $exclude = array(
  // Remove Drupal Core CSS
  
    'modules/aggregator/aggregator.css' => FALSE,
    //'modules/block/block.css' => FALSE,
    'modules/book/book.css' => FALSE,
    'modules/comment/comment.css' => FALSE,
    'modules/dblog/dblog.css' => FALSE,
    'modules/field/theme/field.css' => FALSE,
    'modules/file/file.css' => FALSE,
    'modules/filter/filter.css' => FALSE,
    'modules/forum/forum.css' => FALSE,
    'modules/help/help.css' => FALSE,
    'modules/menu/menu.css' => FALSE,
    'modules/node/node.css' => FALSE,
    'modules/openid/openid.css' => FALSE,
    'modules/poll/poll.css' => FALSE,
    'modules/profile/profile.css' => FALSE,
    'modules/search/search.css' => FALSE,
    'modules/statistics/statistics.css' => FALSE,
    'modules/syslog/syslog.css' => FALSE,
    'modules/system/admin.css' => FALSE,
    'modules/system/maintenance.css' => FALSE,
    'modules/system/system.css' => FALSE,
    'modules/system/system.admin.css' => FALSE,
    'modules/system/system.maintenance.css' => FALSE,
    //'modules/system/system.messages.css' => FALSE,
    //'modules/system/system.theme.css' => FALSE,
    //'modules/system/system.menus.css' => FALSE,
    'modules/taxonomy/taxonomy.css' => FALSE,
    'modules/tracker/tracker.css' => FALSE,
    'modules/update/update.css' => FALSE,
    'modules/user/user.css' => FALSE,
    'misc/vertical-tabs.css' => FALSE,
  // Remove Display Suite Layouts CSS
    drupal_get_path('module', 'ds') . '/layouts/ds_2col/ds_2col.css' => FALSE,
    drupal_get_path('module', 'ds') . '/layouts/ds_2col_fluid/ds_2col_fluid.css' => FALSE,
  );
  $css = array_diff_key($css, $exclude);
}

// REGION WRAPPERS CLEANUP
//----------------------------------------------
/**
 * Implements hook_page_alter().
 */
function tec_page_alter(&$page) {
  // Remove all region wrappers.
  foreach (element_children($page) as $key => $region) {
    if (!empty($page[$region]['#theme_wrappers'])) {
      $page[$region]['#theme_wrappers'] = array_diff($page[$region]['#theme_wrappers'], array('region'));
    }
  }
  // Remove the wrapper from the main content block.
  if (!empty($page['content']['system_main'])) {
    $page['content']['system_main']['#theme_wrappers'] = array_diff($page['content']['system_main']['#theme_wrappers'], array('block'));
  }
}

// DYNAMICALLY ADD SIDEBAR BODY CLASSES
// https://www.drupal.org/node/1611736
//----------------------------------------------
/**
 * Implements hook_preprocess_html().
 */
// function tec_preprocess_html(&$variables) {
//   $panel_display = panels_get_current_page_display();
//   // Progromatically add in the body classes.
//   if ($panel_display) {
//     // Remove existing layout classes from $classes_array, use array_diff().
//     $variables['classes_array'] = array_diff($variables['classes_array'], array('no-sidebars', 'two-sidebars', 'sidebar-first', 'sidebar-second'));
//     // Find the regions and what have been rendered.
//     $rendered_regions = $panel_display->renderer_handler->rendered['regions'];
//     if(!empty($rendered_regions['sidebar_first']) && !empty($rendered_regions['sidebar_second'])) {
//       $variables['classes_array'][] = 'two-sidebars';
//     } elseif (!empty($rendered_regions['sidebar_first'])) {
//       $variables['classes_array'][] = 'sidebar-first';
//     } elseif (!empty($rendered_regions['sidebar_second'])) {
//       $variables['classes_array'][] = 'sidebar-second';
//     } else {
//       $variables['classes_array'][] = 'no-sidebars';
//     }
//   }
// }

/**
 * Implements hook_preprocess_html().
 */
function tec_preprocess_html(&$variables) {
// Find the first mach of l-sidebar-second, l-sidebar-first or both
  if (strpos($variables['page']['#children'], 'l-sidebar-first') && strpos($variables['page']['#children'], 'l-sidebar-second')) {
    $variables['classes_array'][] = 'two-sidebars';
  }
  elseif (strpos($variables['page']['#children'], 'l-sidebar-first')) {
    $variables['classes_array'][] = 'sidebar-first';
  }
  elseif (strpos($variables['page']['#children'], 'l-sidebar-second')) {
    $variables['classes_array'][] = 'sidebar-second';
  }
  else {
    $variables['classes_array'][] = 'no-sidebars';
  }
}

// CUSTOMIZE MENUS MARKUP
//----------------------------------------------
/**
 * Implements theme_menu_tree().
 */
// function tec_menu_tree($variables) {
//   return '<nav class="menu"> <ul>' . $variables['tree'] . '</ul></nav>';
// }

// SEARCH
//----------------------------------------------
/**
 * Implements hook_form_FORM_ID_alter().
 */
function tec_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  // Replace the form submit value.
  $form['actions']['submit']['#name'] = t('Search');
  $form['actions']['submit']['#value'] = decode_entities("&#xe835;");
}
/**
 * Implements hook_form_FORM_ID_alter().
 */
function tec_form_search_form_alter(&$form, &$form_state, $form_id) {
  // Replace the form submit value.
  $form['basic']['submit']['#name'] = t('Search');
  $form['basic']['submit']['#value'] = decode_entities("&#xe835;");
}

// FILE ICONS
//----------------------------------------------
function tec_file_icon($variables) {
  $file = $variables['file'];
  $icon_directory = drupal_get_path('theme', 'tec') . '/file-icons';

  $mime = check_plain($file->filemime);
  $icon_url = file_icon_url($file, $icon_directory);
  return '<img alt="" class="file-icon" src="' . $icon_url . '" title="' . $mime . '" />';
}


// CUSTOM 404
//----------------------------------------------
/**
* Implements template_preprocess_page().
*/
// function tec_preprocess_page(&$vars) {
//   // Adds a Custom 404 page
//   $header = drupal_get_http_header("status");
//     if($header == "404 Not Found") {
//       $vars['theme_hook_suggestions'][] = 'page__404';
//   }
// }
