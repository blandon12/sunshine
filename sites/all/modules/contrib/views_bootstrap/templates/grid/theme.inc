<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_bootstrap_grid_plugin_style(&$vars) {
  $view     = $vars['view'];
  $options  = $view->style_plugin->options;
  $horizontal = ($options['alignment'] === 'horizontal');

  $columns = $options['columns'];
  $lg_columns = $options['lg-columns'];
  $md_columns = $options['md-columns'];
  $sm_columns = $options['sm-columns'];
  $xs_columns = $options['xs-columns'];

  // Split items by rows and columns.
  $vars['items'] = _views_bootstrap_split_rows($vars, $lg_columns, $horizontal);
  $vars['lg_items'] = _views_bootstrap_split_rows($vars, $lg_columns, $horizontal);
  $vars['md_items'] = _views_bootstrap_split_rows($vars, $md_columns, $horizontal);
  $vars['sm_items'] = _views_bootstrap_split_rows($vars, $sm_columns, $horizontal);
  $vars['xs_items'] = _views_bootstrap_split_rows($vars, $xs_columns, $horizontal);

  $vars['column_type'] = 12 / $columns;
  $vars['lg_column_type'] = 12 / $lg_columns;
  $vars['md_column_type'] = 12 / $md_columns;
  $vars['sm_column_type'] = 12 / $sm_columns;
  $vars['xs_column_type'] = 12 / $xs_columns;
}
