<?php
/**
 * @file
 * lacuna_stories_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lacuna_stories_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_account:<nolink>.
  $menu_links['main-menu_account:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_account:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_help:<nolink>.
  $menu_links['main-menu_help:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_help:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_organize:<nolink>.
  $menu_links['main-menu_organize:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Organize',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_organize:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_readings:materials.
  $menu_links['main-menu_readings:materials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'materials',
    'router_path' => 'materials',
    'link_title' => 'Readings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_readings:materials',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_social:<nolink>.
  $menu_links['main-menu_social:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Social',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_social:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_writing:responses.
  $menu_links['main-menu_writing:responses'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'responses',
    'router_path' => 'responses',
    'link_title' => 'Writing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_writing:responses',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-institutional-menu_about:http://www.lacunastories.com.
  $menu_links['menu-institutional-menu_about:http://www.lacunastories.com'] = array(
    'menu_name' => 'menu-institutional-menu',
    'link_path' => 'http://www.lacunastories.com',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-institutional-menu_about:http://www.lacunastories.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-institutional-menu_log-in:user/login.
  $menu_links['menu-institutional-menu_log-in:user/login'] = array(
    'menu_name' => 'menu-institutional-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log In',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-institutional-menu_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-institutional-menu_log-out:user/logout.
  $menu_links['menu-institutional-menu_log-out:user/logout'] = array(
    'menu_name' => 'menu-institutional-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-institutional-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-institutional-menu_register:user/register.
  $menu_links['menu-institutional-menu_register:user/register'] = array(
    'menu_name' => 'menu-institutional-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-institutional-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Account');
  t('Help');
  t('Log In');
  t('Log Out');
  t('Organize');
  t('Readings');
  t('Register');
  t('Social');
  t('Writing');

  return $menu_links;
}
