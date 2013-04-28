<?php

/**
 * @file
 * Plugin to provide an relationship handler for entities from query string.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('URI from entity'),
  'keyword' => 'uri',
  'description' => t('URI from entity.'),
  'required context' => new ctools_context_required(t('Entity'), 'entity'),
  'context' => 'bangpoundanalytics_uri_from_entity_context',
  'edit form' => 'bangpoundanalytics_uri_from_entity_settings_form',
);

/**
 * Return a new context based on an existing context.
 */
function bangpoundanalytics_uri_from_entity_context($context, $conf) {

  // If unset it wants a generic, unfilled context, which is just NULL.
  if (empty($context->data) || !isset($context->data)) {
    return ctools_context_create_empty('string', NULL);
  }

  if (!empty($context->data)) {
    $uri = entity_uri($context->keyword, $context->data);

    // Send it to ctools.
    return ctools_context_create('string', ltrim(url($uri['path'], $uri['options']), '/'));
  }
}

/**
 * Settings form for the relationship.
 */
function bangpoundanalytics_uri_from_entity_settings_form($form, &$form_state) {

  return $form;
}

/**
 * Submit handler; settings form for the context.
 */
function bangpoundanalytics_uri_from_entity_settings_form_submit($form, &$form_state) {
  //$form_state['conf']['entity_type'] = $form_state['values']['entity_type'];
}
