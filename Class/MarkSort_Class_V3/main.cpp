/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 9th, 2021, 10:30 AM
 * Purpose:  Mark Sort with a Structure
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function
#include <ctime>     //Setting the Random Number Seed
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
void fillAry(Array &);
void prntAry(Array &,int);
void markSrt(Array &);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    Array array(100);
    
    //Initialize Variables
    fillAry(array);
    prntAry(array,10);
    
    //Map Inputs to Outputs -> Process
    markSrt(array);
    
    //Display Inputs/Outputs
    prntAry(array,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void markSrt(Array &a){
    for(int i=0;i<a.getSize()-1;i++){      //Loop for each position in List
        for(int j=i+1;j<a.getSize();j++){  //Loop to swap with first in List
            if(a.getData(i)>a.getData(j)){       //Put the smallest at top of List
                a.setData(i,a.getData(i)^a.getData(j));
                a.setData(j,a.getData(i)^a.getData(j));
                a.setData(i,a.getData(i)^a.getData(j));
            }
        }
    }
}

void prntAry(Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.getSize();i++){
        cout<<a.getData(i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(Array &a){
    for(int i=0;i<a.getSize();i++){
        a.setData(i,rand()%90+10);//[10,99]
    }
}