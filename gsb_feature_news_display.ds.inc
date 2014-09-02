<?php
/**
 * @file
 * gsb_feature_news_display.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_news_display_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'insights_label_school_news';
  $ds_field->label = 'Insights School News label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'announcement|teaser
school_story|teaser
offsite_school_story|teaser
';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2 class="insights-label school-news">School News</h2>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['insights_label_school_news'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_news_display_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'news_listing';
  $ds_view_mode->label = 'News listing';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['news_listing'] = $ds_view_mode;

  return $export;
}
