#!/usr/bin/env bash

read -p "This will create local settings files, are you sure you want to proceed?" -n 1 -r
echo ""
if [[ $REPLY =~ ^[Yy]$ ]]
then

  if [ ! -f ./build/sites/default/settings.local.php ]; then
    echo "Creating ./build/sites/default/settings.local.php"
    printf "<?php\n/**\n * @file\n * Local development settings.\n */\n\n\$conf['preprocess_css'] = 0;\n\$conf['preprocess_js'] = 0;\n\n\$databases = array(\n  'default' => array(\n    'default' => array(\n      'database' => 'drupal',\n      'username' => 'drupal',\n      'password' => 'drupal',\n      'host' => 'localhost',\n      'driver' => 'mysql',\n    ),\n  ),\n);\n\n\$drupal_hash_salt = '';\n" > build/sites/default/settings.local.php
  fi
fi
echo "Complete.";
