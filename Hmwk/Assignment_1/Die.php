<?php
/*
@file:      Die.php
@author:    Uriel Salazar
@date:      September 23, 2018
@section:   47985
@brief:     Implementation
*/

define('MAXFACES',6);
define('MINFACES',0);

class Die
{
        private $number;
        private $name;
        private $picture;
        
        private function setName()
        {
            switch($this->number%7){
                case 0:  $this->name="one";  break;
                case 1:  $this->name="two";  break;
                case 2:  $this->name="three";break;
                case 3:  $this->name="four"; break;
                case 4:  $this->name="five"; break;
                case 5:  $this->name="six";  break;
                default: $this->name="Bad Value";
            }
        }
        
        private function setPict()
        {
            $this->picture="dice/".$this->name.".png";
        }

        public function Die($number)
        {
            if($number>=MINFACES&&$number<MAXFACES)
            {
                $this->number=$number;
                $this->setName();
                $this->setPict();
            }
            else
            {
                $this->number=-1;
                $this->name="none";
                $this->picture="none";
            }
        }
        
        public function getNumr(){return $this->number;}
        public function getName(){return $this->name;}
        public function getPict(){return $this->picture;}
        
        public function toString()
        {
            echo "<img src=".$this->picture." />";
            echo "<br/>Number = ".$this->number;
            echo "<br/>Name = ".$this->name;
            echo "<br/><br/>";
        }
}
?>