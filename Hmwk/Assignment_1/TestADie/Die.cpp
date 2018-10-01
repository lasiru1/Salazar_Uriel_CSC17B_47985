/*
@file:      Die.cpp
@author:    Uriel Salazar
@date:      September 23, 2018
@section:   47985
@brief:     Implementation
*/

//System Libraries
#include <sstream>
using namespace std;

//User Libraries
#include "Die.h"

Die::Die(int number)
{
    if(number>=MINFACE&&number<MAXFACE){
        this->number=number;
        setName();
        setPict();
    }else{
        this->number=-1;
        this->name="none";
        this->picture="none";
    }
}


void Die::setName()
{
    switch(this->number%7)
    {
        case 0:  this->name="one";  break;
        case 1:  this->name="two";  break;
        case 2:  this->name="three";break;
        case 3:  this->name="four"; break;
        case 4:  this->name="five"; break;
        case 5:  this->name="six";  break;
        default: this->name="Bad Value";
    }
}

            
void Die::setPict()
{
    this->picture="dice/"+this->name+".png";
}
   
string Die::toString()
{
    ostringstream convNum;
    convNum  << this->number;
    string str="\n";
    str+=("<img src="+this->picture+" />");
    str+=("\nNumber = "+convNum.str());
    str+=("\nName = " +this->name);
    str+=("\n \n");
    return str;
}