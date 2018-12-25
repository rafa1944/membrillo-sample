# membrillo-sample
    Basic proyect developed with membrillo


## Install

### Clone repo
    $ git clone https://github.com/angelrove/membrillo-sample.git
    $ cd membrillo-sample

### Composer
    $ composer install

### Folders where app write

    $ mkdir _uploads _logs public/_cache

    Symlink point to uploads folder:
       $ ln -sf /var/www/[proyect_folder]/_uploads/ public/uploads

### Docker

    $ git clone https://github.com/angelrove/membrillo-laradock.git

    # Nginx Membrillo rules -------
    location / {
         # try_files $uri $uri/ /index.php$is_args$args;

         rewrite ^([^.]*[^/])$ $1/ permanent;
         rewrite "^/(.+)/crd/([^/]+)/([^/]+)/([^/]+)/$" /?secc=$1&CONTROL=$2&EVENT=$3&ROW_ID=$4&$query_string break;
         rewrite "^/(.+)/crd/([^/]+)/([^/]+)/$"         /?secc=$1&CONTROL=$2&EVENT=$3&$query_string break;
         rewrite "^/(.+)/$" /?secc=$1&$query_string break;
    }
    #-------------------------

### Production: Config files

    $ cp config_host_prod.php config_host.php

    Edit config_host.php:
      Set database params

### Config files

    Edit: config_host.php

### Database

    Database dumps:
        ./DBSchema/create-xxx.sql
        ./DBSchema/data-xxx.sql

## Run width Docker

    $ cd membrillo-laradock/
    $ . run.sh
