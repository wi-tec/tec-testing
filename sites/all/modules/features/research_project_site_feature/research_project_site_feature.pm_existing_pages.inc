<?php
/**
 * @file
 * research_project_site_feature.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function research_project_site_feature_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'research_project_site';
  $pm_existing_page->label = 'Research Project Site';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'node/%/objetivos
node/%/participantes
node/%/resultados';
  $export['research_project_site'] = $pm_existing_page;

  return $export;
}
