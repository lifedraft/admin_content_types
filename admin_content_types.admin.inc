<?php

function admin_content_types_settings_form(&$form_state) {
  
  $form = array();
  
  $vocabularies = taxonomy_get_vocabularies();
  $vocabularies_options = array();
  foreach ($vocabularies as $vocabulary) {
    $vocabularies_options[$vocabulary->vid] = $vocabulary->name;
  }
  
  $form['admin_content_types_vid'] = array(
    '#type' => 'select',
    '#title' => t('Vocabulary'),
    '#default_value' => variable_get('admin_content_types_vid', ''),
    '#options' => $vocabularies_options,
  );
  
  return system_settings_form($form);
  
}