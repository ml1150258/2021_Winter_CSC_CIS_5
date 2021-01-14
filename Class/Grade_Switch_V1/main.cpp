/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 24th, 2020, 11:40 AM
 * Purpose: Grade using Switch
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>    //Random Function
#include <ctime>      //Time to set seed
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Variable Declarations
    char grade;  //Grade A,B,C,D, OR F
    unsigned char score;  //Numeric value from 0 to 100
    
    //Variable Initialization
    score=rand()%51+50;//Score inclusive range[50,100]
    
    //Mapping Process Inputs to Outputs
    switch(score/10){
        case 10:
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
    }
        
    //Display Outputs
    cout<<"A score of "<<static_cast<int>(score)
            <<" is a "<<grade<<" grade!"<<endl;
    
    //Exit stage right!
    return 0;
}