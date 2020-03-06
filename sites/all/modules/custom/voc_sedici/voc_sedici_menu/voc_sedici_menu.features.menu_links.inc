<?php
/**
 * @file
 * voc_sedici_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function voc_sedici_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: devel_clear-cache:devel/cache/clear.
  $menu_links['devel_clear-cache:devel/cache/clear'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/cache/clear',
    'router_path' => 'devel/cache/clear',
    'link_title' => 'Clear cache',
    'options' => array(
      'attributes' => array(
        'title' => 'Clear the CSS cache and all database cache tables which store page, node, theme and variable caches.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_clear-cache:devel/cache/clear',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_devel-settings:devel/settings.
  $menu_links['devel_devel-settings:devel/settings'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/settings',
    'router_path' => 'devel/settings',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
      'identifier' => 'devel_devel-settings:devel/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_entity-info:devel/entity/info.
  $menu_links['devel_entity-info:devel/entity/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/entity/info',
    'router_path' => 'devel/entity/info',
    'link_title' => 'Entity info',
    'options' => array(
      'attributes' => array(
        'title' => 'View entity information across the whole site.',
      ),
      'identifier' => 'devel_entity-info:devel/entity/info',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_execute-php-code:devel/php.
  $menu_links['devel_execute-php-code:devel/php'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/php',
    'router_path' => 'devel/php',
    'link_title' => 'Execute PHP Code',
    'options' => array(
      'attributes' => array(
        'title' => 'Execute some PHP code',
      ),
      'identifier' => 'devel_execute-php-code:devel/php',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_field-info:devel/field/info.
  $menu_links['devel_field-info:devel/field/info'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/field/info',
    'router_path' => 'devel/field/info',
    'link_title' => 'Field info',
    'options' => array(
      'attributes' => array(
        'title' => 'View fields information across the whole site.',
      ),
      'identifier' => 'devel_field-info:devel/field/info',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_function-reference:devel/reference.
  $menu_links['devel_function-reference:devel/reference'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reference',
    'router_path' => 'devel/reference',
    'link_title' => 'Function reference',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of currently defined user functions with documentation links.',
      ),
      'identifier' => 'devel_function-reference:devel/reference',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_hookelements:devel/elements.
  $menu_links['devel_hookelements:devel/elements'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/elements',
    'router_path' => 'devel/elements',
    'link_title' => 'Hook_elements()',
    'options' => array(
      'attributes' => array(
        'title' => 'View the active form/render elements for this site.',
      ),
      'identifier' => 'devel_hookelements:devel/elements',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_menu-item:devel/menu/item.
  $menu_links['devel_menu-item:devel/menu/item'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/item',
    'router_path' => 'devel/menu/item',
    'link_title' => 'Menu item',
    'options' => array(
      'attributes' => array(
        'title' => 'Details about a given menu item.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_menu-item:devel/menu/item',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_phpinfo:devel/phpinfo.
  $menu_links['devel_phpinfo:devel/phpinfo'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/phpinfo',
    'router_path' => 'devel/phpinfo',
    'link_title' => 'PHPinfo()',
    'options' => array(
      'attributes' => array(
        'title' => 'View your server\'s PHP configuration',
      ),
      'identifier' => 'devel_phpinfo:devel/phpinfo',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_rebuild-menus:devel/menu/reset.
  $menu_links['devel_rebuild-menus:devel/menu/reset'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/menu/reset',
    'router_path' => 'devel/menu/reset',
    'link_title' => 'Rebuild menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Rebuild menu based on hook_menu() and revert any custom changes. All menu items return to their default settings.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_rebuild-menus:devel/menu/reset',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_reinstall-modules:devel/reinstall.
  $menu_links['devel_reinstall-modules:devel/reinstall'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/reinstall',
    'router_path' => 'devel/reinstall',
    'link_title' => 'Reinstall modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Run hook_uninstall() and then hook_install() for a given module.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_reinstall-modules:devel/reinstall',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_run-cron:devel/run-cron.
  $menu_links['devel_run-cron:devel/run-cron'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/run-cron',
    'router_path' => 'devel/run-cron',
    'link_title' => 'Run cron',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'devel_run-cron:devel/run-cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_session-viewer:devel/session.
  $menu_links['devel_session-viewer:devel/session'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/session',
    'router_path' => 'devel/session',
    'link_title' => 'Session viewer',
    'options' => array(
      'attributes' => array(
        'title' => 'List the contents of $_SESSION.',
      ),
      'identifier' => 'devel_session-viewer:devel/session',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_theme-registry:devel/theme/registry.
  $menu_links['devel_theme-registry:devel/theme/registry'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/theme/registry',
    'router_path' => 'devel/theme/registry',
    'link_title' => 'Theme registry',
    'options' => array(
      'attributes' => array(
        'title' => 'View a list of available theme functions across the whole site.',
      ),
      'identifier' => 'devel_theme-registry:devel/theme/registry',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: devel_variable-editor:devel/variable.
  $menu_links['devel_variable-editor:devel/variable'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/variable',
    'router_path' => 'devel/variable',
    'link_title' => 'Variable editor',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit and delete site variables.',
      ),
      'alter' => TRUE,
      'identifier' => 'devel_variable-editor:devel/variable',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: management_account-settings:admin/config/people/accounts.
  $menu_links['management_account-settings:admin/config/people/accounts'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/accounts',
    'router_path' => 'admin/config/people/accounts',
    'link_title' => 'Account settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure default behavior of users, including registration requirements, e-mails, fields, and user pictures.',
      ),
      'identifier' => 'management_account-settings:admin/config/people/accounts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_usuarios:admin/config/people',
  );
  // Exported menu link: management_actions:admin/config/system/actions.
  $menu_links['management_actions:admin/config/system/actions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/actions',
    'router_path' => 'admin/config/system/actions',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage the actions defined for your site.',
      ),
      'identifier' => 'management_actions:admin/config/system/actions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin-menu.
  $menu_links['management_administration-menu:admin/config/administration/admin-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin-menu',
    'router_path' => 'admin/config/administration/admin-menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin-menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin/config/administration',
  );
  // Exported menu link: management_administration:admin.
  $menu_links['management_administration:admin'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Administration',
    'options' => array(
      'identifier' => 'management_administration:admin',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );
  // Exported menu link: management_administration:admin/config/administration.
  $menu_links['management_administration:admin/config/administration'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration',
    'router_path' => 'admin/config/administration',
    'link_title' => 'Administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administration tools.',
      ),
      'identifier' => 'management_administration:admin/config/administration',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_appearance:admin/appearance.
  $menu_links['management_appearance:admin/appearance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/appearance',
    'router_path' => 'admin/appearance',
    'link_title' => 'Appearance',
    'options' => array(
      'attributes' => array(
        'title' => 'Select and configure your themes.',
      ),
      'identifier' => 'management_appearance:admin/appearance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -6,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_arc2-store-settings:admin/config/services/arc2_store.
  $menu_links['management_arc2-store-settings:admin/config/services/arc2_store'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/arc2_store',
    'router_path' => 'admin/config/services/arc2_store',
    'link_title' => 'ARC2 store settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure ARC2 stores.',
      ),
      'identifier' => 'management_arc2-store-settings:admin/config/services/arc2_store',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_servicios-web:admin/config/services',
  );
  // Exported menu link: management_available-updates:admin/reports/updates.
  $menu_links['management_available-updates:admin/reports/updates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/updates',
    'router_path' => 'admin/reports/updates',
    'link_title' => 'Available updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about available updates for your installed modules and themes.',
      ),
      'identifier' => 'management_available-updates:admin/reports/updates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_blocks:admin/structure/block.
  $menu_links['management_blocks:admin/structure/block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block',
    'router_path' => 'admin/structure/block',
    'link_title' => 'Blocks',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure what block content appears in your site\'s sidebars and other regions.',
      ),
      'identifier' => 'management_blocks:admin/structure/block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_clean-urls:admin/config/search/clean-urls.
  $menu_links['management_clean-urls:admin/config/search/clean-urls'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/clean-urls',
    'router_path' => 'admin/config/search/clean-urls',
    'link_title' => 'Clean URLs',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable clean URLs for your site.',
      ),
      'identifier' => 'management_clean-urls:admin/config/search/clean-urls',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_bsqueda-y-meta-datos:admin/config/search',
  );
  // Exported menu link: management_configuration:admin/config.
  $menu_links['management_configuration:admin/config'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config',
    'router_path' => 'admin/config',
    'link_title' => 'Configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer settings.',
      ),
      'identifier' => 'management_configuration:admin/config',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_content-authoring:admin/config/content.
  $menu_links['management_content-authoring:admin/config/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content',
    'router_path' => 'admin/config/content',
    'link_title' => 'Content authoring',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings related to formatting and authoring content.',
      ),
      'identifier' => 'management_content-authoring:admin/config/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_content-types:admin/structure/types.
  $menu_links['management_content-types:admin/structure/types'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/types',
    'router_path' => 'admin/structure/types',
    'link_title' => 'Content types',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage content types, including default status, front page promotion, comment settings, etc.',
      ),
      'identifier' => 'management_content-types:admin/structure/types',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_content:admin/content.
  $menu_links['management_content:admin/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content',
    'router_path' => 'admin/content',
    'link_title' => 'Content',
    'options' => array(
      'attributes' => array(
        'title' => 'Find and manage content.',
      ),
      'identifier' => 'management_content:admin/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_cron:admin/config/system/cron.
  $menu_links['management_cron:admin/config/system/cron'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/cron',
    'router_path' => 'admin/config/system/cron',
    'link_title' => 'Cron',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage automatic site maintenance tasks.',
      ),
      'identifier' => 'management_cron:admin/config/system/cron',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_dashboard:admin/dashboard.
  $menu_links['management_dashboard:admin/dashboard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => 'View and customize your dashboard.',
      ),
      'identifier' => 'management_dashboard:admin/dashboard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_date-and-time:admin/config/regional/date-time.
  $menu_links['management_date-and-time:admin/config/regional/date-time'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/date-time',
    'router_path' => 'admin/config/regional/date-time',
    'link_title' => 'Date and time',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure display formats for date and time.',
      ),
      'identifier' => 'management_date-and-time:admin/config/regional/date-time',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_regional-e-idioma:admin/config/regional',
  );
  // Exported menu link: management_date-api:admin/config/date.
  $menu_links['management_date-api:admin/config/date'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date',
    'router_path' => 'admin/config/date',
    'link_title' => 'Date API',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for modules the use the Date API.',
      ),
      'identifier' => 'management_date-api:admin/config/date',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_devel-settings:admin/config/development/devel.
  $menu_links['management_devel-settings:admin/config/development/devel'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/devel',
    'router_path' => 'admin/config/development/devel',
    'link_title' => 'Devel settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Helper functions, pages, and blocks to assist Drupal developers. The devel blocks can be managed via the <a href="/admin/structure/block">block administration</a> page.',
      ),
      'identifier' => 'management_devel-settings:admin/config/development/devel',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_development:admin/config/development.
  $menu_links['management_development:admin/config/development'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development',
    'router_path' => 'admin/config/development',
    'link_title' => 'Development',
    'options' => array(
      'attributes' => array(
        'title' => 'Development tools.',
      ),
      'identifier' => 'management_development:admin/config/development',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_diff:admin/config/content/diff.
  $menu_links['management_diff:admin/config/content/diff'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/diff',
    'router_path' => 'admin/config/content/diff',
    'link_title' => 'Diff',
    'options' => array(
      'attributes' => array(
        'title' => 'Diff settings.',
      ),
      'identifier' => 'management_diff:admin/config/content/diff',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_autora-del-contenido:admin/config/content',
  );
  // Exported menu link: management_display-suite:admin/structure/ds.
  $menu_links['management_display-suite:admin/structure/ds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/ds',
    'router_path' => 'admin/structure/ds',
    'link_title' => 'Display Suite',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage layouts for entities and configure fields, view modes etc.',
      ),
      'identifier' => 'management_display-suite:admin/structure/ds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_entity-view-modes:admin/config/system/entity-view-modes.
  $menu_links['management_entity-view-modes:admin/config/system/entity-view-modes'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/entity-view-modes',
    'router_path' => 'admin/config/system/entity-view-modes',
    'link_title' => 'Entity view modes',
    'options' => array(
      'attributes' => array(
        'title' => 'Create new custom view modes for content.',
      ),
      'identifier' => 'management_entity-view-modes:admin/config/system/entity-view-modes',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_features:admin/structure/features.
  $menu_links['management_features:admin/structure/features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage features.',
      ),
      'identifier' => 'management_features:admin/structure/features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_feeds-importers:admin/structure/feeds.
  $menu_links['management_feeds-importers:admin/structure/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/feeds',
    'router_path' => 'admin/structure/feeds',
    'link_title' => 'Feeds importers',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure one or more Feeds importers to aggregate RSS and Atom feeds, import CSV files or more.',
      ),
      'identifier' => 'management_feeds-importers:admin/structure/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_feeds-log:admin/reports/feeds.
  $menu_links['management_feeds-log:admin/reports/feeds'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/feeds',
    'router_path' => 'admin/reports/feeds',
    'link_title' => 'Feeds log',
    'options' => array(
      'attributes' => array(
        'title' => 'Review log messages of imports and subscriptions to feeds.',
      ),
      'identifier' => 'management_feeds-log:admin/reports/feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_field-collections:admin/structure/field-collections.
  $menu_links['management_field-collections:admin/structure/field-collections'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/field-collections',
    'router_path' => 'admin/structure/field-collections',
    'link_title' => 'Field collections',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage fields on field collections.',
      ),
      'identifier' => 'management_field-collections:admin/structure/field-collections',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_field-list:admin/reports/fields.
  $menu_links['management_field-list:admin/reports/fields'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/fields',
    'router_path' => 'admin/reports/fields',
    'link_title' => 'Field list',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of fields on all entity types.',
      ),
      'identifier' => 'management_field-list:admin/reports/fields',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_file-system:admin/config/media/file-system.
  $menu_links['management_file-system:admin/config/media/file-system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/file-system',
    'router_path' => 'admin/config/media/file-system',
    'link_title' => 'File system',
    'options' => array(
      'attributes' => array(
        'title' => 'Tell Drupal where to store uploaded files and how they are accessed.',
      ),
      'identifier' => 'management_file-system:admin/config/media/file-system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_multimedia:admin/config/media',
  );
  // Exported menu link: management_force-password-change:admin/config/people/force_password_change.
  $menu_links['management_force-password-change:admin/config/people/force_password_change'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/force_password_change',
    'router_path' => 'admin/config/people/force_password_change',
    'link_title' => 'Force password change',
    'options' => array(
      'attributes' => array(
        'title' => 'Force users to change their password either immediately or after a period of time.',
      ),
      'identifier' => 'management_force-password-change:admin/config/people/force_password_change',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_usuarios:admin/config/people',
  );
  // Exported menu link: management_generate-content:admin/config/development/generate/content.
  $menu_links['management_generate-content:admin/config/development/generate/content'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/content',
    'router_path' => 'admin/config/development/generate/content',
    'link_title' => 'Generate content',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of nodes and comments. Optionally delete current items.',
      ),
      'identifier' => 'management_generate-content:admin/config/development/generate/content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_generate-menus:admin/config/development/generate/menu.
  $menu_links['management_generate-menus:admin/config/development/generate/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/menu',
    'router_path' => 'admin/config/development/generate/menu',
    'link_title' => 'Generate menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of menus and menu links. Optionally delete current menus.',
      ),
      'identifier' => 'management_generate-menus:admin/config/development/generate/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_generate-terms:admin/config/development/generate/taxonomy.
  $menu_links['management_generate-terms:admin/config/development/generate/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/taxonomy',
    'router_path' => 'admin/config/development/generate/taxonomy',
    'link_title' => 'Generate terms',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of terms. Optionally delete current terms.',
      ),
      'identifier' => 'management_generate-terms:admin/config/development/generate/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_generate-users:admin/config/development/generate/user.
  $menu_links['management_generate-users:admin/config/development/generate/user'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/user',
    'router_path' => 'admin/config/development/generate/user',
    'link_title' => 'Generate users',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of users. Optionally delete current users.',
      ),
      'identifier' => 'management_generate-users:admin/config/development/generate/user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_generate-vocabularies:admin/config/development/generate/vocabs.
  $menu_links['management_generate-vocabularies:admin/config/development/generate/vocabs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/generate/vocabs',
    'router_path' => 'admin/config/development/generate/vocabs',
    'link_title' => 'Generate vocabularies',
    'options' => array(
      'attributes' => array(
        'title' => 'Generate a given number of vocabularies. Optionally delete current vocabularies.',
      ),
      'identifier' => 'management_generate-vocabularies:admin/config/development/generate/vocabs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_help:admin/help.
  $menu_links['management_help:admin/help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/help',
    'router_path' => 'admin/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Reference for usage, configuration, and modules.',
      ),
      'identifier' => 'management_help:admin/help',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_image-styles:admin/config/media/image-styles.
  $menu_links['management_image-styles:admin/config/media/image-styles'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-styles',
    'router_path' => 'admin/config/media/image-styles',
    'link_title' => 'Image styles',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure styles that can be used for resizing or adjusting images on display.',
      ),
      'identifier' => 'management_image-styles:admin/config/media/image-styles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_multimedia:admin/config/media',
  );
  // Exported menu link: management_image-toolkit:admin/config/media/image-toolkit.
  $menu_links['management_image-toolkit:admin/config/media/image-toolkit'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media/image-toolkit',
    'router_path' => 'admin/config/media/image-toolkit',
    'link_title' => 'Image toolkit',
    'options' => array(
      'attributes' => array(
        'title' => 'Choose which image toolkit to use if you have installed optional toolkits.',
      ),
      'identifier' => 'management_image-toolkit:admin/config/media/image-toolkit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 0,
    'parent_identifier' => 'management_multimedia:admin/config/media',
  );
  // Exported menu link: management_ip-address-blocking:admin/config/people/ip-blocking.
  $menu_links['management_ip-address-blocking:admin/config/people/ip-blocking'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people/ip-blocking',
    'router_path' => 'admin/config/people/ip-blocking',
    'link_title' => 'IP address blocking',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage blocked IP addresses.',
      ),
      'identifier' => 'management_ip-address-blocking:admin/config/people/ip-blocking',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'management_usuarios:admin/config/people',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update.
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_languages:admin/config/regional/language.
  $menu_links['management_languages:admin/config/regional/language'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/language',
    'router_path' => 'admin/config/regional/language',
    'link_title' => 'Languages',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure languages for content and the user interface.',
      ),
      'identifier' => 'management_languages:admin/config/regional/language',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_regional-e-idioma:admin/config/regional',
  );
  // Exported menu link: management_logging-and-errors:admin/config/development/logging.
  $menu_links['management_logging-and-errors:admin/config/development/logging'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/logging',
    'router_path' => 'admin/config/development/logging',
    'link_title' => 'Logging and errors',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for logging and alerts modules. Various modules can route Drupal\'s system events to different destinations, such as syslog, database, email, etc.',
      ),
      'identifier' => 'management_logging-and-errors:admin/config/development/logging',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_maintenance-mode:admin/config/development/maintenance.
  $menu_links['management_maintenance-mode:admin/config/development/maintenance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/maintenance',
    'router_path' => 'admin/config/development/maintenance',
    'link_title' => 'Maintenance mode',
    'options' => array(
      'attributes' => array(
        'title' => 'Take the site offline for maintenance or bring it back online.',
      ),
      'identifier' => 'management_maintenance-mode:admin/config/development/maintenance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management.
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_media:admin/config/media.
  $menu_links['management_media:admin/config/media'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/media',
    'router_path' => 'admin/config/media',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => 'Media tools.',
      ),
      'identifier' => 'management_media:admin/config/media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_men-principal:admin/structure/menu/manage/main-menu.
  $menu_links['management_men-principal:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Menú principal',
    'options' => array(
      'identifier' => 'management_men-principal:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_menus:admin/structure/menu.
  $menu_links['management_menus:admin/structure/menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new menus to your site, edit existing menus, and rename and reorganize menu links.',
      ),
      'identifier' => 'management_menus:admin/structure/menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_modules:admin/modules.
  $menu_links['management_modules:admin/modules'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/modules',
    'router_path' => 'admin/modules',
    'link_title' => 'Modules',
    'options' => array(
      'attributes' => array(
        'title' => 'Extend site functionality.',
      ),
      'identifier' => 'management_modules:admin/modules',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_navegacin:admin/structure/menu/manage/navigation.
  $menu_links['management_navegacin:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navegación',
    'options' => array(
      'identifier' => 'management_navegacin:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_pages:admin/structure/pages.
  $menu_links['management_pages:admin/structure/pages'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/pages',
    'router_path' => 'admin/structure/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => 'Add, edit and remove overridden system pages and user defined pages from the system.',
      ),
      'identifier' => 'management_pages:admin/structure/pages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_panels:admin/structure/panels.
  $menu_links['management_panels:admin/structure/panels'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/panels',
    'router_path' => 'admin/structure/panels',
    'link_title' => 'Panels',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a bird\'s eye view of items related to Panels.',
      ),
      'identifier' => 'management_panels:admin/structure/panels',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_people:admin/config/people.
  $menu_links['management_people:admin/config/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/people',
    'router_path' => 'admin/config/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure user accounts.',
      ),
      'identifier' => 'management_people:admin/config/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_people:admin/people.
  $menu_links['management_people:admin/people'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage user accounts, roles, and permissions.',
      ),
      'identifier' => 'management_people:admin/people',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -4,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_performance:admin/config/development/performance.
  $menu_links['management_performance:admin/config/development/performance'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/performance',
    'router_path' => 'admin/config/development/performance',
    'link_title' => 'Performance',
    'options' => array(
      'attributes' => array(
        'title' => 'Enable or disable page caching for anonymous users and set CSS and JS bandwidth optimization options.',
      ),
      'identifier' => 'management_performance:admin/config/development/performance',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_rdf-publishing-settings:admin/config/services/rdf.
  $menu_links['management_rdf-publishing-settings:admin/config/services/rdf'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rdf',
    'router_path' => 'admin/config/services/rdf',
    'link_title' => 'RDF publishing settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how site content gets published in RDF.',
      ),
      'identifier' => 'management_rdf-publishing-settings:admin/config/services/rdf',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_servicios-web:admin/config/services',
  );
  // Exported menu link: management_recent-log-messages:admin/reports/dblog.
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_regional-and-language:admin/config/regional.
  $menu_links['management_regional-and-language:admin/config/regional'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional',
    'router_path' => 'admin/config/regional',
    'link_title' => 'Regional and language',
    'options' => array(
      'attributes' => array(
        'title' => 'Regional settings, localization and translation.',
      ),
      'identifier' => 'management_regional-and-language:admin/config/regional',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_regional-settings:admin/config/regional/settings.
  $menu_links['management_regional-settings:admin/config/regional/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/settings',
    'router_path' => 'admin/config/regional/settings',
    'link_title' => 'Regional settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for the site\'s default time zone and country.',
      ),
      'identifier' => 'management_regional-settings:admin/config/regional/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_regional-e-idioma:admin/config/regional',
  );
  // Exported menu link: management_remove-duplicates:admin/config/content/remove_duplicates.
  $menu_links['management_remove-duplicates:admin/config/content/remove_duplicates'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/remove_duplicates',
    'router_path' => 'admin/config/content/remove_duplicates',
    'link_title' => 'Remove Duplicates',
    'options' => array(
      'attributes' => array(
        'title' => 'Delete Duplicate Nodes',
      ),
      'identifier' => 'management_remove-duplicates:admin/config/content/remove_duplicates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_autora-del-contenido:admin/config/content',
  );
  // Exported menu link: management_reports:admin/reports.
  $menu_links['management_reports:admin/reports'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports',
    'router_path' => 'admin/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => 'View reports, updates, and errors.',
      ),
      'identifier' => 'management_reports:admin/reports',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_rss-publishing:admin/config/services/rss-publishing.
  $menu_links['management_rss-publishing:admin/config/services/rss-publishing'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/rss-publishing',
    'router_path' => 'admin/config/services/rss-publishing',
    'link_title' => 'RSS publishing',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site description, the number of items per feed and whether feeds should be titles/teasers/full-text.',
      ),
      'identifier' => 'management_rss-publishing:admin/config/services/rss-publishing',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_servicios-web:admin/config/services',
  );
  // Exported menu link: management_search-and-metadata:admin/config/search.
  $menu_links['management_search-and-metadata:admin/config/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search',
    'router_path' => 'admin/config/search',
    'link_title' => 'Search and metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Local site search, metadata and SEO.',
      ),
      'identifier' => 'management_search-and-metadata:admin/config/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_search-api:admin/config/search/search_api.
  $menu_links['management_search-api:admin/config/search/search_api'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/search_api',
    'router_path' => 'admin/config/search/search_api',
    'link_title' => 'Search API',
    'options' => array(
      'attributes' => array(
        'title' => 'Create and configure search engines.',
      ),
      'identifier' => 'management_search-api:admin/config/search/search_api',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_bsqueda-y-meta-datos:admin/config/search',
  );
  // Exported menu link: management_search-settings:admin/config/search/settings.
  $menu_links['management_search-settings:admin/config/search/settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/settings',
    'router_path' => 'admin/config/search/settings',
    'link_title' => 'Search settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure relevance settings for search and other indexing options.',
      ),
      'identifier' => 'management_search-settings:admin/config/search/settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'parent_identifier' => 'management_bsqueda-y-meta-datos:admin/config/search',
  );
  // Exported menu link: management_shortcuts:admin/config/user-interface/shortcut.
  $menu_links['management_shortcuts:admin/config/user-interface/shortcut'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/shortcut',
    'router_path' => 'admin/config/user-interface/shortcut',
    'link_title' => 'Shortcuts',
    'options' => array(
      'attributes' => array(
        'title' => 'Add and modify shortcut sets.',
      ),
      'identifier' => 'management_shortcuts:admin/config/user-interface/shortcut',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_interfaz-de-usuario:admin/config/user-interface',
  );
  // Exported menu link: management_site-information:admin/config/system/site-information.
  $menu_links['management_site-information:admin/config/system/site-information'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site information',
    'options' => array(
      'attributes' => array(
        'title' => 'Change site name, e-mail address, slogan, default front page, and number of posts per page, error pages.',
      ),
      'identifier' => 'management_site-information:admin/config/system/site-information',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_sistema:admin/config/system',
  );
  // Exported menu link: management_status-report:admin/reports/status.
  $menu_links['management_status-report:admin/reports/status'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/status',
    'router_path' => 'admin/reports/status',
    'link_title' => 'Status report',
    'options' => array(
      'attributes' => array(
        'title' => 'Get a status report about your site\'s operation and any detected problems.',
      ),
      'identifier' => 'management_status-report:admin/reports/status',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -60,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_strongarm:admin/config/development/strongarm.
  $menu_links['management_strongarm:admin/config/development/strongarm'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/strongarm',
    'router_path' => 'admin/config/development/strongarm',
    'link_title' => 'Strongarm',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Drupal variable settings that have been strongarmed.',
      ),
      'identifier' => 'management_strongarm:admin/config/development/strongarm',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_desarrollo:admin/config/development',
  );
  // Exported menu link: management_structure:admin/structure.
  $menu_links['management_structure:admin/structure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure',
    'router_path' => 'admin/structure',
    'link_title' => 'Structure',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer blocks, content types, menus, etc.',
      ),
      'identifier' => 'management_structure:admin/structure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -8,
    'customized' => 0,
    'parent_identifier' => 'management_administracin:admin',
  );
  // Exported menu link: management_system:admin/config/system.
  $menu_links['management_system:admin/config/system'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/system',
    'router_path' => 'admin/config/system',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => 'General system related configuration.',
      ),
      'identifier' => 'management_system:admin/config/system',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -20,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_taxonomy-manager:admin/config/user-interface/taxonomy-manager-settings.
  $menu_links['management_taxonomy-manager:admin/config/user-interface/taxonomy-manager-settings'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/taxonomy-manager-settings',
    'router_path' => 'admin/config/user-interface/taxonomy-manager-settings',
    'link_title' => 'Taxonomy Manager',
    'options' => array(
      'attributes' => array(
        'title' => 'Advanced settings for the Taxonomy Manager',
      ),
      'identifier' => 'management_taxonomy-manager:admin/config/user-interface/taxonomy-manager-settings',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_interfaz-de-usuario:admin/config/user-interface',
  );
  // Exported menu link: management_taxonomy-manager:admin/structure/taxonomy_manager/voc.
  $menu_links['management_taxonomy-manager:admin/structure/taxonomy_manager/voc'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy_manager/voc',
    'router_path' => 'admin/structure/taxonomy_manager/voc',
    'link_title' => 'Taxonomy Manager',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer vocabularies with the Taxonomy Manager',
      ),
      'identifier' => 'management_taxonomy-manager:admin/structure/taxonomy_manager/voc',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_taxonomy:admin/structure/taxonomy.
  $menu_links['management_taxonomy:admin/structure/taxonomy'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage tagging, categorization, and classification of your content.',
      ),
      'identifier' => 'management_taxonomy:admin/structure/taxonomy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_text-formats:admin/config/content/formats.
  $menu_links['management_text-formats:admin/config/content/formats'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/formats',
    'router_path' => 'admin/config/content/formats',
    'link_title' => 'Text formats',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure how content input by users is filtered, including allowed HTML tags. Also allows enabling of module-provided filters.',
      ),
      'identifier' => 'management_text-formats:admin/config/content/formats',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_autora-del-contenido:admin/config/content',
  );
  // Exported menu link: management_top-access-denied-errors:admin/reports/access-denied.
  $menu_links['management_top-access-denied-errors:admin/reports/access-denied'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/access-denied',
    'router_path' => 'admin/reports/access-denied',
    'link_title' => 'Top \'access denied\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'access denied\' errors (403s).',
      ),
      'identifier' => 'management_top-access-denied-errors:admin/reports/access-denied',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_top-page-not-found-errors:admin/reports/page-not-found.
  $menu_links['management_top-page-not-found-errors:admin/reports/page-not-found'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/page-not-found',
    'router_path' => 'admin/reports/page-not-found',
    'link_title' => 'Top \'page not found\' errors',
    'options' => array(
      'attributes' => array(
        'title' => 'View \'page not found\' errors (404s).',
      ),
      'identifier' => 'management_top-page-not-found-errors:admin/reports/page-not-found',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_top-search-phrases:admin/reports/search.
  $menu_links['management_top-search-phrases:admin/reports/search'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/search',
    'router_path' => 'admin/reports/search',
    'link_title' => 'Top search phrases',
    'options' => array(
      'attributes' => array(
        'title' => 'View most popular search phrases.',
      ),
      'identifier' => 'management_top-search-phrases:admin/reports/search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_translate-interface:admin/config/regional/translate.
  $menu_links['management_translate-interface:admin/config/regional/translate'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/regional/translate',
    'router_path' => 'admin/config/regional/translate',
    'link_title' => 'Translate interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Translate the built in interface and optionally other text.',
      ),
      'identifier' => 'management_translate-interface:admin/config/regional/translate',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_regional-e-idioma:admin/config/regional',
  );
  // Exported menu link: management_url-aliases:admin/config/search/path.
  $menu_links['management_url-aliases:admin/config/search/path'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/search/path',
    'router_path' => 'admin/config/search/path',
    'link_title' => 'URL aliases',
    'options' => array(
      'attributes' => array(
        'title' => 'Change your site\'s URL paths by aliasing them.',
      ),
      'identifier' => 'management_url-aliases:admin/config/search/path',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -5,
    'customized' => 0,
    'parent_identifier' => 'management_bsqueda-y-meta-datos:admin/config/search',
  );
  // Exported menu link: management_user-interface:admin/config/user-interface.
  $menu_links['management_user-interface:admin/config/user-interface'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface',
    'router_path' => 'admin/config/user-interface',
    'link_title' => 'User interface',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools that enhance the user interface.',
      ),
      'identifier' => 'management_user-interface:admin/config/user-interface',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -15,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_mens:admin/structure/menu',
  );
  // Exported menu link: management_views-plugins:admin/reports/views-plugins.
  $menu_links['management_views-plugins:admin/reports/views-plugins'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/views-plugins',
    'router_path' => 'admin/reports/views-plugins',
    'link_title' => 'Views plugins',
    'options' => array(
      'attributes' => array(
        'title' => 'Overview of plugins used in all views.',
      ),
      'identifier' => 'management_views-plugins:admin/reports/views-plugins',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_informes:admin/reports',
  );
  // Exported menu link: management_views:admin/structure/views.
  $menu_links['management_views:admin/structure/views'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/views',
    'router_path' => 'admin/structure/views',
    'link_title' => 'Views',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage customized lists of content.',
      ),
      'identifier' => 'management_views:admin/structure/views',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_estructura:admin/structure',
  );
  // Exported menu link: management_web-services:admin/config/services.
  $menu_links['management_web-services:admin/config/services'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services',
    'router_path' => 'admin/config/services',
    'link_title' => 'Web services',
    'options' => array(
      'attributes' => array(
        'title' => 'Tools related to web services.',
      ),
      'identifier' => 'management_web-services:admin/config/services',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: management_workflow:admin/config/workflow.
  $menu_links['management_workflow:admin/config/workflow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/workflow',
    'router_path' => 'admin/config/workflow',
    'link_title' => 'Workflow',
    'options' => array(
      'attributes' => array(
        'title' => 'Content workflow, editorial workflow tools.',
      ),
      'identifier' => 'management_workflow:admin/config/workflow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'management_configuracin:admin/config',
  );
  // Exported menu link: navigation_add-content:node/add.
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: navigation_agregar-grado:admin/structure/taxonomy/grados/add.
  $menu_links['navigation_agregar-grado:admin/structure/taxonomy/grados/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/structure/taxonomy/grados/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Agregar Grado',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_agregar-grado:admin/structure/taxonomy/grados/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_argentinas-sin-siglas:instituciones-argentinas-sin-siglas.
  $menu_links['navigation_argentinas-sin-siglas:instituciones-argentinas-sin-siglas'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'instituciones-argentinas-sin-siglas',
    'router_path' => 'instituciones-argentinas-sin-siglas',
    'link_title' => 'Argentinas sin siglas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_argentinas-sin-siglas:instituciones-argentinas-sin-siglas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_artculo:node/add/article.
  $menu_links['navigation_artculo:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Artículo',
    'options' => array(
      'attributes' => array(
        'title' => 'Use los <em>artículos</em> para contenido que tenga relevancia temporal como las noticias o las publicaciones en blogs.',
      ),
      'identifier' => 'navigation_artculo:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  // Exported menu link: navigation_compose-tips:filter/tips.
  $menu_links['navigation_compose-tips:filter/tips'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'filter/tips',
    'router_path' => 'filter/tips',
    'link_title' => 'Compose tips',
    'options' => array(
      'identifier' => 'navigation_compose-tips:filter/tips',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: navigation_import:import.
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: navigation_institucin:node/add/instituci-n.
  $menu_links['navigation_institucin:node/add/instituci-n'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/instituci-n',
    'router_path' => 'node/add/instituci-n',
    'link_title' => 'Institución',
    'options' => array(
      'identifier' => 'navigation_institucin:node/add/instituci-n',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  // Exported menu link: navigation_instituciones-sin-siglas:instituciones-sin-siglas.
  $menu_links['navigation_instituciones-sin-siglas:instituciones-sin-siglas'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'instituciones-sin-siglas',
    'router_path' => 'instituciones-sin-siglas',
    'link_title' => 'Instituciones sin siglas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_instituciones-sin-siglas:instituciones-sin-siglas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_persona:node/add/persona.
  $menu_links['navigation_persona:node/add/persona'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/persona',
    'router_path' => 'node/add/persona',
    'link_title' => 'Persona',
    'options' => array(
      'identifier' => 'navigation_persona:node/add/persona',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  // Exported menu link: navigation_personas-duplicadas:personas-duplicadas.
  $menu_links['navigation_personas-duplicadas:personas-duplicadas'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'personas-duplicadas',
    'router_path' => 'personas-duplicadas',
    'link_title' => 'Personas duplicadas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_personas-duplicadas:personas-duplicadas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_pgina-bsica:node/add/page.
  $menu_links['navigation_pgina-bsica:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Página básica',
    'options' => array(
      'attributes' => array(
        'title' => 'Use las <em>páginas básicas</em> para publicar contenido que no varía, como es el caso de una página "Sobre nosotros" o "Acerca de..."',
      ),
      'identifier' => 'navigation_pgina-bsica:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_agregar-contenido:node/add',
  );
  // Exported menu link: navigation_rbol-de-instituciones:arbol-de-instituciones.
  $menu_links['navigation_rbol-de-instituciones:arbol-de-instituciones'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'arbol-de-instituciones',
    'router_path' => 'arbol-de-instituciones',
    'link_title' => 'Árbol de instituciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_rbol-de-instituciones:arbol-de-instituciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_taxonomy-manager:admin/structure/taxonomy_manager/voc.
  $menu_links['navigation_taxonomy-manager:admin/structure/taxonomy_manager/voc'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/structure/taxonomy_manager/voc',
    'router_path' => 'admin/structure/taxonomy_manager/voc',
    'link_title' => 'Taxonomy Manager',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_taxonomy-manager:admin/structure/taxonomy_manager/voc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ARC2 store settings');
  t('Account settings');
  t('Actions');
  t('Add content');
  t('Administration');
  t('Administration menu');
  t('Agregar Grado');
  t('Appearance');
  t('Argentinas sin siglas');
  t('Artículo');
  t('Available updates');
  t('Blocks');
  t('Clean URLs');
  t('Clear cache');
  t('Compose tips');
  t('Configuration');
  t('Content');
  t('Content authoring');
  t('Content types');
  t('Cron');
  t('Dashboard');
  t('Date API');
  t('Date and time');
  t('Devel settings');
  t('Development');
  t('Diff');
  t('Display Suite');
  t('Entity info');
  t('Entity view modes');
  t('Execute PHP Code');
  t('Features');
  t('Feeds importers');
  t('Feeds log');
  t('Field collections');
  t('Field info');
  t('Field list');
  t('File system');
  t('Force password change');
  t('Function reference');
  t('Generate content');
  t('Generate menus');
  t('Generate terms');
  t('Generate users');
  t('Generate vocabularies');
  t('Help');
  t('Hook_elements()');
  t('IP address blocking');
  t('Image styles');
  t('Image toolkit');
  t('Import');
  t('Inicio');
  t('Instituciones sin siglas');
  t('Institución');
  t('Languages');
  t('Log out');
  t('Logging and errors');
  t('Maintenance mode');
  t('Management');
  t('Media');
  t('Menu item');
  t('Menus');
  t('Menú principal');
  t('Modules');
  t('Navegación');
  t('PHPinfo()');
  t('Pages');
  t('Panels');
  t('People');
  t('Performance');
  t('Persona');
  t('Personas duplicadas');
  t('Página básica');
  t('RDF publishing settings');
  t('RSS publishing');
  t('Rebuild menus');
  t('Recent log messages');
  t('Regional and language');
  t('Regional settings');
  t('Reinstall modules');
  t('Remove Duplicates');
  t('Reports');
  t('Run cron');
  t('Search');
  t('Search API');
  t('Search and metadata');
  t('Search settings');
  t('Session viewer');
  t('Shortcuts');
  t('Site information');
  t('Status report');
  t('Strongarm');
  t('Structure');
  t('System');
  t('Taxonomy');
  t('Taxonomy Manager');
  t('Text formats');
  t('Theme registry');
  t('Top \'access denied\' errors');
  t('Top \'page not found\' errors');
  t('Top search phrases');
  t('Translate interface');
  t('URL aliases');
  t('User account');
  t('User interface');
  t('User menu');
  t('Variable editor');
  t('Views');
  t('Views plugins');
  t('Web services');
  t('Workflow');
  t('jQuery update');
  t('Árbol de instituciones');

  return $menu_links;
}
