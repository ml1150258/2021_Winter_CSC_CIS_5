/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 20, 2021, 11:05 AM
 * Purpose:  Savings Using MVC Pattern implemented with Functions
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Input/Output Library
#include <vector>    //Dynamic Arrays with the STL Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVPRCT=100;//Percent Conversion

//Function Prototypes
void model(float,float,int,int,vector<float>&,vector<float>&,
                       vector<int>&,vector<int>&);//Model/Business Logic
void display(float,int,vector<float>&,vector<float>&,
                       vector<int>&,vector<int>&);  //Display/Tables

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   pv=100.0f,      //Present Value in $'s
            intRate=0.06f;  //Interest Rate in Decimal
    int     numCmpd;        //Number of compounding periods in Years
    const int ARYSIZE=100;  //Largest Array Size more than numCmpd     
    vector<int>   index(ARYSIZE), //Indexed Array
                  yrs(ARYSIZE);   //Years Array
    vector<float> futVal(ARYSIZE),//Future Value in $'s
                  intrst(ARYSIZE);//Interest Rate
    
    //Initialize Variables
    numCmpd=72/(intRate*CNVPRCT);//By the Rule of 72
    
    //Calculate and Display the Table as you go
    model(pv,intRate,numCmpd,2021,futVal,intrst,index,yrs);
    
    //Display the headings
    display(intRate,numCmpd,futVal,intrst,index,yrs);
  
    //Exit the Program - Cleanup
    return 0;
}

void display(float intRate,int numCmpd,
        vector<float> &futVal,vector<float>&intrst,
        vector<int>&index,vector<int>&yrs){
    
    //Display the headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<futVal[0]<<endl;
    cout<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count  Year  Savings  Interest"<<endl;
    
    //Display of the Information Table
    for(int count=0,years=yrs[0];count<=numCmpd;count++,years++){
        cout<<setw(3)<<index[count]<<setw(8)<<yrs[0]
                <<setw(9)<<futVal[count]<<setw(9)<<intrst[count]<<endl;
    }
}

void model(float pv,float intRate,int numCmpd,int begYear,
        vector<float> &futVal,vector<float>&intrst,
        vector<int>&index,vector<int>&yrs){
    
    //Calculate and Display the Table as you go
    yrs[0]=begYear;
    futVal[0]=pv;
    for(int count=0,years=yrs[0];count<=numCmpd;count++,years++){
        yrs[count]=years;
        index[count]=count;
        intrst[count]=(futVal[count]*intRate);
        futVal[count+1]=futVal[count]*(1+intRate);
    }
}