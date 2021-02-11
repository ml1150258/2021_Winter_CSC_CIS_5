/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 10th, 2021, 10:06 AM
 * Purpose:  Example of String Compare
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string.h>  //Library with String Compare
#include <cstdlib>   //Bring in random function
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char months[][10]={"January", "February", "March",
                     "April", "May", "June", "July",
                     "August", "September", "October",
                     "November", "December"};
    int whchMonth=rand()%12;
    
    cout<<"List of all Months"<<endl;
    for(int i=0;i<12;i++){
        cout<<months[i]<<endl;
    }
    cout<<endl;
     
    //Map Inputs to Outputs -> Process
    cout<<"All month names < "<<months[whchMonth]<<endl;
    for(int i=0;i<12;i++){
        if(strcmp(months[i],months[whchMonth])<0){
            cout<<months[i]<<endl;
        }
    }
    cout<<endl;
    
    cout<<"All month names > "<<months[whchMonth]<<endl;
    for(int i=0;i<12;i++){
        if(strcmp(months[i],months[whchMonth])>0){
            cout<<months[i]<<endl;
        }
    }
    cout<<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}