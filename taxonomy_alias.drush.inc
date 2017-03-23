<?php




function taxonomy_alias_drush_command() {
  $items = [];

  $items['taxonomy-alias-backfill'] = array(
    'description' => dt('backfill all of the taxonomy alias column entries with url-safe versions of the name column'),
    'callback' => "taxonomy_alias_backfill",
    'aliases' => array('tab'),
  );

  return $items;
}