<?php
include_once 'vendor/autoload.php';

use Symfony\Component\Filesystem\Exception\IOExceptionInterface;
use Symfony\Component\Filesystem\Filesystem;

$filesystem = new Filesystem();

$loader = new \Twig\Loader\FilesystemLoader(__DIR__);
$twig = new \Twig\Environment($loader);

$css = require('config/css.php');
$js = require('config/js.php');


try {
    $filesystem->dumpFile('public_html/index.html',$twig->render('render.html', ['title' => 'This is a title']));
} catch (IOExceptionInterface $exception) {
    echo "An error occurred while creating your directory at ".$exception->getPath();
}

?>
