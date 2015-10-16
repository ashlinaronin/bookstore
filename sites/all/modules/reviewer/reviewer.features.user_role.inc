<?php
/**
 * @file
 * reviewer.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function reviewer_user_default_roles() {
  $roles = array();

  // Exported role: reviewer.
  $roles['reviewer'] = array(
    'name' => 'reviewer',
    'weight' => 2,
  );

  return $roles;
}
