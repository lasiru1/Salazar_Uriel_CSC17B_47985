/*
@file:      main.cpp
@author:    Uriel Salazar
@date:      September 23, 2018
@section:   47985
@brief:     Driver; displays 6 sides of a die
*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Die.h"

//Global Constants (physics/mathematics/conversions)

//Function Prototypes
Die **filCup(int);                 //Fill a cup of die
int   *filIndx(int);                //Fill an index to the cup
void   prntCup(Die **,int *,int); //Print the cup with an index
void   shuffle(int *,int);          //Shuffle the cup

//Execution Begins Here
int main(int argc, char** argv)
{   
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int    nFaces=6;
    int  *index;
    Die **cup;
  
    //Initialize the data
    cup=filCup(nFaces);
    index=filIndx(nFaces);
    
    //Print the cup before randomization
    cout<<"Before a Cup Shake"<<endl;
    prntCup(cup,index,nFaces);
    
    //Shuffle the cup
    shuffle(index,nFaces);
    
    //Print the Deck after randomization
    cout<<"After a Cup Shake"<<endl;
    prntCup(cup,index,nFaces);
    
    //Clean up memory allocation
    for(int i=0;i<nFaces;i++){
        delete cup[i];
    }
    delete []cup;
    delete []index;

    //Exit program stage right
    return 0;
}

void   shuffle(int *indx,int n){
    for(int nMix=1;nMix<7;nMix++){
        for(int swap=0;swap<n;swap++){
            int rnSwp=rand()%n;
            int temp=indx[swap];
            indx[swap]=indx[rnSwp];
            indx[rnSwp]=temp;
        }
    } 
}

void   prntCup(Die **cup,int *indx,int n){
    for(int i=0;i<n;i++){
        cout<<cup[indx[i]]->toString();
    }
}

int   *filIndx(int n){
    int *indx=new int[n];
    for(int i=0;i<n;i++){
        indx[i]=i;
    }
    return indx;
}

Die **filCup(int n){
    Die **cup=new Die*[n];
    for(int i=0;i<n;i++){
        cup[i]=new Die(i);
    }
    return cup;
}
