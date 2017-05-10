<?php
/**
 * @file
 * research_program_site_feature.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function research_program_site_feature_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'project_cards';
  $pm_existing_page->label = 'Project Cards';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'node/%/investigacion';
  $export['project_cards'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'research_program_site';
  $pm_existing_page->label = 'Research Program Site';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'node/%/colaboraciones
node/%/investigadores
node/%/objetivo
node/%/project';
  $export['research_program_site'] = $pm_existing_page;

  return $export;
}
