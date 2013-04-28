<?php
/**
 * @file
 * bangpoundanalytics.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bangpoundanalytics_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'google_analytics_social';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Google Analytics social';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'visitorType' => 'visitorType',
    'avgTimeOnPage' => 'avgTimeOnPage',
    'entranceRate' => 'entranceRate',
    'entrances' => 'entrances',
    'exitRate' => 'exitRate',
    'exits' => 'exits',
    'pageviews' => 'pageviews',
    'pageviewsPerVisit' => 'pageviewsPerVisit',
    'timeOnPage' => 'timeOnPage',
    'uniquePageviews' => 'uniquePageviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'visitorType' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'avgTimeOnPage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entranceRate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entrances' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'exitRate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'exits' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'pageviews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'pageviewsPerVisit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timeOnPage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uniquePageviews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Social Activities Dimensions: ga:socialActivityDisplayName */
  $handler->display->display_options['fields']['socialActivityDisplayName']['id'] = 'socialActivityDisplayName';
  $handler->display->display_options['fields']['socialActivityDisplayName']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialActivityDisplayName']['field'] = 'socialActivityDisplayName';
  /* Field: Social Activities Metrics: ga:socialActivities */
  $handler->display->display_options['fields']['socialActivities']['id'] = 'socialActivities';
  $handler->display->display_options['fields']['socialActivities']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialActivities']['field'] = 'socialActivities';
  /* Field: Social Activities Dimensions: ga:socialActivityUserHandle */
  $handler->display->display_options['fields']['socialActivityUserHandle']['id'] = 'socialActivityUserHandle';
  $handler->display->display_options['fields']['socialActivityUserHandle']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialActivityUserHandle']['field'] = 'socialActivityUserHandle';
  /* Field: Social Activities Dimensions: ga:socialActivityEndorsingUrl */
  $handler->display->display_options['fields']['socialActivityEndorsingUrl']['id'] = 'socialActivityEndorsingUrl';
  $handler->display->display_options['fields']['socialActivityEndorsingUrl']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialActivityEndorsingUrl']['field'] = 'socialActivityEndorsingUrl';
  /* Field: Social Activities Dimensions: ga:socialActivityTimestamp */
  $handler->display->display_options['fields']['socialActivityTimestamp']['id'] = 'socialActivityTimestamp';
  $handler->display->display_options['fields']['socialActivityTimestamp']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialActivityTimestamp']['field'] = 'socialActivityTimestamp';
  /* Field: Social Activities Dimensions: ga:socialActivityUserPhotoUrl */
  $handler->display->display_options['fields']['socialActivityUserPhotoUrl']['id'] = 'socialActivityUserPhotoUrl';
  $handler->display->display_options['fields']['socialActivityUserPhotoUrl']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialActivityUserPhotoUrl']['field'] = 'socialActivityUserPhotoUrl';
  /* Field: Social Activities Dimensions: ga:socialActivityUserProfileUrl */
  $handler->display->display_options['fields']['socialActivityUserProfileUrl']['id'] = 'socialActivityUserProfileUrl';
  $handler->display->display_options['fields']['socialActivityUserProfileUrl']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialActivityUserProfileUrl']['field'] = 'socialActivityUserProfileUrl';
  /* Contextual filter: Page Tracking Dimensions: ga:pagePath */
  $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['google_analytics_social'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('ga:socialActivityDisplayName'),
    t('ga:socialActivities'),
    t('ga:socialActivityUserHandle'),
    t('ga:socialActivityEndorsingUrl'),
    t('ga:socialActivityTimestamp'),
    t('ga:socialActivityUserPhotoUrl'),
    t('ga:socialActivityUserProfileUrl'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['google_analytics_social'] = $view;

  $view = new view();
  $view->name = 'social_visits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Social visits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social visits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'visitorType' => 'visitorType',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'visitorType' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Traffic Sources Dimensions: ga:socialNetwork */
  $handler->display->display_options['fields']['socialNetwork']['id'] = 'socialNetwork';
  $handler->display->display_options['fields']['socialNetwork']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['socialNetwork']['field'] = 'socialNetwork';
  $handler->display->display_options['fields']['socialNetwork']['label'] = 'Social Network';
  /* Field: Session Metrics: ga:visits */
  $handler->display->display_options['fields']['visits']['id'] = 'visits';
  $handler->display->display_options['fields']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visits']['field'] = 'visits';
  $handler->display->display_options['fields']['visits']['label'] = 'Visits';
  /* Field: Session Metrics: ga:visitBounceRate */
  $handler->display->display_options['fields']['visitBounceRate']['id'] = 'visitBounceRate';
  $handler->display->display_options['fields']['visitBounceRate']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visitBounceRate']['field'] = 'visitBounceRate';
  $handler->display->display_options['fields']['visitBounceRate']['label'] = 'Bounce rate';
  /* Sort criterion: Session Metrics: ga:visits */
  $handler->display->display_options['sorts']['visits']['id'] = 'visits';
  $handler->display->display_options['sorts']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['visits']['field'] = 'visits';
  $handler->display->display_options['sorts']['visits']['order'] = 'DESC';
  /* Contextual filter: Page Tracking Dimensions: ga:pagePath */
  $handler->display->display_options['arguments']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['arguments']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['arguments']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['arguments']['pagePath']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pagePath']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pagePath']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pagePath']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Google Analytics: Start/End date of report (required) */
  $handler->display->display_options['filters']['start_end']['id'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_end']['field'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['operator'] = 'between';
  $handler->display->display_options['filters']['start_end']['value']['min'] = '-1 day';
  $handler->display->display_options['filters']['start_end']['value']['max'] = '-31 days';
  $handler->display->display_options['filters']['start_end']['value']['type'] = 'offset';
  /* Filter criterion: Traffic Sources Dimensions: ga:hasSocialSourceReferral */
  $handler->display->display_options['filters']['hasSocialSourceReferral']['id'] = 'hasSocialSourceReferral';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['field'] = 'hasSocialSourceReferral';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['value'] = 'Yes';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['expose']['operator_id'] = 'hasSocialSourceReferral_op';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['expose']['label'] = 'ga:hasSocialSourceReferral';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['expose']['operator'] = 'hasSocialSourceReferral_op';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['expose']['identifier'] = 'hasSocialSourceReferral';
  $handler->display->display_options['filters']['hasSocialSourceReferral']['expose']['required'] = 0;
  $handler->display->display_options['filters']['hasSocialSourceReferral']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Analytics';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'pagePath' => array(
      'type' => 'context',
      'context' => 'string.raw',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Path',
    ),
  );
  $translatables['social_visits'] = array(
    t('Master'),
    t('Social visits'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Social Network'),
    t('Visits'),
    t('Bounce rate'),
    t('All'),
    t('ga:hasSocialSourceReferral'),
    t('Content pane'),
    t('Analytics'),
  );
  $export['social_visits'] = $view;

  return $export;
}
