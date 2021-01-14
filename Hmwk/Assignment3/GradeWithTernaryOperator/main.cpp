/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 15, 2020, 10:15 AM
 * Purpose:  Grade with Ternary Operator
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time to set the Random Number Seed
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
    unsigned char grade, score;
    
    //Initialize Variables
    score=rand()%51+50;//[50,100]
    
    //Process or map Inputs to Outputs
    grade=score>=90?'A':
          score>=80?'B':
          score>=70?'C':
          score>=60?'D':'F';
    
    //Display Outputs
    cout<<"With a score of "<<
            static_cast<int>(score)<<" the Grade = "<<grade<<endl;

    //Exit stage right!
    return 0;
}