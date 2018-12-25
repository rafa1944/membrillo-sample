# membrillo-sample
    Basic proyect developed with membrillo


## Install

### Clone repo
    $ git clone https://github.com/angelrove/membrillo-sample.git
    $ cd membrillo-sample

### Folders width write permision

    $ mkdir _uploads _logs public/_cache

### Docker

    $ git clone https://github.com/angelrove/membrillo-laradock.git

    $ cd membrillo-laradock/
    $ . run.sh

### Symlink point to uploads folder

       $ cd membrillo-laradock
       $ docker exec -it laradock_workspace_1 bash
       $ ln -sf /var/www/public/_uploads/ public/uploads

### Composer
    $ composer install

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
