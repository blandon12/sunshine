<?php

/**
 * @file
 * template.php
 */

function bootstrap_subtheme_preprocess_page(&$vars) {
  $url = arg(0);
  if ($url == 'homepage') {
    drupal_add_css(path_to_theme()."/css/homepage_custom.css");
    drupal_add_js(path_to_theme()."/js/homepage_custom.js");
    drupal_add_js(path_to_theme()."/js/project_custom.js");
  }

  if ($url == 'project') {
    drupal_add_js(path_to_theme()."/js/project_custom.js");
  }

}

