<?php
/**
 * <img src="index_ajax.php?secc=_scripts&service=get_th&w=200&image=<?=$image?>"/>
 */
use angelrove\utils\Images\ImageTransform;

global $CONFIG_APP;

ImageTransform::resizeOnFly($CONFIG_APP['path_uploads'], $_GET['image'], $_GET['w']);
