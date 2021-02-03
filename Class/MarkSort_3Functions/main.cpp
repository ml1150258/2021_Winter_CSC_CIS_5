/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2021, 11:00 AM
 * Purpose:  Mark Sort
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
void swap1(int &,int &);
void swap2(int &,int &);
void smlst(int [],int,int);
void markSrt(int [],int);

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
    markSrt(array,SIZE);
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void markSrt(int array[],int SIZE){
    for(int i=0;i<SIZE-1;i++){
        smlst(array,SIZE,i);
    }
}

void smlst(int array[],int SIZE,int pos){
    for(int i=pos+1;i<SIZE;i++){
        if(array[pos]>array[i])
            swap(array[pos],array[i]);
    }
}

void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
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