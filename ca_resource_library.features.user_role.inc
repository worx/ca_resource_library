<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_resource_library_user_default_roles() {
  $roles = array();

  // Exported role: resource library administrator
  $roles['resource library administrator'] = array(
    'name' => 'resource library administrator',
  );

  // Exported role: resource library writer
  $roles['resource library writer'] = array(
    'name' => 'resource library writer',
  );

  return $roles;
}
