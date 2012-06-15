<?php

/**
 * @file
 * Provide the admin related functions for the mailfish module
 */

/**
 * defines the mailfish admin settings form
 */
 function mailfish_admin_settings_form() {
   $form = array();
   $form['mailfish_types'] = array(
     '#title' => t('The content types to enable MailFish subscriptions for'),
     '#description' => t('On the specified node types, a Mailfish subscription option will be available and can be enabled while the
         node is being edited.'),
     '#type' => 'checkboxes',
     '#options' => node_type_get_names(),
     '#default_value' => variable_get('mailfish_types', array()),
     );
   return system_settings_form($form);
 }
 