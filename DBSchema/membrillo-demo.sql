-- --------------------------------------------------------
-- Host:                         localhost
-- Server version:               10.1.20-MariaDB - mariadb.org binary distribution
-- Server OS:                    Win64
-- HeidiSQL Version:             9.4.0.5125
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


-- Dumping database structure for membrillo-demo
CREATE DATABASE IF NOT EXISTS `membrillo-demo` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `membrillo-demo`;

-- Dumping structure for table membrillo-demo.categories
CREATE TABLE IF NOT EXISTS `categories` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_padre` int(10) unsigned NOT NULL DEFAULT '0',
  `nombre` varchar(100) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `index_idPadre` (`id_padre`),
  KEY `index_idNombre` (`nombre`)
) ENGINE=MyISAM AUTO_INCREMENT=124 DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.categories: 7 rows
/*!40000 ALTER TABLE `categories` DISABLE KEYS */;
INSERT INTO `categories` (`id`, `id_padre`, `nombre`) VALUES
	(112, 0, 'Categoría 3'),
	(96, 95, 'aaa1'),
	(101, 0, 'Cat 1'),
	(123, 112, 'asdasd'),
	(97, 96, 'aaa2'),
	(121, 105, 'wwwwwww'),
	(105, 101, 'Sub cat 44');
/*!40000 ALTER TABLE `categories` ENABLE KEYS */;

-- Dumping structure for table membrillo-demo.categories_articles
CREATE TABLE IF NOT EXISTS `categories_articles` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_categoria` int(10) unsigned NOT NULL DEFAULT '0',
  `nombre` varchar(100) NOT NULL DEFAULT '',
  PRIMARY KEY (`id`),
  KEY `id_categoria` (`id_categoria`)
) ENGINE=MyISAM AUTO_INCREMENT=30 DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.categories_articles: 1 rows
/*!40000 ALTER TABLE `categories_articles` DISABLE KEYS */;
INSERT INTO `categories_articles` (`id`, `id_categoria`, `nombre`) VALUES
	(10, 24, 'qqq');
/*!40000 ALTER TABLE `categories_articles` ENABLE KEYS */;

-- Dumping structure for table membrillo-demo.components
CREATE TABLE IF NOT EXISTS `components` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `fecha_auto` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `fecha_libre` date DEFAULT '0000-00-00',
  `nombre` varchar(200) NOT NULL COMMENT 'title=Nombre',
  `description` text,
  `file_1` varchar(200) NOT NULL DEFAULT '0' COMMENT 'type=file',
  `file_2` varchar(200) DEFAULT NULL COMMENT 'type=file',
  `op_1` tinyint(1) DEFAULT '0',
  `op_2` tinyint(1) DEFAULT '0',
  `op_3` tinyint(1) DEFAULT '0',
  `enum_options` enum('caso1','caso2','caso3','caso4') NOT NULL DEFAULT 'caso1',
  `id_category` int(10) unsigned DEFAULT '0',
  `id_article` int(10) unsigned DEFAULT '0',
  `color1` varchar(10) DEFAULT '',
  `color2` varchar(10) DEFAULT '',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=87 DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.components: 5 rows
