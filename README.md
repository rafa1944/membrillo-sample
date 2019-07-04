# membrillo-sample

    Basic proyect developed with membrillo

## Install

    Add to hosts file:
     127.0.0.1 app.local

### Clone repo

    $ git clone https://github.com/angelrove/membrillo-sample.git
    $ cd membrillo-sample
    $ composer install

## Run width Docker

    $ cd membrillo-laradock/
    $ . run.sh
    $ docker exec -it membrillo-laradock_workspace_1 bash

### Folders width write permision

    $ mkdir _uploads _logs public/_cache

    Symlink point to uploads folder:
        $ ln -sf /var/www/_uploads/ public/uploads

### Config file

    ./config/app.php

### Production config

    - $ cp ./config/app_prod.sample.php ./config/app.php
    - Edit params: $ nano ./config/app.php

### Database

    Database dump: in "DBSchema" folder

### Production: Nginx rules

    location / {
        # try_files $uri $uri/ /index.php?$query_string;

        # Membrillo framework rules ---
        rewrite ^([^.]*[^/])$ $1/ permanent;
        rewrite "^/(.+)/crd/([^/]+)/([^/]+)/([^/]+)/$" /?secc=$1&CONTROL=$2&EVENT=$3&ROW_ID=$4&$query_string break;
        rewrite "^/(.+)/crd/([^/]+)/([^/]+)/$" /?secc=$1&CONTROL=$2&EVENT=$3&$query_string break;
        rewrite "^/(.+)/$" /?secc=$1&$query_string break;
        #--------------------
    }

    $ sudo service nginx reload

## Magic examples

    Create a new section:
       $ cd public
       $ php magic --newsecc [Newsecc]

