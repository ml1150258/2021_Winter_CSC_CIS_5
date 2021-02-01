/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  Linear Search
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
bool linSrch(int [],int,int,int &);

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
    itoFnd=rand()%90+10;//Randomly choose a number to find
    
    //Map Inputs to Outputs -> Process
    if(linSrch(array,SIZE,itoFnd,where)){
        cout<<"Value "<<itoFnd<<" found at index "<<where<<endl;
    }else{
        cout<<"Value "<<itoFnd<<" not found"<<endl;
    }
    
    //Display Inputs/Outputs
    prntAry(array,SIZE,10);
    
    //Exit the Program - Cleanup
    return 0;
}

bool linSrch(int a[],int n,int val,int &indx){
    indx=-1;  //Index value if not found
    for(int i=0;i<n;i++){
        if(a[i]==val){
            indx=i;
            return true;
        }
    }
    return false;
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