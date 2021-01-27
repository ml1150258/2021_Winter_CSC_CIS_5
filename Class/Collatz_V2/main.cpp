/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int startSeq;
    
    //Initialize Variables
    cout<<"Input the start of the sequence"<<endl;
    cin>>startSeq;
    
    //Map Inputs to Outputs -> Process
    cout<<startSeq<<",";
    do{
        if(startSeq%2){
            int times2=startSeq<<1;
            startSeq=times2+startSeq+1;
        }else{
            startSeq>>=1;
        }
        cout<<startSeq;
        if(startSeq!=1)cout<<",";
    }while(startSeq>1);
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}