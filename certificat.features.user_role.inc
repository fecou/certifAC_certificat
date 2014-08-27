<?php
/**
 * @file
 * certificat.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function certificat_user_default_roles() {
  $roles = array();

  // Exported role: certificateur.
  $roles['certificateur'] = array(
    'name' => 'certificateur',
    'weight' => 5,
  );

  // Exported role: editeur.
  $roles['editeur'] = array(
    'name' => 'editeur',
    'weight' => 3,
  );

  return $roles;
}
