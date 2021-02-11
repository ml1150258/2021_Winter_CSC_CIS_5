/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 10th, 2021, 10:06 AM
 * Purpose:  Example of String Compare
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string.h>  //Library with String Compare
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char strNum[][10]={"1", "17", "1234",
                     "1111", "4567", "4589", "321",
                     "5", "62", "109",
                     "83", "77"};
    char strTest[]="5";
     
    //Map Inputs to Outputs -> Process
    cout<<"All Character Numbers < "<<strTest<<endl;
    for(int i=0;i<12;i++){
        if(strcmp(strNum[i],strTest)<0){
            cout<<strNum[i]<<endl;
        }
    }
    cout<<endl;
    
    cout<<"All Character Numbers > "<<strTest<<endl;
    for(int i=0;i<12;i++){
        if(strcmp(strNum[i],strTest)>0){
            cout<<strNum[i]<<endl;
        }
    }
    cout<<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}