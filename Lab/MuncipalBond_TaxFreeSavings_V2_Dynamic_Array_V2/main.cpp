/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 8rd, 2021, 11:10 AM
 * Purpose:  Municipal Bond Savings
  *      Illustrate Pointers and Dynamic Memory Allocation
  *      How to create a memory Leak, forgot to delete!!!!!!
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
    float intRate;//Interest Rate %
    int nYears=31;//Number of Years, remember array size + 1
    float *balance=new float[nYears];//Savings Balance $'s  Parallel Array
    int *year=new int[nYears],     //Year counter  Parallel Array
        *dYear=new int[nYears];    //Year date  Parallel Array
    
    
    //Initialize Variables
    balance[0]=100.0f;//Savings in $'s
    intRate=6;        //Yearly Interest Rate
    year[0]=0;        //Initialize counter to 0
    dYear[0]=2020;    //Initialize date year to now
    
    
    
    //Process or map Inputs to Outputs
    //Create the Heading for the Savings Account
    intRate/=CNVDCML;
    float interest=balance[0]*intRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year  Balance Interest"<<endl;
    cout<<setw(4)<<year[0]<<setw(6)<<dYear[0]
            <<setw(9)<<balance[0]<<setw(9)<<interest<<endl;
    
    //Loop for all years
    for(int cnt=1;cnt<nYears;cnt++){
        year[cnt]=year[cnt-1]+1;
        dYear[cnt]=dYear[cnt-1]+1;
        balance[cnt]=balance[cnt-1]*(1+intRate);
        interest=balance[cnt]*intRate;
        cout<<setw(4)<<year[cnt]<<setw(6)<<dYear[cnt]
            <<setw(9)<<balance[cnt]<<setw(9)<<interest<<endl;
    }

    //Deallocate memory before Exiting stage right!
    delete [] balance;
    delete [] year;
    delete [] dYear;
    
    return 0;
}