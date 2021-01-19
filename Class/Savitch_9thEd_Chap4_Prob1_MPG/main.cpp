/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2020, 11:50 AM
 * Purpose:  Calculate MPG
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
float CNVGAL=0.264179f;//Conversion from liters to gallons

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    float liters,miles,mpg;
    
    //Initialize Variables
    liters=rand()%31+50; //[50,80] Liters of gas
    miles=rand()%451+200;//[200,650]miles
    
    //Process or map Inputs to Outputs
    mpg=miles/(liters*CNVGAL);
    
    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<miles<<" miles/"<<liters<<" liters = "<<mpg<<" miles/gallon"<<endl;

    //Exit stage right!
    return 0;
}