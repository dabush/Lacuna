<?php
/**
 * @file
 * lacuna_stories_irb_form.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function lacuna_stories_irb_form_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Report a Bug',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '9c5a67c9-66be-46cd-9d65-3b5a703ab657',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1460142756,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6385ab88-d29f-457e-94cc-bf5e726cd4e5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'If you\'ve encountered a part of the site that isn\'t working like it seems it should, please let us know. Thanks for helping us make Lacuna better.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>If you\'ve encountered a part of the site that isn\'t working like it seems it should, please let us know. Thanks for helping us make Lacuna better.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'nid' => '6385ab88-d29f-457e-94cc-bf5e726cd4e5',
    'confirmation' => 'Thanks for helping us improve Lacuna!',
    'confirmation_format' => 'filtered_html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 14,
        'eid' => 1,
        'email' => 'info@lacunastories.com',
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => '6385ab88-d29f-457e-94cc-bf5e726cd4e5',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'your_email_address',
        'name' => 'Your E-mail Address',
        'type' => 'email',
        'value' => '%useremail',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => '6385ab88-d29f-457e-94cc-bf5e726cd4e5',
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'description_of_the_problem',
        'name' => 'Description of the Problem',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => '6385ab88-d29f-457e-94cc-bf5e726cd4e5',
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'browser_and_operating_system_information',
        'name' => 'Browser and Operating System Information',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'description' => 'Please identify the browser and operating system you are using',
          'title_display' => 'before',
          'private' => 0,
          'width' => 150,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => '6385ab88-d29f-457e-94cc-bf5e726cd4e5',
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'screenshot',
        'name' => 'Screenshot',
        'type' => 'file',
        'value' => '',
        'extra' => array(
          'description' => 'Please consider uploading a screenshot of the problem so that we can better identify it.',
          'scheme' => 'public',
          'title_display' => 'before',
          'private' => 0,
          'progress_indicator' => 'throbber',
          'filtering' => array(
            'size' => '2 MB',
            'types' => array(
              0 => 'gif',
              1 => 'jpg',
              2 => 'png',
            ),
            'addextensions' => '',
          ),
          'conditional_operator' => '=',
          'directory' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 3,
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:3:{s:7:"contact";i:1;s:27:"annotation_privacy_defaults";a:1:{i:8;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}}i:0;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-04-08 12:12:36 -0700',
);
  return $nodes;
}
