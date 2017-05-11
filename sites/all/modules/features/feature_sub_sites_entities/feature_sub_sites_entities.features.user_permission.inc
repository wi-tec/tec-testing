<?php
/**
 * @file
 * feature_sub_sites_entities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_sub_sites_entities_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_eref_parent_node'.
  $permissions['create field_eref_parent_node'] = array(
    'name' => 'create field_eref_parent_node',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_eref_school'.
  $permissions['create field_eref_school'] = array(
    'name' => 'create field_eref_school',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_img_main'.
  $permissions['create field_img_main'] = array(
    'name' => 'create field_img_main',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_link_menu_elements'.
  $permissions['create field_link_menu_elements'] = array(
    'name' => 'create field_link_menu_elements',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create group_group'.
  $permissions['create group_group'] = array(
    'name' => 'create group_group',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create og_group_ref'.
  $permissions['create og_group_ref'] = array(
    'name' => 'create og_group_ref',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_eref_parent_node'.
  $permissions['edit field_eref_parent_node'] = array(
    'name' => 'edit field_eref_parent_node',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_eref_school'.
  $permissions['edit field_eref_school'] = array(
    'name' => 'edit field_eref_school',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_img_main'.
  $permissions['edit field_img_main'] = array(
    'name' => 'edit field_img_main',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_link_menu_elements'.
  $permissions['edit field_link_menu_elements'] = array(
    'name' => 'edit field_link_menu_elements',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit group_group'.
  $permissions['edit group_group'] = array(
    'name' => 'edit group_group',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit og_group_ref'.
  $permissions['edit og_group_ref'] = array(
    'name' => 'edit og_group_ref',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_eref_parent_node'.
  $permissions['edit own field_eref_parent_node'] = array(
    'name' => 'edit own field_eref_parent_node',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_eref_school'.
  $permissions['edit own field_eref_school'] = array(
    'name' => 'edit own field_eref_school',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_img_main'.
  $permissions['edit own field_img_main'] = array(
    'name' => 'edit own field_img_main',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_link_menu_elements'.
  $permissions['edit own field_link_menu_elements'] = array(
    'name' => 'edit own field_link_menu_elements',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own group_group'.
  $permissions['edit own group_group'] = array(
    'name' => 'edit own group_group',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own og_group_ref'.
  $permissions['edit own og_group_ref'] = array(
    'name' => 'edit own og_group_ref',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_eref_parent_node'.
  $permissions['view field_eref_parent_node'] = array(
    'name' => 'view field_eref_parent_node',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_eref_school'.
  $permissions['view field_eref_school'] = array(
    'name' => 'view field_eref_school',
    'roles' => array(
      'Devel' => 'Devel',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_img_main'.
  $permissions['view field_img_main'] = array(
    'name' => 'view field_img_main',
    'roles' => array(
      'Devel' => 'Devel',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_link_menu_elements'.
  $permissions['view field_link_menu_elements'] = array(
    'name' => 'view field_link_menu_elements',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view group_group'.
  $permissions['view group_group'] = array(
    'name' => 'view group_group',
    'roles' => array(
      'Devel' => 'Devel',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view og_group_ref'.
  $permissions['view og_group_ref'] = array(
    'name' => 'view og_group_ref',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_eref_parent_node'.
  $permissions['view own field_eref_parent_node'] = array(
    'name' => 'view own field_eref_parent_node',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_eref_school'.
  $permissions['view own field_eref_school'] = array(
    'name' => 'view own field_eref_school',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_img_main'.
  $permissions['view own field_img_main'] = array(
    'name' => 'view own field_img_main',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_link_menu_elements'.
  $permissions['view own field_link_menu_elements'] = array(
    'name' => 'view own field_link_menu_elements',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own group_group'.
  $permissions['view own group_group'] = array(
    'name' => 'view own group_group',
    'roles' => array(
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own og_group_ref'.
  $permissions['view own og_group_ref'] = array(
    'name' => 'view own og_group_ref',
    'roles' => array(
      'Admin' => 'Admin',
      'Devel' => 'Devel',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
