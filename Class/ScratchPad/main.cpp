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
    int decimal=1*2*2+1*2+1;
    int octal=0353;
    int hex=0x353;
    char binary=0b01000001;
    string str="Hello World";
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Decimal = "<<decimal<<endl;
    cout<<"Octal   = "<<octal<<endl;
    cout<<"hex     = "<<hex<<endl;
    cout<<"binary     = "<<binary<<endl;
     cout<<"binary     = "<<static_cast<int>(binary)<<endl;
     cout<<str<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}