
CREATE TABLE `sys_log_updates` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `date_insert` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `user_login` varchar(40) NOT NULL,
  `ip` varchar(15) NOT NULL,
  `user_agent` varchar(250) NOT NULL,
  `origen` varchar(150) NOT NULL,
  `sqlQ` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

CREATE TABLE `sys_messages` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `date_insert` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `id_user` int(10) unsigned DEFAULT NULL,
  `tag` varchar(100) DEFAULT NULL,
  `msg` varchar(250) DEFAULT NULL,
  `resolved` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `index_idUsuario` (`id_user`),
  KEY `index_tag` (`tag`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

CREATE TABLE `users` (
  `id` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `created_at` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `deleted_at` TIMESTAMP NULL DEFAULT NULL,
  `login` VARCHAR(100) NOT NULL COMMENT 'title=Login',
  `passwd` VARCHAR(100) NOT NULL,
  `name` VARCHAR(110) NOT NULL,
  `deleted` TINYINT(3) UNSIGNED NOT NULL DEFAULT '0',
  `file_photo` VARCHAR(300) NULL DEFAULT NULL COMMENT 'type=file',
  `profile` ENUM('root','basic','admin') NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE INDEX `index_login` (`login`)
)
COLLATE='utf8_general_ci';

INSERT INTO `users` (`id`, `login`, `passwd`, `name`) VALUES
  (1, 'root', 'secret', 'Admin'),
  (2, 'other', 'other', 'Other');
