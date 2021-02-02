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
const int COLS=3;//number of Columns in the 2-D Array

//Function Prototypes
void savings(float [][COLS],int,float &);
void display(float [][COLS],int,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float intRate;//Interest Rate %
    const int NYEARS=31;//Number of Years, remember array size + 1
    float balance[NYEARS][COLS];//Savings Balance $'s  Parallel Array
    float interest;       //Interest Calculation
    
    
    //Initialize Variables
    //The 2 Dimension balance Array
    //Column 1 index 0 represents the year
    //Column 2 index 1 represents the date year
    //Column 3 index 2 represents the balance
    intRate=6;           //Yearly Interest Rate
    balance[0][2]=100.0f;//Savings in $'s
    balance[0][0]=0;     //Initialize counter year to 0
    balance[0][1]=2020;  //Initialize date year to now
    
    //Process or map Inputs to Outputs
    savings(balance,NYEARS,intRate);
    
    //Display the Heading
    display(balance,NYEARS,intRate);

    //Exit stage right!
    return 0;
}

void display(float balance[][COLS],int NYEARS,float intRate){
    //Display the Heading
    float interest=balance[0][2]*intRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"  Year    Year  Balance Interest"<<endl;
    cout<<setw(6)<<balance[0][0]<<setw(8)<<balance[0][1]
            <<setw(9)<<balance[0][2]<<setw(9)<<interest<<endl;
    
    //Loop and Display for all years
    for(int cnt=1;cnt<NYEARS;cnt++){
        interest=balance[cnt][2]*intRate;
        cout<<setw(6)<<balance[cnt][0]<<setw(8)<<balance[cnt][1]
            <<setw(9)<<balance[cnt][2]<<setw(9)<<interest<<endl;
    }
}

void savings(float balance[][COLS],int NYEARS,float &intRate){
    //Process or map Inputs to Outputs
    //Create the Heading for the Savings Account
    intRate/=CNVDCML;
    
    //Loop and Calculate for all years
    for(int cnt=1;cnt<NYEARS;cnt++){
        balance[cnt][0]=balance[cnt-1][0]+1;
        balance[cnt][1]=balance[cnt-1][1]+1;
        balance[cnt][2]=balance[cnt-1][2]*(1+intRate);
    }
}