/*!40000 ALTER TABLE `components` DISABLE KEYS */;
INSERT INTO `components` (`id`, `fecha_auto`, `fecha_libre`, `nombre`, `description`, `file_1`, `file_2`, `op_1`, `op_2`, `op_3`, `enum_options`, `id_category`, `id_article`, `color1`, `color2`) VALUES
	(1, '2010-01-15 00:00:00', '2010-01-21', 'sample row 3', '<p>xxx qqq cccxxasd</p>', 'libs_controles_file_archivo_33_1439757223.JPG#libs_usuarios_file_prueba_36_1306419450..JPG#16/08/15 22:33#3813#image/jpeg#files_2', 'components_file_2_33_1449341490.JPG#libs_usuarios_file_prueba_36_1306419450..JPG#05/12/15 19:51#3813#image/jpeg#files_2', 0, 1, 1, 'caso2', 3, 24, '#003333', '#3399FF'),
	(34, '0000-00-00 00:00:00', '0000-00-00', 'sample row 4', '', 'libs_controles_file_archivo_34_1439757233.JPG#libs_usuarios_file_prueba_36_1306419450..JPG#16/08/15 22:33#3813#image/jpeg#files_2', 'libs_controles_file_archivo2_34_1439757174.JPG#libs_usuarios_file_prueba_36_1306419450..JPG#16/08/15 22:32#3813#image/jpeg#files_2', 0, 1, 1, 'caso2', 1, 4, '', ''),
	(54, '2008-05-07 00:00:00', '0000-00-00', 'sample row 1', NULL, 'libs_controles_file_archivo_54_1439757245.JPG#libs_usuarios_file_prueba_36_1306419450..JPG#16/08/15 22:34#3813#image/jpeg#files_2', '', 0, 0, 1, 'caso1', 1, 1, '', ''),
	(71, '2010-01-21 13:52:47', '2010-01-18', 'sample row 2', NULL, 'libs_controles_file_archivo_71_1439757297.JPG#libs_usuarios_file_prueba_36_1306419450..JPG#16/08/15 22:34#3813#image/jpeg#files_2', '', 0, 1, 1, 'caso1', 1, 4, '#006633', '#CC3366'),
	(86, '2017-02-01 19:53:32', '0000-00-00', 'qqqqqqqq', NULL, '0', NULL, 0, 0, 0, 'caso1', 0, 0, '', '');
/*!40000 ALTER TABLE `components` ENABLE KEYS */;

