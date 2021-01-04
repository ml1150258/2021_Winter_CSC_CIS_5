/* 
 * File:   main.cpp 
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  To show computers can't add/subtract
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
    short a,b,c;
    
    //Initialize Variables
    a=30000;
    b=4000;
    
    //Map Inputs to Outputs -> Process
    c=a+b;
    
    //Display Inputs/Outputs
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}