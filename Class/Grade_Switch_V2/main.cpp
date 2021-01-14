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
    switch(score){
        case 100:case 99:case 98:case 97:case 96:case 95:
        case  94:case 93:case 92:case 91:case 90:grade='A';break;
        case  89:case 88:case 87:case 86:case 85:
        case  84:case 83:case 82:case 81:case 80:grade='B';break;
        default:grade='F';
    }
        
    //Display Outputs
    cout<<"A score of "<<static_cast<int>(score)
            <<" is a "<<grade<<" grade!"<<endl;
    
    //Exit stage right!
    return 0;
}