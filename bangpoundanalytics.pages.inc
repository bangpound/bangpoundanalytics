<?php

function bangpoundanalytics_page($node) {
  $uri = entity_uri('node', $node);
  $path = ltrim(url($uri['path'], $uri['options']), '/');
  $prefix = drupal_get_path('profile', 'electronicintifada') .'/bower_components';
  $build = array(
    '#tag' => 'script',
    '#value' => '',
    '#attributes' => array(
      'type' => 'text/javascript',
      'src' => url($prefix . '/webcomponentsjs/webcomponents.min.js'),
    ),
    '#weight' => -1000,
  );
  drupal_add_html_head($build, 'webcomponents');
  $href = url(drupal_get_path('module', 'bangpoundanalytics') .'/bangpoundanalytics.css');
  $build = array(
    '#type' => 'markup',
    '#markup' => '<link rel="stylesheet" href="'.$href.'" shim-shadowdom>'
  );
  drupal_add_html_head($build, 'drupal_add_html_head_link:stylesheet:'. $href);
  drupal_add_html_head_link(array('rel' => 'import', 'href' => url($prefix .'/google-signin/google-signin.html')));
  drupal_add_html_head_link(array('rel' => 'import', 'href' => url($prefix .'/google-analytics/google-analytics.html')));
  return theme('analytics', array('path' => $path));
}
