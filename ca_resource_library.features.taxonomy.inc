<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ca_resource_library_taxonomy_default_vocabularies() {
  return array(
    'ca_resource_library_category' => array(
      'name' => 'Category',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '1',
      'tags' => '1',
      'module' => 'features_ca_resource_library_category',
      'weight' => '0',
      'nodes' => array(
        'ca_resource_library' => 'ca_resource_library',
      ),
    ),
  );
}
