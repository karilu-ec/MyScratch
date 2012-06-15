<?php
/**
 * @file
 * example_blog_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function example_blog_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create blog_entry content.
  $permissions['create blog_entry content'] = array(
    'name' => 'create blog_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any blog_entry content.
  $permissions['delete any blog_entry content'] = array(
    'name' => 'delete any blog_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own blog_entry content.
  $permissions['delete own blog_entry content'] = array(
    'name' => 'delete own blog_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any blog_entry content.
  $permissions['edit any blog_entry content'] = array(
    'name' => 'edit any blog_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own blog_entry content.
  $permissions['edit own blog_entry content'] = array(
    'name' => 'edit own blog_entry content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: use text format blog_format.
  $permissions['use text format blog_format'] = array(
    'name' => 'use text format blog_format',
    'roles' => array(
      0 => 'administrator',
      1 => 'blog editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