-- Dumping structure for table membrillo-demo.sys_app_messages
CREATE TABLE IF NOT EXISTS `sys_app_messages` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `fecha` timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  `id_user` int(10) unsigned DEFAULT NULL,
  `tag` varchar(100) DEFAULT NULL,
  `msg` varchar(250) DEFAULT NULL,
  `resolved` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `index_idUsuario` (`id_user`),
  KEY `index_tag` (`tag`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.sys_app_messages: 0 rows
/*!40000 ALTER TABLE `sys_app_messages` DISABLE KEYS */;
/*!40000 ALTER TABLE `sys_app_messages` ENABLE KEYS */;

-- Dumping structure for table membrillo-demo.sys_log_updates
CREATE TABLE IF NOT EXISTS `sys_log_updates` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `fecha` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `user_login` varchar(40) NOT NULL,
  `ip` varchar(15) NOT NULL,
  `user_agent` varchar(250) NOT NULL,
  `origen` varchar(150) NOT NULL,
  `sqlQ` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=171 DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.sys_log_updates: 11 rows
/*!40000 ALTER TABLE `sys_log_updates` DISABLE KEYS */;
INSERT INTO `sys_log_updates` (`id`, `fecha`, `user_login`, `ip`, `user_agent`, `origen`, `sqlQ`) VALUES
	(160, '2015-12-10 00:22:38', 'administrador', '127.0.0.1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.73 Safari/537.36', '/cases/form-update/?CONTROL=simple&EVENT=editUpdate&ROW_ID=1', 'UPDATE components \nSET  \n description=\'<p>xxx qqq cccxxasd</p>\' \nWHERE id=\'1\''),
	(161, '2016-12-16 22:43:34', 'administrador', '127.0.0.1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=71', 'UPDATE components \nSET  \n `nombre`=\'sample row 2\' \nWHERE id=\'71\''),
	(162, '2016-12-16 22:43:56', 'administrador', '127.0.0.1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=71', 'UPDATE components \nSET  \n `nombre`=\'sample row 2\' \nWHERE id=\'71\''),
	(163, '2016-12-16 22:44:59', 'administrador', '127.0.0.1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=54', 'UPDATE components \nSET  \n `nombre`=\'sample row 1x\' \nWHERE id=\'54\''),
	(164, '2016-12-16 22:45:06', 'administrador', '127.0.0.1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=54', 'UPDATE components \nSET  \n `nombre`=\'sample row 1\' \nWHERE id=\'54\''),
	(165, '2017-02-01 19:53:50', 'administrador', '::1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=54', 'UPDATE components \nSET  \n `nombre`=\'sample row 1\' \nWHERE id=\'54\''),
	(166, '2017-02-01 20:02:12', 'administrador', '::1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=86', 'UPDATE components \nSET  \n `nombre`=\'asdasd\' \nWHERE id=\'86\''),
	(167, '2017-02-01 20:02:17', 'administrador', '::1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=86', 'UPDATE components \nSET  \n `nombre`=\'qqqqqqqq\' \nWHERE id=\'86\''),
	(168, '2017-02-01 20:02:25', 'administrador', '::1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/cases/wlist/?CONTROL=simple&EVENT=form_update&ROW_ID=86', 'UPDATE components \nSET  \n `nombre`=\'qqqqqqqq\' \nWHERE id=\'86\''),
	(169, '2017-02-01 20:03:51', 'administrador', '::1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/basic-section/?CONTROL=sample&EVENT=form_update&ROW_ID=2', 'UPDATE sys_users \nSET  \n `passwd`=\'adm2\',\n `name`=\'Otherssssss\' \nWHERE id=\'2\''),
	(170, '2017-02-01 20:04:10', 'administrador', '::1', 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36', '/basic-section/?CONTROL=sample&EVENT=form_update&ROW_ID=2', 'UPDATE sys_users \nSET  \n `passwd`=\'adm2\',\n `name`=\'Otherssssss\' \nWHERE id=\'2\'');
/*!40000 ALTER TABLE `sys_log_updates` ENABLE KEYS */;

-- Dumping structure for table membrillo-demo.sys_users
CREATE TABLE IF NOT EXISTS `sys_users` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `fecha` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `login` varchar(100) NOT NULL COMMENT 'title=Login',
  `passwd` varchar(100) NOT NULL,
  `name` varchar(110) NOT NULL,
  `file_photo` varchar(300) DEFAULT NULL COMMENT 'type=file',
  PRIMARY KEY (`id`),
  UNIQUE KEY `index_login` (`login`)
) ENGINE=MyISAM AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.sys_users: 2 rows
/*!40000 ALTER TABLE `sys_users` DISABLE KEYS */;
INSERT INTO `sys_users` (`id`, `fecha`, `login`, `passwd`, `name`, `file_photo`) VALUES
	(1, '2015-12-05 14:02:27', 'administrador', 'adm1', 'Administrador', NULL),
	(2, '2015-12-05 14:02:27', 'other', 'adm2', 'Otherssssss', NULL);
/*!40000 ALTER TABLE `sys_users` ENABLE KEYS */;

