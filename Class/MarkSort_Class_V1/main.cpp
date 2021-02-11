/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 9th, 2021, 10:30 AM
 * Purpose:  Mark Sort with a Class
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
    Array array;
    array.size=100;
    array.data=new int[array.size];
    
    //Initialize Variables
    fillAry(array);
    prntAry(array,10);
    
    //Map Inputs to Outputs -> Process
    markSrt(array);
    
    //Display Inputs/Outputs
    prntAry(array,10);
    
    //Deallocate memory
    delete [] array.data;
    
    //Exit the Program - Cleanup
    return 0;
}

void markSrt(Array &a){
    for(int i=0;i<a.size-1;i++){      //Loop for each position in List
        for(int j=i+1;j<a.size;j++){  //Loop to swap with first in List
            if(a.data[i]>a.data[j]){       //Put the smallest at top of List
                a.data[i]=a.data[i]^a.data[j];  //In place Swap
                a.data[j]=a.data[i]^a.data[j];  //In place Swap
                a.data[i]=a.data[i]^a.data[j];  //In place Swap
            }
        }
    }
}

void prntAry(Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(Array &a){
    for(int i=0;i<a.size;i++){
        a.data[i]=rand()%90+10;//[10,99]
    }
}