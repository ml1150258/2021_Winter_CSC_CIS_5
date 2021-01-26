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
float fv1(float,float,int);            //For-Loop
float fv2(float,float,int);            //Power Function
float fv3(float,float,int);            //Exp-Log
float fv4(float,float,int);            //Recursion
float fv4(float,float,float);          //Overloaded/same name as fv4
float fv5(float,float,int=12);         //Defaulted Parameter
void  fv6(float &,float,float,int);    //Reference Parameter
int   fv7(float &,float,float,int);    //Static Local Value for function calls


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
    cout<<"Savings -> Overload   = $"<<fv4(pv,intRate/CNVPCNT,
                                      static_cast<float>(numCmpd))<<endl;
    cout<<"Savings -> Default    = $"<<fv5(pv,intRate/CNVPCNT)<<endl;
    float fv;
    fv6(fv,pv,intRate/CNVPCNT,numCmpd);
    cout<<"Savings -> Reference  = $"<<fv<<endl;
    for(int i=1;i<=4;i++){
        fv7(fv,pv,intRate/CNVPCNT,numCmpd);
    }
    int nCalls=fv7(fv,pv,intRate/CNVPCNT,numCmpd);
    cout<<"Savings -> Static     = $"<<fv<<" function called "<<
            nCalls<<" times"<<endl;
    
    
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

float fv4(float pv,float i,float n){
    return pv*pow(1+i,n);
}


float fv5(float pv,float i,int n){
    for(int j=1;j<=n;j++){
        pv*=(1+i);
    }
    return pv;
}

void fv6(float &fv,float pv,float i,int n){
    fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
}

int fv7(float &fv,float pv,float i,int n){
    static int count;
    fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
    count++;
    return count;
}