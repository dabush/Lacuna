<?php
/**
 * @file
 * lacuna_stories_irb_form.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lacuna_stories_irb_form_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_report-a-bug:node/3394.
  $menu_links['main-menu_report-a-bug:node/3394'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3394',
    'router_path' => 'node/%',
    'link_title' => 'Report a Bug',
    'options' => array(
      'identifier' => 'main-menu_report-a-bug:node/3394',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_help:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Report a Bug');

  return $menu_links;
}
