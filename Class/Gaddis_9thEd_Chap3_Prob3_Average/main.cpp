/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2020, 10:30 AM
 * Purpose:  Average of 5 inputs
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float x,avg;
    
    //Initialize Variables
    x=0;
    avg=0;
    
    //Process or map Inputs to Outputs
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avg+=x;
    
    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average = "<<avg/5<<endl;

    //Exit stage right!
    return 0;
}