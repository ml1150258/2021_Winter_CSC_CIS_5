/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 19th, 2020, 11:40 AM
 * Purpose: Grade using Independent If
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
    if(score<60){
        grade='F';
    }
    if(score>=60&&score<70){
        grade='D';
    }
    if(score>=70&&score<80){
        grade='C';
    }
    if(score>=80&&score<90){
        grade='B';
    }
    if(score>=90&&score<=100){
        grade='A';
    }
        
    
    //Display Outputs
    cout<<"A score of "<<static_cast<int>(score)
            <<" is a "<<grade<<" grade!"<<endl;
    
    //Exit stage right!
    return 0;
}