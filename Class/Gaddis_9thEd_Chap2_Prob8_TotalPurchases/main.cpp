/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11, 2021, 11:00 AM
 * Purpose:  Savage +- Sums and averages
 *           Note:  Using the ternary operator
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   number,  //10 Numbers to Input into the program
            totSum,  //tot represent total
            totAvg,
            negSum,  //neg represents the negative
            negAvg,
            posSum,  //pos represents the positive
            posAvg;
    
    //Initialize Variables
    totSum=totAvg=negSum=negAvg=posSum=posAvg=0;//Important Initialization
    cout<<"This program sums and averages 10 floating numbers"<<endl;
    cout<<"with 2 significant digits of accuracy"<<endl;
    
    //Map Inputs to Outputs -> Process
    cout<<"Input 10 numbers with no more than 2 decimal places"<<endl;
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);
    
    cin>>number;
    posSum+=(number>0?number:0);
    negSum+=(number<0?number:0);    
    
    //Final Calculation
    totSum=posSum+negSum;
    totAvg=totSum/10.0f;
    posAvg=posSum/10.0f;
    negAvg=negSum/10.0f;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Total sum    = "<<setw(10)<<totSum<<endl;
    cout<<"The Positive sum = "<<setw(10)<<posSum<<endl;
    cout<<"The Negative sum = "<<setw(10)<<negSum<<endl;
    cout<<"The Total avg    = "<<setw(10)<<totAvg<<endl;
    cout<<"The Positive avg = "<<setw(10)<<posAvg<<endl;
    cout<<"The Negative avg = "<<setw(10)<<negAvg<<endl;
    
    
    //Exit the Program - Cleanup
    return 0;
}