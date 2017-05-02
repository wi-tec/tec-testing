<?php
/**
 * @file
 * feature_sub_sites_entities.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function feature_sub_sites_entities_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'project_cards';
  $pm_existing_page->label = 'Project Cards';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'node/%/proyectos';
  $export['project_cards'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'publications_per_node';
  $pm_existing_page->label = 'Publications per node';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'node/%/publicacion';
  $export['publications_per_node'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'research_program_site';
  $pm_existing_page->label = 'Research Program Site';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'node/%/colaboraciones
node/%/investigadores';
  $export['research_program_site'] = $pm_existing_page;

  return $export;
}
