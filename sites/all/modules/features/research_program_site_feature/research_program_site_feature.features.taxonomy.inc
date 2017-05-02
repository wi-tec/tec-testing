<?php
/**
 * @file
 * research_program_site_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function research_program_site_feature_taxonomy_default_vocabularies() {
  return array(
    'research_program_type' => array(
      'name' => 'Research program type',
      'machine_name' => 'research_program_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
