/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 7, 2021, 10:50 AM
 * Purpose:  Gaddis Average Temperature Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned char tmpNY,   //New York Temperature in Fahrenheit
                 tmpDen,   //Denver Temperature
                tmpPhnx,   //Phoenix Temperature
                perChng;   //Percentage Change
    unsigned short avgTmp1,//Average Temperature before the Increase
                   avgTmp2;//Average Temperature after the Increase
    
    //Initialize Variables
    tmpNY=85;
    tmpDen=88;
    tmpPhnx=106;
    perChng=2;
    
    //Map Inputs to Outputs -> Process
    avgTmp1=(tmpNY+tmpDen+tmpPhnx)/3.0+0.5;
    
    //Display Inputs/Outputs
    cout<<"Temperature before the increase"<<endl;
    cout<<"New York Temperature =  "<<static_cast<int>(tmpNY)
            <<" Fahrenheit"<<endl;
    cout<<"Denver   Temperature =  "<<static_cast<int>(tmpDen)
            <<" Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<static_cast<int>(tmpPhnx)
            <<" Fahrenheit"<<endl;
    cout<<"Average Temperature  =  "<<avgTmp1<<" Fahrenheit"<<endl;
    
    //Multiply by the percentage change
    tmpNY*=((100+perChng)/100.0f);
    tmpDen*=((100+perChng)/100.0f);
    tmpPhnx*=((100+perChng)/100.0f);
    
    //Map Inputs to Outputs -> Process
    avgTmp2=(tmpNY+tmpDen+tmpPhnx)/3.0+0.5;
    
    //Display Inputs/Outputs
    cout<<"Temperature after the increase"<<endl;
    cout<<"New York Temperature =  "<<static_cast<int>(tmpNY)
            <<" Fahrenheit"<<endl;
    cout<<"Denver   Temperature =  "<<static_cast<int>(tmpDen)
            <<" Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<static_cast<int>(tmpPhnx)
            <<" Fahrenheit"<<endl;
    cout<<"Average Temperature  =  "<<avgTmp2<<" Fahrenheit"<<endl;
    
    //Display the Average Increase
    cout<<"Average Percent Temperature Increase = "
            <<100.0f*(avgTmp2-avgTmp1)/avgTmp1<<"%"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}