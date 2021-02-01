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
const int COLS=4;     //Number of Columns in the 2D Arrays

//Function Prototypes
void model(float,float,int,int,float[][COLS]);//Model/Business Logic
void display(float,int,float[][COLS]);  //Display/Tables

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   pv=100.0f,      //Present Value in $'s
            intRate=0.06f;  //Interest Rate in Decimal
    int     numCmpd;        //Number of compounding periods in Years
    const int ARYSIZE=100;  //Largest Array Size more than numCmpd   
    //fVTable[][0]->Future Value in $'s
    //fVTable[][1]->Interest in $'s
    //fVTable[][2]->Year Count / Index
    //fVTable[][3]->Actual Year
    float   fVTable[ARYSIZE][COLS];//Future Value in $'s with Interest
    
    //Initialize Variables
    numCmpd=72/(intRate*CNVPRCT);//By the Rule of 72
    
    //Calculate and Display the Table as you go
    model(pv,intRate,numCmpd,2021,fVTable);
    
    //Display the headings
    display(intRate,numCmpd,fVTable);
  
    //Exit the Program - Cleanup
    return 0;
}

void display(float intRate,int numCmpd,float fVTable[][COLS]){
    
    //Display the headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<fVTable[0][0]<<endl;
    cout<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count  Year  Savings  Interest"<<endl;
    
    //Display of the Information Table
    for(int count=0,years=fVTable[0][3];count<=numCmpd;count++,years++){
        cout<<fixed<<setprecision(0)<<noshowpoint;
        cout<<setw(3)<<fVTable[count][2]<<setw(8)<<fVTable[count][3];
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(9)<<fVTable[count][0]<<setw(9)<<fVTable[count][1]<<endl;
    }
}

void model(float pv,float intRate,int numCmpd,int begYear,
        float fVTable[][COLS]){
    //Calculate and Display the Table as you go
    fVTable[0][3]=begYear;
    fVTable[0][0]=pv;
    for(int count=0,years=fVTable[0][3];count<=numCmpd;count++,years++){
        fVTable[count][3]=years;
        fVTable[count][2]=count;
        fVTable[count][1]=(fVTable[count][0]*intRate);
        fVTable[count+1][0]=fVTable[count][0]*(1+intRate);
    }
}