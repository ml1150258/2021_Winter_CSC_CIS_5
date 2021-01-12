/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2020, 10:35 AM
 * Purpose:  Sin,Cos,Tan Calculations
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float angle;
    
    //Initialize Variables
    cout<<"Input an angle in degrees"<<endl;
    cin>>angle;
    
    //Process or map Inputs to Outputs
    angle*=CNVRAD;
    
    //Display Outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angle<<")="<<sin(angle)<<endl;
    cout<<"cos("<<angle<<")="<<cos(angle)<<endl;
    cout<<"tan("<<angle<<")="<<tan(angle)<<endl;
    cout<<"tan("<<angle<<")="<<sin(angle)/cos(angle)<<endl;

    //Exit stage right!
    return 0;
}