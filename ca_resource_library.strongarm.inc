<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_resource_library_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ca_resource_library_list_template';
  $strongarm->value = 'ca_resource_library_list_template_one';

  $export['ca_resource_library_list_template'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ca_resource_library_node_template';
  $strongarm->value = 'ca_resource_library_node_template_one';

  $export['ca_resource_library_node_template'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_resource_library';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '0',
    'taxonomy' => '-4',
    'path' => '4',
  );

  $export['content_extra_weights_ca_resource_library'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_resource_library';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_resource_library'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_resource_library_pattern';
  $strongarm->value = 'resource-library/[title-raw]';

  $export['pathauto_node_ca_resource_library_pattern'] = $strongarm;
  return $export;
}
