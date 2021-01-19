/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 8, 2020, 12:23 PM
 * Purpose:  Checks for the savings function
 *           fv=pv*(1+i)^n
 *           fv=future value
 *           pv=present value
 *           i=interest rate
 *           n=number of compounding periods
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cmath>   //Math Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVPERC=100;//Percent Conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float n,nc10,nce;//Number of compounding periods in Years
    float pv,pvc;//Present value in Dollars
    float i,ic;//Interest Rate in percent
    float fv;//Future Value in Dollars
    
    //Initialize Variables
    cout<<"Input Present Value in Dollars"<<endl;
    cout<<"Input Interest Rate in Percent"<<endl;
    cout<<"Input Compounding Period in Years"<<endl;
    cin>>pv>>i>>n;
    cout<<endl;
    
    //Process or map Inputs to Outputs
    i=i/CNVPERC;      //Conversion to Decimal
    float opi=1+i;    //Utility Variable
    fv=pv*pow(opi,n); //Future Value, i.e. Savings Account Function
    
    //Rearrange the Future Value Equation to solve
    //for the Inputs
    pvc=fv/pow(opi,n);//Confirm Present Value
    
    float fvdpv=fv/pv;//Utility Variable
    ic=pow(fvdpv,1/n)-1;//Confirm Interest Rate
    
    nc10=log10(fvdpv)/log10(opi);//Confirm Number of Compounding Periods
    nce=log(fvdpv)/log(opi);//Confirm Number of Compounding Periods
    
    //Display Outputs
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The Present Value = $"<<pvc<<endl;
    cout<<"The interest rate =  "<<i<<endl;
    cout<<"The interest rate =  "<<ic<<endl;
    cout<<"The future value  = $"<<fv<<endl;
    cout<<"The number of compounding Periods = "<<n<<" years"<<endl;
    cout<<"The number of compounding Periods = "<<nc10<<" years"<<endl;
    cout<<"The number of compounding Periods = "<<nce<<" years"<<endl;
    
    //Exit stage right!
    return 0;
}