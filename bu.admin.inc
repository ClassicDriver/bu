<?php

function bu_admin_settings_form() {
  $form = array();

  $form['bu_browsers'] = array(
    '#type' => 'fieldset',
    '#title' => 'Browser',
    '#description' => 'Select browser versions which should be handled as outdated',
    '#tree' => TRUE,
  );

  $form['bu_browsers']['firefox'] = array(
    '#type' => 'select',
    '#title' => t('Firefox'),
    '#options' => array(1 => 1, 1.5 => 1.5, 2 => 2, 3 => 3, 3.5 => 3.5, 3.6 => 3.6),
    '#default_value' => variable_get('bu_browsers_firefox', 3),
  );
  $form['bu_browsers']['ie'] = array(
    '#type' => 'select',
    '#title' => t('Internet Explorer'),
    '#options' => array(5.5 => 5.5, 6 => 6, 7 => 7, 8 => 8),
    '#default_value' => variable_get('bu_browsers_ie', 6),
  );
  $form['bu_browsers']['opera'] = array(
    '#type' => 'select',
    '#title' => t('Opera'),
    '#options' => array(10.1 => 10.1, 10.5 => 10.5, 10.6 => 10.6),
    '#default_value' => variable_get('bu_browsers_opera', 10.6),
  );
  $form['bu_browsers']['safari'] = array(
    '#type' => 'select',
    '#title' => t('Safari'),
    '#options' => array(1 => 1, 1.2 => 1.2, 2 => 2, 3 => 3, 3.2 => 3.2, 4 => 4),
    '#default_value' => variable_get('bu_browsers_safari', 3),
  );

  return system_settings_form($form);
}
