<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_resource_library_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_resource_library content
  $permissions['create ca_resource_library content'] = array(
    'name' => 'create ca_resource_library content',
    'roles' => array(
      '0' => 'resource library administrator',
      '1' => 'resource library writer',
    ),
  );

  // Exported permission: delete any ca_resource_library content
  $permissions['delete any ca_resource_library content'] = array(
    'name' => 'delete any ca_resource_library content',
    'roles' => array(
      '0' => 'resource library administrator',
    ),
  );

  // Exported permission: delete own ca_resource_library content
  $permissions['delete own ca_resource_library content'] = array(
    'name' => 'delete own ca_resource_library content',
    'roles' => array(
      '0' => 'resource library administrator',
      '1' => 'resource library writer',
    ),
  );

  // Exported permission: edit any ca_resource_library content
  $permissions['edit any ca_resource_library content'] = array(
    'name' => 'edit any ca_resource_library content',
    'roles' => array(
      '0' => 'resource library administrator',
    ),
  );

  // Exported permission: edit own ca_resource_library content
  $permissions['edit own ca_resource_library content'] = array(
    'name' => 'edit own ca_resource_library content',
    'roles' => array(
      '0' => 'resource library administrator',
      '1' => 'resource library writer',
    ),
  );

  return $permissions;
}
