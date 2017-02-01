<?
use angelrove\utils\Vendor;

//------------------------
// Basics -----
Vendor::conf('front-basics',
   '//cdnjs.cloudflare.com/ajax/libs/', array(
         'jquery/3.1.1/jquery.min.js',

         'font-awesome/4.7.0/css/font-awesome.min.css',

         'twitter-bootstrap/3.3.7/css/bootstrap.min.css',
         'twitter-bootstrap/3.3.7/js/bootstrap.min.js',
));

//-------------
Vendor::conf('jquery-ui', '//cdnjs.cloudflare.com/ajax/libs/jqueryui/1.12.1/', array(
   'jquery-ui.min.js',
   'themes/smoothness/jquery-ui.min.css',
));

Vendor::conf('jquery-easing', '//cdnjs.cloudflare.com/ajax/libs/jquery-easing/1.3/', array(
   'jquery.easing.min.js'
));

// LightBox ---
Vendor::conf('lightbox', '//cdnjs.cloudflare.com/ajax/libs/lightbox2/2.9.0/', array(
   'js/lightbox.min.js',
   'css/lightbox.min.css',
));

// Galery ----
Vendor::conf('isotope', '//cdnjs.cloudflare.com/ajax/libs/', array(
   'jquery.isotope/3.0.1/isotope.pkgd.min.js',
   'jquery.imagesloaded/4.1.0/imagesloaded.min.js'
));
