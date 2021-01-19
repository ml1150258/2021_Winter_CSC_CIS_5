/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2020, 10:15 PM
 * Purpose:  Use Newton's Equation to Solve for your Weight
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float GRAVITY=6.673e-8f; //Gravity cm^3/gram/sec^2
const float MSEARTH=5.9722e24f;//Mass of earth in KG
const float REARTH=6.378e3f;   //Radius of Earth in KM
const float MGKG=1.0e3f;       //Mass Kilograms to Grams
const float CMINCH=1.0f/2.54f; //Centimeters to Inches
const float INCHFT=1.0/12.0f;  //Inches to feet
const float KMM=1.0e3f;        //Kilometers to meters
const float MCM=1.0e2f;        //Meters to centimeters

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float myMass;//Our mass in slugs
    float weight;//Our weight in lbs->slug-ft/sec^2
    
    //Initialize Variables
    myMass=6.0f;//I feel like a slug
    
    //Process or map Inputs to Outputs
    weight=GRAVITY*MSEARTH*myMass/(REARTH*REARTH)*
            MGKG*CMINCH*INCHFT/(KMM*KMM*MCM*MCM);
    
    //Display Outputs
    cout<<weight<<" lbs => "<<myMass<<" slugs"<<endl;

    //Exit stage right!
    return 0;
}