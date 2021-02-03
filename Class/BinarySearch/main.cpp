/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2021, 10:50 AM
 * Purpose:  Binary Search
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
bool binSrch(int [],int,int,int &);
void markSrt(int [],int);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;//Size of the Array
    int array[SIZE];   //Array
    int itoFnd;        //Value to find in the array
    int where;         //Where the value is located in the array
    
    //Initialize Variables
    fillAry(array,SIZE);
    markSrt(array,SIZE);
    itoFnd=rand()%90+10;//Randomly choose a number to find
    
    //Map Inputs to Outputs -> Process
    if(binSrch(array,SIZE,itoFnd,where)){
        cout<<"Value "<<itoFnd<<" found at index "<<where<<endl;
    }else{
        cout<<"Value "<<itoFnd<<" not found"<<endl;
    }
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    
    //Exit the Program - Cleanup
    return 0;
}

bool binSrch(int a[],int n,int val,int &midPnt){
    //Initialize the Range to search
    int low=0,high=a[n-1];
    
    //Loop until found
    do{
        midPnt=(high+low)/2;
        if(a[midPnt]==val){
            return true;
        }else if(a[midPnt]>val){
            high=midPnt-1;
        }else{
            low=midPnt+1;
        }
    }while(low<=high);
        
    return false;
}

void markSrt(int a[],int n){
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
        a[i]=rand()%90+10;//[10,99]
    }
}