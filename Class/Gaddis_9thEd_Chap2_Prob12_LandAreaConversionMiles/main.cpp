/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2021, 11:29 AM
 * Purpose:  Conversion from Acres to Mile^2 and Perimeter
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVAFT2=43560;    //Conversion from Acres to Ft^2
const float CVFTMLS=1/5280.0f;//Conversion from Ft to Miles

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float areaAc, //Area in Acres
          arMls2, //Area in Miles Squared
          sideMls,//Perimeter side in Miles
          perimtr;//Perimeter in Miles
    
    //Initialize Variables
    areaAc=640/4;
    
    //Map Inputs to Outputs -> Process
    arMls2=areaAc*CNVAFT2*CVFTMLS*CVFTMLS;
    sideMls=sqrt(arMls2);
    perimtr=4*sideMls;
    
    //Display Inputs/Outputs
    cout<<areaAc<<" acres = "<<arMls2<<" miles^2"<<endl;
    cout<<"1 side of the Area = "<<sideMls<<" miles"<<endl;
    cout<<"The perimeter = "<<perimtr<<" miles"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}