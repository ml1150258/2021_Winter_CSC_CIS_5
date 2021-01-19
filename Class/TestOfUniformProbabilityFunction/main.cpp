/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 28, 2020, 1:10 PM
 * Purpose:  ShootOut
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Need the power function
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float rndProb();//Random Number Between [0,1]

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    float min,max;
    min=max=rndProb();
    for(int i=1;i<=1000000000;i++){
        float random=rndProb();
        if(min>random)min=random;
        if(max<random)max=random;
    }
    cout<<"["<<min<<","<<max<<"]"<<endl;
        

    //Exit stage right!
    return 0;
}

float rndProb(){
    return 1.0f*rand()/(pow(2,31)-1);
}