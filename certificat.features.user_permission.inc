<?php
/**
 * @file
 * certificat.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function certificat_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create certificat content'.
  $permissions['create certificat content'] = array(
    'name' => 'create certificat content',
    'roles' => array(
      'administrator' => 'administrator',
      'certificateur' => 'certificateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any certificat content'.
  $permissions['delete any certificat content'] = array(
    'name' => 'delete any certificat content',
    'roles' => array(
      'administrator' => 'administrator',
      'certificateur' => 'certificateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own certificat content'.
  $permissions['delete own certificat content'] = array(
    'name' => 'delete own certificat content',
    'roles' => array(
      'administrator' => 'administrator',
      'certificateur' => 'certificateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any certificat content'.
  $permissions['edit any certificat content'] = array(
    'name' => 'edit any certificat content',
    'roles' => array(
      'administrator' => 'administrator',
      'certificateur' => 'certificateur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own certificat content'.
  $permissions['edit own certificat content'] = array(
    'name' => 'edit own certificat content',
    'roles' => array(
      'administrator' => 'administrator',
      'certificateur' => 'certificateur',
    ),
    'module' => 'node',
  );

  return $permissions;
}
