/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 14, 2020, 10:30 AM
 * Purpose:  Average of 10 inputs
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
    float avgTot,avgNeg,avgPos;//Sums until the end then divide by n
    int neg,pos,tot;//Number of negative, positive and total values input
    
    //Initialize Variables
    x=avgTot=avgNeg=avgPos=0;
    neg=pos=tot=0;
    
    //Process or map Inputs to Outputs
    cout<<"Average 10 Numbers Positive or Negative"<<endl;
    cout<<"Zero is neither positive or Negative"<<endl;
    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;
    
    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;

    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;

    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;

    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;

    cout<<"Input a number "<<endl;
    cin>>x;
    avgPos+=x>0?x:0;
    pos+=x>0?1:0;
    avgNeg+=x>0?0:x;
    neg+=x>=0?0:1;
    avgTot+=x;
    tot+=1;

    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average Total   = "<<avgTot/tot<<endl;
    cout<<"The average Positive= "<<(pos>0?avgPos/pos:0)<<endl;
    cout<<"The average Negative= "<<(neg>0?avgNeg/neg:0)<<endl;
    
    //Exit stage right!
    return 0;
}