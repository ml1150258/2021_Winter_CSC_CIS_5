/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21st, 2021, 11:30 AM
 * Purpose:  Example Savings Functions
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVPCNT=100.0f;//Conversion from Percent

//Function Prototypes
float fv1(float,float,int);
float fv2(float,float,int);
float fv3(float,float,int);
float fv4(float,float,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float pv,     //Present Value in $'s
          intRate;//Interest Rate in %
    int   numCmpd;//Number of Compounding Periods in Years
    
    //Initialize Variables
    pv=100.0f;//$100's
    intRate=6;//6 Percent
    numCmpd=12;//Using Rule of 72 -> 72/6=12
    
    //Map Inputs to Outputs -> Process
    cout<<"Savings Calculator"<<endl;
    cout<<"Initial Conditions"<<endl;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate =    "<<intRate<<"%"<<endl;
    cout<<"Number of Years = "<<numCmpd<<endl;
    cout<<"Savings -> For-Loop   = $"<<fv1(pv,intRate/CNVPCNT,numCmpd)<<endl;
    cout<<"Savings -> Pow        = $"<<fv2(pv,intRate/CNVPCNT,numCmpd)<<endl;
    cout<<"Savings -> Exp-Log    = $"<<fv3(pv,intRate/CNVPCNT,numCmpd)<<endl;
    cout<<"Savings -> Recursion  = $"<<fv4(pv,intRate/CNVPCNT,numCmpd)<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}

float fv1(float pv,float i,int n){
    for(int j=1;j<=n;j++){
        pv*=(1+i);
    }
    return pv;
}

float fv2(float pv,float i,int n){
    return pv*pow(1+i,n);
}

float fv3(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

float fv4(float pv,float i,int n){
    if(n<=0)return pv;
    return fv4(pv,i,n-1)*(1+i);
}