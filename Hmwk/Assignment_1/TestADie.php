<!DOCTYPE html>
<!--
@file:      TestADie.php
@author:    Uriel Salazar
@date:      September 23, 2018
@section:   47985
@brief:     Driver for browser
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title>Play and Display a Dice Cup</title>
        <?php   include './Die.php';   ?>
    </head>
    <body>
        <?php
            //Test the Die by creating a cup then printing the result
            $nFaces=6;
            $cup=array();
            for($i=0;$i<$nFaces;$i++)
            {
                $cup[$i]=new Die($i);
                $cup[$i]->toString();
            }
        ?>
    </body>
</html>
