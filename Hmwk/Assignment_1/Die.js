/*
@file:      Die.js
@author:    Uriel Salazar
@date:      September 23, 2018
@section:   47985
@brief:     Implementation
*/

//Constructor for the Die class
var MAXFACES=52;
var MINFACES=0;

function Die(number)
{
    //Public properties of the class
    if(number>=MINFACES&&number<MAXFACES)
    {
        this.number=number;
        this.setName();
        this.setPict();
    }
    else
    {
        this.number=-1;
        this.name="none";
        this.picture="none";
    }
}
//Determine the Face Name
Die.prototype.setName=function()
{
    switch(this.number%7)
    {
        case 0:  this.name="one";  break;
        case 1:  this.name="two";  break;
        case 2:  this.name="three";break;
        case 3:  this.name="four"; break;
        case 4:  this.name="five"; break;
        case 5:  this.name="six";  break;
        default: this.name="Bad Value";
    }
};

//Simply setting the picture
Die.prototype.setPict=function()
{
    this.picture="dice/"+this.name+".png";
};

//To String function of the Card Class
Die.prototype.toString=function()
{
    document.write("<img src="+this.picture+" />");
    document.write("<br/>Number = "+this.number);
    document.write("<br/>Name = "+this.name);
    document.write("<br/><br/>");
};