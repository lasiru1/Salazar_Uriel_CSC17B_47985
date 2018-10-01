/*
@file:      Die.h
@author:    Uriel Salazar
@date:      September 23, 2018
@section:   47985
@brief:     Header
*/

#ifndef DIE_H
#define DIE_H

#include <string>
using namespace std;

class Die
{
    private:
        static const int MAXFACE=6;
        static const int MINFACE=0;
        int    number;
        string name;
        string picture;
        void   setName();
        void   setPict();
    public:
        Die(int);
        int    getNumr(){return number;}
        string getName(){return name;}
        string getPict(){return picture;}
        string toString();
};

#endif /* DIE_H */

