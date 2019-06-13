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

    $ git clone https://github.com/angelrove/membrillo-laradock.git
    $ cd membrillo-laradock/
    $ . run.sh
    $ docker exec -it membrillo-laradock_workspace_1 bash

### Folders width write permision

    $ mkdir _uploads _logs public/_cache

    Symlink point to uploads folder:
        $ ln -sf /var/www/_uploads/ public/uploads

### Nginx rules

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

### Develop (local): Config file

    - $ cp config_host_local.sample.php config_host.php
    - $ nano config_host.php (to set database params)

### Production: Config file

    - $ cp config_host_prod.sample.php config_host.php
    - $ nano config_host.php (to set database params)

### Database

    Database dump:
        In "DBSchema" folder

## Magic

    cd public
    php magic --newsecc [Newsecc]
