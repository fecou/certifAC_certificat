<?php
/**
 * @file
 * certificat.features.inc
 */

/**
 * Implements hook_node_info().
 */
function certificat_node_info() {
  $items = array(
    'certificat' => array(
      'name' => t('Certificat'),
      'base' => 'node_content',
      'description' => t('Pour rentrer des certificats (infos de base et pdf) dans la base de données'),
      'has_title' => '1',
      'title_label' => t('titre indicatif'),
      'help' => t('Le titre est affiché dans la liste des certificats pour l\'édition ou la suppression, mais ne sera pas considéré lors de l\'affichage '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
