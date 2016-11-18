<?php
/**
 * @file
 * lacuna_stories_peer_groups.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lacuna_stories_peer_groups_default_rules_configuration() {
  $items = array();
  $items['rules_add_user_to_peer_group_on_button_click'] = entity_import('rules_config', '{ "rules_add_user_to_peer_group_on_button_click" : {
      "LABEL" : "Add User to Peer Group on Button Click",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "button_field", "rules", "og" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_join_group"
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "entity" ],
            "type" : "node",
            "bundle" : { "value" : { "peer_group" : "peer_group" } }
          }
        }
      ],
      "DO" : [
        { "og_subcribe_user" : { "user" : [ "site:current-user" ], "group" : [ "entity" ] } },
        { "button_field_action_reload" : [] },
        { "drupal_message" : { "message" : "You have been added to [entity:title]" } }
      ]
    }
  }');
  $items['rules_remove_user_from_peer_group_on_button_click'] = entity_import('rules_config', '{ "rules_remove_user_from_peer_group_on_button_click" : {
      "LABEL" : "Remove User from Peer Group on Button Click",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "button_field", "rules", "og" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_leave_group"
          }
        },
        { "entity_is_of_bundle" : {
            "entity" : [ "entity" ],
            "type" : "node",
            "bundle" : { "value" : { "peer_group" : "peer_group" } }
          }
        }
      ],
      "DO" : [
        { "og_unsubscribe_user" : { "user" : [ "site:current-user" ], "group" : [ "entity" ] } },
        { "button_field_action_reload" : [] },
        { "drupal_message" : { "message" : "You have been removed from [entity:nid]" } }
      ]
    }
  }');
  return $items;
}
