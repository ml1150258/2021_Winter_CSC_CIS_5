/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 20, 2021, 11:05 AM
 * Purpose:  Savings Using MVC Pattern implemented with Functions
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Input/Output Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVPRCT=100;//Percent Conversion
const int COLS=2;     //Number of Columns in the 2D Arrays

//Function Prototypes
void model(float,float,int,int,float[][COLS],int[][COLS]);//Model/Business Logic
void display(float,int,float[][COLS],int[][COLS]);  //Display/Tables

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   pv=100.0f,      //Present Value in $'s
            intRate=0.06f;  //Interest Rate in Decimal
    int     numCmpd;        //Number of compounding periods in Years
    const int ARYSIZE=100;  //Largest Array Size more than numCmpd    
    //idxYrs[ARYSIZE][0] -> Count or Index Column
    //idxYrs[ARYSIZE][1] -> Actual Year
    int     idxYrs[ARYSIZE][COLS]; //Indexed Array and Years
    //fValInt[ARYSIZE][0] -> Future Value in $'S
    //fValInt[ARYSIZE][1] -> Interest in $'S
    float   fValInt[ARYSIZE][COLS];//Future Value in $'s with Interest
    
    //Initialize Variables
    numCmpd=72/(intRate*CNVPRCT);//By the Rule of 72
    
    //Calculate and Display the Table as you go
    model(pv,intRate,numCmpd,2021,fValInt,idxYrs);
    
    //Display the headings
    display(intRate,numCmpd,fValInt,idxYrs);
  
    //Exit the Program - Cleanup
    return 0;
}

void display(float intRate,int numCmpd,
        float fValInt[][COLS],int idxYrs[][COLS]){
    
    //Display the headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<fValInt[0][0]<<endl;
    cout<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count  Year  Savings  Interest"<<endl;
    
    //Display of the Information Table
    for(int count=0,years=idxYrs[0][1];count<=numCmpd;count++,years++){
        cout<<setw(3)<<idxYrs[count][0]<<setw(8)<<idxYrs[count][1]
                <<setw(9)<<fValInt[count][0]<<setw(9)<<fValInt[count][1]<<endl;
    }
}

void model(float pv,float intRate,int numCmpd,int begYear,
        float fValInt[][COLS],int idxYrs[][COLS]){
    
    //Calculate and Display the Table as you go
    idxYrs[0][1]=begYear;
    fValInt[0][0]=pv;
    for(int count=0,years=idxYrs[0][1];count<=numCmpd;count++,years++){
        idxYrs[count][1]=years;
        idxYrs[count][0]=count;
        fValInt[count][1]=(fValInt[count][0]*intRate);
        fValInt[count+1][0]=fValInt[count][0]*(1+intRate);
    }
}