/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2021, 11:00 AM
 * Purpose:  Mark Sort Timing 1 function vs 3 function
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
void markSrt1(int [],int);
void markSrt3(int [],int);
void swap2(int &,int &);
void smlst(int [],int,int);
void aryCopy(int [],int [],int);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=120000;//Size of the Array
    int array[SIZE],brray[SIZE];   //Array
    
    //Initialize Variables
    fillAry(array,SIZE);
    aryCopy(brray,array,SIZE);
    //prntAry(array,SIZE,10);
    //prntAry(brray,SIZE,10);
    
    //Map Inputs to Outputs -> Process
    int beg1=time(0);
    markSrt1(array,SIZE);
    int end1=time(0);
    cout<<"Mark Sort 1 Function with Size = "<<SIZE<<endl;
    cout<<"Runtime = "<<end1-beg1<<" secs"<<endl<<endl;
    
    //Map Inputs to Outputs -> Process
    int beg3=time(0);
    markSrt3(brray,SIZE);
    int end3=time(0);
    cout<<"Mark Sort 3 Function with Size = "<<SIZE<<endl;
    cout<<"Runtime = "<<end3-beg3<<" secs"<<endl<<endl;
    
    int time1=end1-beg1;
    int time3=end3-beg3;
    int delta=time3-time1;
    cout<<"The difference in 3 vs 1 = "<<delta<<" secs"<<endl;
    cout<<"The percentage savings   = "<<100.0f*delta/time1<<"%"<<endl;
    
    
    //Display Inputs/Outputs
    //prntAry(array,SIZE,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void aryCopy(int b[],int a[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void markSrt3(int array[],int SIZE){
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


void markSrt1(int a[],int n){
    for(int i=0;i<n-1;i++){      //Loop for each position in List
        for(int j=i+1;j<n;j++){  //Loop to swap with first in List
            if(a[i]>a[j]){       //Put the smallest at top of List
                a[i]=a[i]^a[j];  //In place Swap
                a[j]=a[i]^a[j];  //In place Swap
                a[i]=a[i]^a[j];  //In place Swap
            }
        }
    }
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
        a[i]=rand();//[0,2^31-1]
    }
}