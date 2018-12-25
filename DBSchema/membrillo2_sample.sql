
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
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `date_insert` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `login` varchar(100) NOT NULL COMMENT 'title=Login',
  `passwd` varchar(100) NOT NULL,
  `name` varchar(110) NOT NULL,
  `deleted` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `file_photo` varchar(300) DEFAULT NULL COMMENT 'type=file',
  PRIMARY KEY (`id`),
  UNIQUE KEY `index_login` (`login`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

INSERT INTO `users` (`id`, `login`, `passwd`, `name`) VALUES
  (1, 'root', 'secret', 'Admin'),
  (2, 'other', 'other', 'Other');
