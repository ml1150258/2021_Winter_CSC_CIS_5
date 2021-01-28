/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 20, 2021, 11:05 AM
 * Purpose:  Savings Using MVC Pattern
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Input/Output Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVPRCT=100;//Percent Conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   pv=100.0f,      //Present Value in $'s
            intRate=0.06f;  //Interest Rate in Decimal
    int     numCmpd;        //Number of compounding periods in Years
    const int ARYSIZE=100;  //Largest Array Size more than numCmpd     
    int     index[ARYSIZE], //Indexed Array
            yrs[ARYSIZE];   //Years Array
    float   futVal[ARYSIZE],//Future Value in $'s
            intrst[ARYSIZE];//Interest Rate
    
    //Initialize Variables
    numCmpd=72/(intRate*CNVPRCT);//By the Rule of 72
    
    //Calculate and Display the Table as you go
    yrs[0]=2021;
    futVal[0]=pv;
    for(int count=0,years=yrs[0];count<=numCmpd;count++,years++){
        yrs[count]=years;
        index[count]=count;
        intrst[count]=(futVal[count]*intRate);
        futVal[count+1]=futVal[count]*(1+intRate);
    }
    
    //Display the headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count  Year  Savings  Interest"<<endl;
    
    //Display of the Information Table
    for(int count=0,years=yrs[0];count<=numCmpd;count++,years++){
        cout<<setw(3)<<index[count]<<setw(8)<<yrs[0]
                <<setw(9)<<futVal[count]<<setw(9)<<intrst[count]<<endl;
    }
  
    //Exit the Program - Cleanup
    return 0;
}