-- Dumping structure for table membrillo-demo.tree
CREATE TABLE IF NOT EXISTS `tree` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_padre` int(10) unsigned NOT NULL DEFAULT '0',
  `nombre` varchar(100) NOT NULL,
  `nivel` enum('1','2','3') NOT NULL DEFAULT '1',
  PRIMARY KEY (`id`),
  KEY `index_idPadre` (`id_padre`),
  KEY `index_nombre` (`nombre`),
  KEY `index_nivel` (`nivel`)
) ENGINE=MyISAM AUTO_INCREMENT=421 DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.tree: 112 rows
/*!40000 ALTER TABLE `tree` DISABLE KEYS */;
INSERT INTO `tree` (`id`, `id_padre`, `nombre`, `nivel`) VALUES
	(6, 1, 'ReservaMesa', '2'),
	(7, 1, 'ReservaHotel', '2'),
	(8, 4, 'Guías nacionales', '2'),
	(9, 4, '11882', '2'),
	(12, 1, 'TurismoRural', '2'),
	(13, 3, 'Diarios Nacionales (top 10)', '2'),
	(14, 5, 'Baile-Retro', '2'),
	(15, 6, 'reservamesa.com', '3'),
	(16, 6, 'reservamesa.travel', '3'),
	(17, 6, 'reservarestaurantes.com', '3'),
	(20, 7, 'reservahoteles.travel', '3'),
	(21, 7, 'topbooking.es', '3'),
	(25, 12, 'turismorural.ru', '3'),
	(26, 12, 'gitesruraux.ch', '3'),
	(27, 12, 'edirural.com', '3'),
	(28, 7, 'hoteles.lu', '3'),
	(29, 7, 'viajesreligiosos.com', '3'),
	(30, 7, 'reservahoteles.com', '3'),
	(124, 13, 'noticiasdemalaga.es', '3'),
	(127, 13, 'diariobilbao.com', '3'),
	(129, 13, 'diariovalencia.eu', '3'),
	(130, 13, 'diariobarcelona.com', '3'),
	(132, 13, 'diariotenerife.com', '3'),
	(133, 119, 'revistadelaenergia.es', '3'),
	(32, 82, 'Turismo Rural 2010 ( finalizado )', '3'),
	(1, 0, 'Edi-Turismo y Ocio', '1'),
	(3, 0, 'Edi-Multimedia', '1'),
	(4, 0, 'Edi-Directorios', '1'),
	(5, 0, 'Edi-Eventos', '1'),
	(37, 8, 'restaurantes.guiasamarillas.es', '3'),
	(41, 4, 'Guía de Ayuntamientos', '2'),
	(44, 41, 'guiadeayuntamientos.info', '3'),
	(45, 9, 'guias11882.com', '3'),
	(46, 8, 'guiasamarillas.es', '3'),
	(47, 9, '11882.es', '3'),
	(50, 14, 'baileretro.com', '3'),
	(53, 5, 'Expo Energías Renovables', '1'),
	(136, 3, 'Diarios Locales(pendientes mover)', '1'),
	(137, 136, 'ANDALUCIA', '3'),
	(138, 417, 'www.diarioandalucia.com', '1'),
	(139, 417, 'www.diarioantequera.com', '1'),
	(140, 417, 'www.diarioarchidona.com', '1'),
	(141, 417, 'www.diariobenalmadena.com', '3'),
	(151, 78, 'Prueba', '1'),
	(57, 7, 'reservahoteles.travel.fr', '3'),
	(58, 6, 'radiogourmet.es', '3'),
	(63, 12, 'edicosmarural.com', '3'),
	(74, 0, 'Test', '1'),
	(75, 74, 'Canal 1', '1'),
	(76, 77, 'Soporte 1', '3'),
	(77, 74, 'Canal 2', '2'),
	(78, 75, 'Soporte 2', '3'),
	(134, 122, 'lavoixdeparis.fr', '3'),
	(82, 3, 'Boletines', '1'),
	(84, 82, 'Los mejores quesos de España (en curso)', '3'),
	(85, 82, 'Instaladores de Energías', '3'),
	(88, 82, 'Boletín Artístico 2009-2010 (enviado)', '3'),
	(90, 82, 'Fitur 2010. Hostelería(enviado)', '3'),
	(92, 82, 'Especial Turismo Rural 2010(enviado)', '3'),
	(94, 82, 'Proveedores de Hostelería(enviado)', '3'),
	(97, 82, 'Instaladores Autorizados de Energías Renovables Andalucía (en curso)', '3'),
	(99, 82, 'Feria de Abril (en curso)', '3'),
	(100, 82, 'Campings 2010 (en curso)', '3'),
	(104, 82, 'Los mejores Asadores 2010(en proyecto)', '3'),
	(106, 3, 'Boletines Fr.', '1'),
	(107, 106, 'Sports D´hivers(enviado)', '3'),
	(108, 106, 'Festival de Cannes(publicado)', '3'),
	(109, 82, 'Especial Energías Renovables (caducado)', '3'),
	(110, 82, 'Especial Jardinería y Construcción (caducado).', '3'),
	(112, 82, 'Hostales Fitur (caducado)', '3'),
	(119, 3, 'Diarios Temáticos', '2'),
	(121, 3, 'Radio Digital', '1'),
	(122, 3, 'Diarios Interancionales', '1'),
	(227, 122, 'bruxellesmagazine.com', '3'),
	(228, 122, 'canadapress.info', '3'),
	(270, 119, 'SUB-guiasamarillas', '3'),
	(271, 270, 'deportes.guiasamarillas.es', '1'),
	(272, 270, 'noticias.guiasamarillas.es', '1'),
	(273, 270, 'motor.guiasamarillas.es', '1'),
	(274, 270, 'tecnologia.guiasamarillas.es', '1'),
	(281, 119, 'SUB-diariomarbella.com', '3'),
	(282, 281, 'golf.diariomarbella.com', '1'),
	(283, 281, 'cirugia.diariomarbella.com', '1'),
	(284, 119, 'diariocostadelsol.com', '3'),
	(285, 119, 'SUB-diariomadrid.eu', '3'),
	(286, 285, 'feriasturisticas.diariomadrid.eu', '1'),
	(287, 285, 'reservavuelo.diariomadrid.eu', '1'),
	(289, 119, 'turismo.welcometospain.net', '3'),
	(292, 119, 'motor.edicosma.com', '3'),
	(293, 285, 'ocio.diariomadrid.eu', '1'),
	(295, 119, 'diariocine.com', '3'),
	(297, 119, 'caixaandalucia.com', '3'),
	(300, 285, 'empresariosdelsur.diariomadrid.eu', '1'),
	(301, 119, 'hipicapress.com', '3'),
	(302, 119, 'revistadealimentacion.com', '3'),
	(303, 119, 'revistadelhogar.com', '3'),
	(305, 119, 'supersalud.com', '3'),
	(306, 119, 'torredonjimenoliterario.diariotorredonjimeno.com', '3'),
	(320, 136, 'ASTURIAS', '3'),
	(343, 136, 'COMUNIDAD VALENCIANA', '3'),
	(355, 136, 'ARAGÓN', '3'),
	(380, 121, 'canarias.fm', '3'),
	(382, 121, 'malaga.fm', '3'),
	(383, 121, 'radiobaleares.es', '3'),
	(388, 121, 'radioinversiones.com', '3'),
	(397, 121, 'radioandalucia.es', '3'),
	(398, 121, 'radiodeportes.es', '3'),
	(400, 121, 'santander.fm', '3'),
	(402, 121, 'zaragoza.fm', '3'),
	(404, 121, 'jaen.fm', '3'),
	(405, 121, 'radiotoledo.es', '3'),
	(417, 3, 'Todos los Diarios', '1');
/*!40000 ALTER TABLE `tree` ENABLE KEYS */;

-- Dumping structure for table membrillo-demo.tree_elements
CREATE TABLE IF NOT EXISTS `tree_elements` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_category` int(10) unsigned NOT NULL,
  `nombre` varchar(100) NOT NULL,
  `ref` varchar(10) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `id_category` (`id_category`)
) ENGINE=MyISAM AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

-- Dumping data for table membrillo-demo.tree_elements: 2 rows
/*!40000 ALTER TABLE `tree_elements` DISABLE KEYS */;
INSERT INTO `tree_elements` (`id`, `id_category`, `nombre`, `ref`) VALUES
	(1, 0, 'asasas', ''),
	(2, 0, 'caracola', '');
/*!40000 ALTER TABLE `tree_elements` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
