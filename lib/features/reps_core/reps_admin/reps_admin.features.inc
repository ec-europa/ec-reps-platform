<?php

/**
 * @file
 * Reps_admin.features.inc.
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reps_admin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function reps_admin_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
