/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 27, 2020, 12:43 PM
 * Purpose:  All the Ways to Write a function
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library for pow() function
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVPERC=100.0f;//Conversion to Percent

//Function Prototypes
float save1(float,float,int);//Using pow
float save2(float,float,int);//Using exp, log
float save3(float,float,int);//For-loops
float save4(float,float,int);//Variation of 3 with for-loops
float save5(float,float,int);//Recursion
float save6(float,float,int=12);//Defaulted Parameter using For-loops
float save3(float,float,float);//Overloaded For-loops
void  save7(float,float,int,float &);//Reference return
int   save8(float,float,int,float &);//Static Variable


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float presVal,//Present Value in $'s
          intRate;//Interest Rate in %
    int   numCmpd;//Number of Compounding Periods in Years
    
    //Initialize Variables
    presVal=100.0f;//$100
    intRate=6;     //6%
    
    //Process or map Inputs to Outputs
    numCmpd=72/intRate;//Rule of 72 => FV~2*PV
    intRate/=CNVPERC;  //Convert percent to decimal
    
    //Display Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<setw(7)<<presVal<<endl;
    cout<<"Interest Rate =  "<<setw(7)<<intRate*100<<"%"<<endl;
    cout<<"Compounding   =  "<<setw(4)<<numCmpd<<" Yrs"<<endl;
    cout<<"Savings 1     = $"<<setw(7)
            <<save1(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 2     = $"<<setw(7)
            <<save2(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 3     = $"<<setw(7)
            <<save3(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 4     = $"<<setw(7)
            <<save4(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 5     = $"<<setw(7)
            <<save5(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 6 3p  = $"<<setw(7)
            <<save6(presVal,intRate,numCmpd)<<endl;
    cout<<"Savings 6 2p  = $"<<setw(7)
            <<save6(presVal,intRate)<<endl;
    float fnmCmpd=numCmpd;
    cout<<"Savings 3Over = $"<<setw(7)
            <<save3(presVal,intRate,fnmCmpd)<<endl;
    float fv;
    save7(presVal,intRate,numCmpd,fv);
    cout<<"Savings 7     = $"<<setw(7)
            <<fv<<endl;
    int nCalls=5;
    int return8;
    for(int call=1;call<=nCalls;call++){
        return8=save8(presVal,intRate,numCmpd,fv);
    }
    cout<<"Savings 8     = $"<<setw(7)
            <<fv<<endl;
    cout<<"I called Savings 8 -> "<<return8<<" times"<<endl;
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 1
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float save1(float pv,float i,int n){
    return pv*pow(1+i,n);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 2
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float save2(float pv,float i,int n){
    return pv*exp(n*log(1+i));
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 3
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float save3(float pv,float i,int n){
    float fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 4
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float save4(float pv,float i,int n){
    for(int j=1;j<=n;j++){
        pv*=(1+i);
    }
    return pv;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 5
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float save5(float pv,float i,int n){
    if(n<=0)return pv;
    return save5(pv,i,n-1)*(1+i);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 6
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float save6(float pv,float i,int n){
    float fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 3
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
float save3(float pv,float i,float n){
    float fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
    return fv;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 7
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void save7(float pv,float i,int n,float &fv){
    fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Savings Function Version 8
//Inputs:
//     pv -> Present value in Dollars
//      i -> Interest Rate in decimal
//      n -> Number of compounding periods in years
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
int save8(float pv,float i,int n,float &fv){
    static int count;
    fv=pv;
    for(int j=1;j<=n;j++){
        fv*=(1+i);
    }
    return ++count;
}