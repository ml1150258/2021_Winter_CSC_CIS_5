/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2020, 12:35 PM
 * Purpose:  Investigate Random Numbers
 */

//System Libraries
#include <iostream>  //I/O Stream Library
#include <cstdlib>   //Where random function is
#include <ctime>     //Time will set the random number seed
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    int rnd1to6;//Random number from 1 to 6
    int rndm3to3;//Random number from -3 to 3
    int rndmBegtoEnd;//Random number from beginning to end
    int beg,end;
    
    //Initialize Variables
    rnd1to6=rand()%6+1;
    rndm3to3=rand()%7-3;
    beg=10;
    end=99;
    rndmBegtoEnd=rand()%(end-beg+1)+beg;
    
    //Display Outputs
    cout<<"Random number in range of 1 to 6  = "<<rnd1to6<<endl;
    cout<<"Random number in range of -3 to 3 = "<<rndm3to3<<endl;
    cout<<"Random number in range of "<<beg
            <<" to "<<end<<" = "<<rndmBegtoEnd<<endl;
    
    //Exit stage right!
    return 0;
}