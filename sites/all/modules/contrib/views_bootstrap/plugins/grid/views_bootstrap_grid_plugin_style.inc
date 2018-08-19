<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_style.
 */

/**
 * Class to define a style plugin handler.
 */
class ViewsBootstrapGridPluginStyle extends views_plugin_style {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['alignment'] = array('default' => 'horizontal');
    $options['columns'] = array('default' => 2);
    $options['lg-columns'] = array('default' => 3);
    $options['md-columns'] = array('default' => 2);

    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['alignment'] = array(
      '#type' => 'radios',
      '#title' => t('Alignment'),
      '#options' => array(
        'horizontal' => t('Horizontal'),
        'vertical' => t('Vertical'),
      ),
      '#description' => t('Horizontal alignment will place items starting in the upper left and moving right.
      Vertical alignment will place items starting in the upper left and moving down.'),
      '#default_value' => $this->options['alignment'],
    );

    $op = array(1, 2, 3, 4, 6, 12);

    $form['columns'] = array(
      '#type' => 'select',
      '#title' => t('Number of default columns'),
      '#options' => array_combine($op, $op),
      '#required' => TRUE,
      '#default_value' => $this->options['columns'],
    );

    // Tweak - extend view_bootstrap grid to work for 4 different devices
    $form['lg-columns'] = array(
      '#type' => 'select',
      '#title' => t('Number of LG columns'),
      '#options' => array_combine($op, $op),
      '#required' => TRUE,
      '#default_value' => $this->options['lg-columns'],
    );

    $form['md-columns'] = array(
      '#type' => 'select',
      '#title' => t('Number of MD columns'),
      '#options' => array_combine($op, $op),
      '#required' => TRUE,
      '#default_value' => $this->options['md-columns'],
    );

    $form['sm-columns'] = array(
      '#type' => 'select',
      '#title' => t('Number of SM columns'),
      '#options' => array_combine($op, $op),
      '#required' => TRUE,
      '#default_value' => $this->options['sm-columns'],
    );

    $form['xs-columns'] = array(
      '#type' => 'select',
      '#title' => t('Number of XS columns'),
      '#options' => array_combine($op, $op),
      '#required' => TRUE,
      '#default_value' => $this->options['xs-columns'],
    );
  }
}
