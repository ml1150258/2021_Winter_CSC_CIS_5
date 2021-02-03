/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2021, 11:00 AM
 * Purpose:  Bubble Sort
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function
#include <ctime>     //Setting the Random Number Seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;//Size of the Array
    int array[SIZE];   //Array
    
    //Initialize Variables
    fillAry(array,SIZE);
    prntAry(array,SIZE,10);
    
    //Map Inputs to Outputs -> Process
    bublSrt(array,SIZE);
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void bublSrt(int a[],int n){
    bool swap;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){  //Loop to swap with first in List
            if(a[i]>a[i+1]){       //Put the smallest at top of List
                a[i]=a[i]^a[i+1];  //In place Swap
                a[i+1]=a[i]^a[i+1];  //In place Swap
                a[i]=a[i]^a[i+1];  //In place Swap
                swap=true;
            }
        }
    }while(swap);
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}