/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 22, 2020, 10:15 PM
 * Purpose:  Create a conversion table based upon a file
 *           with slugs that outputs a file with weights
 */

//System Libraries
#include <iostream> //I/O Library
#include <fstream>  //File Stream Library
#include <iomanip>  //Format Library
#include <string.h> //String Library
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
    fstream in,out;//Input and output file streams
    const int INSIZE=20;//Name of the input file size
    char inName[INSIZE];//Name of the input file
    string outName;//Output file name
    
    //Initialize Variables
    strcpy(inName,"Slug.dat");
    in.open(inName,ios::in);
    outName="Pound.dat";
    out.open(outName.c_str(),ios::out);
    
    //Process or map Inputs to Outputs
    out<<fixed<<showpoint;
    out<<"Table of Weight Mass Conversion"<<endl;
    out<<"Mass-Slug  Weight-lbs"<<endl;
    cout<<fixed<<showpoint;
    cout<<"Table of Weight Mass Conversion"<<endl;
    cout<<"Mass-Slug  Weight-lbs"<<endl;
    while(in>>myMass){
        weight=GRAVITY*MSEARTH*myMass/(REARTH*REARTH)*
                MGKG*CMINCH*INCHFT/(KMM*KMM*MCM*MCM);
        out<<setw(6)<<setprecision(1)<<myMass
           <<setw(15)<<setprecision(2)<<weight<<endl;
        cout<<setw(6)<<setprecision(1)<<myMass
            <<setw(15)<<setprecision(2)<<weight<<endl;
    }

    //Exit stage right!
    in.close();
    out.close();
    return 0;
}