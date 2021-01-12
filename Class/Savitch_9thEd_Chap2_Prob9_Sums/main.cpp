/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2020, 10:30 AM
 * Purpose:  Sum of 10 inputs
 *     Positive, Negative and Total Inputs
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float x;//Variable to input 10 times
    float sumTot,sumNeg,sumPos;//Sums
    
    //Initialize Variables
    sumTot=sumNeg=sumPos=0;
    
    //Process or map Inputs to Outputs
    cout<<"Sum 10 Numbers Positive or Negative"<<endl;
    cout<<"Zero is neither positive or Negative"<<endl;
    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;

    cout<<"Input a number "<<endl;
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    //Sum total simply sum of both positive and negative
    sumTot=sumPos+sumNeg;

    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The sum Total   = "<<sumTot<<endl;
    cout<<"The sum Positive= "<<sumPos<<endl;
    cout<<"The sum Negative= "<<sumNeg<<endl;
    
    //Exit stage right!
    return 0;
}