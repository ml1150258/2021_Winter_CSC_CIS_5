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
#include "Table.h"

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML=100.0f;//Conversion to Decimal from Percent

//Function Prototypes
void savings(Table &,float &);
void display(Table &,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float intRate;//Interest Rate %
    const int NYEARS=31;//Number of Years, remember array size + 1
    float balance[NYEARS];//Savings Balance $'s  Parallel Array
    int year[NYEARS],     //Year counter  Parallel Array
        dYear[NYEARS];    //Year date  Parallel Array
    float interest;       //Interest Calculation
    Table table;
    
    
    //Initialize Variables
    table.records=NYEARS;
    table.balance=balance;
    table.year=year;
    table.dYear=dYear;
    table.balance[0]=100.0f;//Savings in $'s
    intRate=6;        //Yearly Interest Rate
    table.year[0]=0;        //Initialize counter to 0
    table.dYear[0]=2020;    //Initialize date year to now
    
    //Process or map Inputs to Outputs
    savings(table,intRate);
    
    //Display the Heading
    display(table,intRate);

    //Exit stage right!
    return 0;
}

void display(Table &table,float intRate){
    //Display the Heading
    float interest=table.balance[0]*intRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year  Balance Interest"<<endl;
    cout<<setw(4)<<table.year[0]<<setw(6)<<table.dYear[0]
            <<setw(9)<<table.balance[0]<<setw(9)<<interest<<endl;
    
    //Loop and Display for all years
    for(int cnt=1;cnt<table.records;cnt++){
        interest=table.balance[cnt]*intRate;
        cout<<setw(4)<<table.year[cnt]<<setw(6)<<table.dYear[cnt]
            <<setw(9)<<table.balance[cnt]<<setw(9)<<interest<<endl;
    }
}

void savings(Table &table,float &intRate){
    //Process or map Inputs to Outputs
    intRate/=CNVDCML;
    
    //Loop and Calculate for all years
    for(int cnt=1;cnt<table.records;cnt++){
        table.year[cnt]=table.year[cnt-1]+1;
        table.dYear[cnt]=table.dYear[cnt-1]+1;
        table.balance[cnt]=table.balance[cnt-1]*(1+intRate);
    }
}