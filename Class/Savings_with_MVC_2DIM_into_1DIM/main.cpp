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

//Function Prototypes
int  transl8(int,int,int);//Translate row and col into a single dimension index
void model(float,float,int,int,float[],int);//Model/Business Logic
void display(float,int,float[],int);  //Display/Tables

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   pv=100.0f,      //Present Value in $'s
            intRate=0.06f;  //Interest Rate in Decimal
    int     numCmpd;        //Number of compounding periods in Years
    const int ARYSIZE=100;  //Largest Array Size more than numCmpd  
    const int COLS=4;       //Number of Columns in the 2D Arrays
    //fVTable[][0]->Future Value in $'s
    //fVTable[][1]->Interest in $'s
    //fVTable[][2]->Year Count / Index
    //fVTable[][3]->Actual Year
    float   fVTable[ARYSIZE*COLS];//Future Value in $'s with Interest
    
    //Initialize Variables
    numCmpd=72/(intRate*CNVPRCT);//By the Rule of 72
    
    //Calculate and Display the Table as you go
    model(pv,intRate,numCmpd,2021,fVTable,COLS);
    
    //Display the headings
    display(intRate,numCmpd,fVTable,COLS);
  
    //Exit the Program - Cleanup
    return 0;
}

int  transl8(int row,int col,int colMax){
    return row*colMax+col;//Single dimension index computation
}

void display(float intRate,int numCmpd,float fVTable[],int colMax){
    
    //Display the headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<fVTable[transl8(0,0,colMax)]<<endl;
    cout<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count  Year  Savings  Interest"<<endl;
    
    //Display of the Information Table
    for(int count=0,years=fVTable[transl8(0,3,colMax)];count<=numCmpd;count++,years++){
        cout<<fixed<<setprecision(0)<<noshowpoint;
        cout<<setw(3)<<fVTable[transl8(count,2,colMax)]
                <<setw(8)<<fVTable[transl8(count,3,colMax)];
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(9)<<fVTable[transl8(count,0,colMax)]<<setw(9)
                <<fVTable[transl8(count,1,colMax)]<<endl;
    }
}

void model(float pv,float intRate,int numCmpd,int begYear,
        float fVTable[],int colMax){
    //Calculate and Display the Table as you go
    fVTable[transl8(0,3,colMax)]=begYear;
    fVTable[transl8(0,0,colMax)]=pv;
    for(int count=0,years=fVTable[transl8(0,3,colMax)];count<=numCmpd;count++,years++){
        fVTable[transl8(count,3,colMax)]=years;
        fVTable[transl8(count,2,colMax)]=count;
        fVTable[transl8(count,1,colMax)]=(fVTable[transl8(count,0,colMax)]*intRate);
        fVTable[transl8(count+1,0,colMax)]=fVTable[transl8(count,0,colMax)]*(1+intRate);
    }
}