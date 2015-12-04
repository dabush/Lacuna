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
  'uid' => 4,
  'title' => 'Report a Bug',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '9b87f5f7-6f92-4f9b-b4c8-7193148bf8b9',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1449001948,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '766e5c55-ce12-4442-b34e-4e0647f8e652',
  'revision_uid' => 4,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>If you&#39;ve encountered a part of the site that isn&#39;t working like it seems it should, please let us know. Thanks for helping us make Lacuna Stories better.</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>If you\'ve encountered a part of the site that isn\'t working like it seems it should, please let us know. Thanks for helping us make Lacuna Stories better.</p>
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
    'nid' => '766e5c55-ce12-4442-b34e-4e0647f8e652',
    'confirmation' => '<p>Thanks for your report!</p>',
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
        'nid' => 3394,
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
        'nid' => '766e5c55-ce12-4442-b34e-4e0647f8e652',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'your_e_mail_address',
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
        'mandatory' => 0,
        'weight' => 0,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => '766e5c55-ce12-4442-b34e-4e0647f8e652',
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'description_of_the_problem',
        'name' => 'Description of the Problem',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Please add a short description of the problem you\'ve encountered, where on the site you encountered it, and any steps you took that led to this error, so we can reproduce it.',
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => '766e5c55-ce12-4442-b34e-4e0647f8e652',
        'cid' => 2,
        'pid' => 0,
        'form_key' => 'browser_and_operating_system_information',
        'name' => 'Browser and Operating System Information',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Please include your browser and operating system versions so that we can help pinpoint the problem.',
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => '766e5c55-ce12-4442-b34e-4e0647f8e652',
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'screenshot',
        'name' => 'Screenshot',
        'type' => 'file',
        'value' => '',
        'extra' => array(
          'description' => 'Please consider uploading a screenshot of the error.',
          'scheme' => 'public',
          'title_display' => 'before',
          'private' => 0,
          'progress_indicator' => 'throbber',
          'filtering' => array(
            'size' => '1 MB',
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
  'last_comment_uid' => 4,
  'comment_count' => 0,
  'name' => 'dabush@stanford.edu',
  'picture' => 101,
  'data' => 'a:28:{s:7:"contact";i:1;s:19:"biblio_show_profile";i:0;s:19:"biblio_my_pubs_menu";i:0;s:21:"biblio_contributor_id";s:1:"0";s:22:"biblio_id_change_count";s:1:"0";s:17:"biblio_user_style";s:6:"system";s:18:"biblio_baseopenurl";s:0:"";s:18:"biblio_openurl_sid";s:0:"";s:19:"biblio_crossref_pid";s:0:"";s:14:"current-course";s:1:"5";s:27:"annotation_privacy_defaults";a:1:{i:3383;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}}i:0;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:1;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:2;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:3;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:4;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:5;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:6;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:7;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:0;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:8;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:0;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:9;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:10;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:11;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:12;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:13;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:14;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:15;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}i:16;a:2:{s:8:"audience";a:4:{s:7:"private";i:0;s:10:"instructor";i:0;s:11:"peer-groups";i:0;s:8:"everyone";i:1;}s:6:"groups";a:1:{s:11:"peer_groups";a:0:{}}}}',
  'pathauto_perform_alias' => FALSE,
  'date' => '2015-12-01 12:32:28 -0800',
);
  return $nodes;
}
