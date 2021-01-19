/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML=100.0f;//Conversion to Decimal from Percent

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float balance,//Savings Balance $'s
          intRate;//Interest Rate %
    int nYears,//Number of years to Save
        year,  //Year counter
        dYear; //Year date
    
    //Initialize Variables
    balance=100.0f;//Savings in $'s
    intRate=6;     //Yearly Interest Rate
    nYears=30;     //Number of years to save
    year=0;        //Initialize counter to 0
    dYear=2020;    //Initialize date year to now
    
    
    //Process or map Inputs to Outputs
    //Create the Heading for the Savings Account
    intRate/=CNVDCML;
    float interest=balance*intRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year  Balance Interest"<<endl;
    cout<<setw(4)<<year<<setw(6)<<dYear
            <<setw(9)<<balance<<setw(9)<<interest<<endl;
    
    //Loop for all years
    for(year++,dYear++;year<=nYears;year++,dYear++){
        balance*=(1+intRate);
        interest=balance*intRate;
        cout<<setw(4)<<year<<setw(6)<<dYear
            <<setw(9)<<balance<<setw(9)<<interest<<endl;
    }

    //Exit stage right!
    return 0;
}