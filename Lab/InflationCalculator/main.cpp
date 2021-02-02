/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Inflation Calculator
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
    float itmCost,//Item Cost $'s
          infRate;//Inflation Rate %
    int nYears,//Number of years to Save
        year,  //Year counter
        dYear; //Year date
    
    //Initialize Variables
    itmCost=0.19f; //Cost of a gallon of gas 1961 in $'s
    infRate=5;     //Yearly Inflation Rate
    nYears=59;     //Number of years to save
    year=0;        //Initialize counter to 0
    dYear=1961;    //Initialize date year to now
    
    
    //Process or map Inputs to Outputs
    //Create the Heading for the Savings Account
    infRate/=CNVDCML;
    float inflation=itmCost*infRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year     Cost  Inflation"<<endl;
    cout<<setw(4)<<year<<setw(6)<<dYear
            <<setw(9)<<itmCost<<setw(9)<<inflation<<endl;
    
    //Loop for all years
    for(year++,dYear++;year<=nYears;year++,dYear++){
        itmCost*=(1+infRate);
        inflation=itmCost*infRate;
    cout<<setw(4)<<year<<setw(6)<<dYear
            <<setw(9)<<itmCost<<setw(9)<<inflation<<endl;
    }

    //Exit stage right!
    return 0;
}