/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 12, 2021, 10:30 AM
 * Purpose:  Ratio, Conversion, Dieter Question
 *           Showed Random Number utilization and
 *           how to use cin.ignore()
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time Library to set the random number seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVENGM=453.592;  //Lbs to Grams

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string name;        //Name of the Dieter
    float massMs=35,    //Mass of the Mouse 35grams
          massKms=5,    //Mass to kill the mouse of sweetner
          mssCoke=350,  //Mass of 1 can of Diet Coke
          cncnt8=0.001f,//Concentration of sweetner in a can of Diet Coke
          wDietr;       //Weight of the Dieter
    int nCans;          //Number of cans of Diet Coke
    
    //Initialize Variables
    cout<<"This program calculates the maximum Diet Cans of Coke"<<endl;
    cout<<"Three dieters can drink"<<endl;
    cout<<"Input the name of the First Dieter"<<endl;
    getline(cin,name);
    cout<<"Read in the weight of the Dieter in lbs"<<endl;
    cin>>wDietr;
    
    //Map Inputs to Outputs -> Process
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncnt8);
    
    //Display Inputs/Outputs
    cout<<"The name of the Dieter is = "<<name<<endl;
    cout<<"The maximum number of cans of coke  = "<<nCans<<" that an individual"
            <<" weighing "<<wDietr<<" lbs can drink "<<endl;
    
    //Initialize Variables
    cout<<endl<<endl<<"Input the name of the Second Dieter"<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"Read in the weight of the Dieter in lbs"<<endl;
    cin>>wDietr;

    //Map Inputs to Outputs -> Process
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncnt8);
    
    //Display Inputs/Outputs
    cout<<"The name of the Dieter is = "<<name<<endl;
    cout<<"The maximum number of cans of coke  = "<<nCans<<" that an individual"
            <<" weighing "<<wDietr<<" lbs can drink "<<endl;
    
    //Initialize Variables
    cout<<endl<<endl<<"Input the name of the Second Dieter"<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"No need to input 3rd Dieter, we will use a random number"<<endl;
    int maxWt=350;
    int minWt=90;
    wDietr=rand()%(maxWt-minWt+1)+minWt;//range of random number[minWt,maxWt]

    //Map Inputs to Outputs -> Process
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncnt8);
    
    //Display Inputs/Outputs
    cout<<"The name of the Dieter is = "<<name<<endl;
    cout<<"The maximum number of cans of coke  = "<<nCans<<" that an individual"
            <<" weighing "<<wDietr<<" lbs can drink "<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}