/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML=100.0f;//Conversion to Decimal from Percent

//Function Prototypes
void savings(float *,int *,int*,int,float &);
void display(float *,int *,int*,int,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float intRate;//Interest Rate %
    const int NYEARS=31;//Number of Years, remember array size + 1
    float b[NYEARS];//Savings Balance $'s  Parallel Array
    int y[2*NYEARS];     //Year counter  Parallel Array
    float interest;       //Interest Calculation
    
    
    //Initialize Variables
    float *balance=b;//Pointers to Arrays
    int *year=y;//Pointers to Arrays
    int *dYear=&y[NYEARS];//Pointers to Arrays
    *balance=100.0f;//Savings in $'s
    intRate=6;        //Yearly Interest Rate
    *year=0;        //Initialize counter to 0
    *dYear=2020;    //Initialize date year to now
    
    //Process or map Inputs to Outputs
    savings(balance,year,dYear,NYEARS,intRate);
    
    //Display the Heading
    display(balance,year,dYear,NYEARS,intRate);

    //Exit stage right!
    return 0;
}

void display(float *balance,int *year,int *dYear,int NYEARS,float intRate){
    //Display the Heading
    float interest=*balance*intRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year  Balance Interest"<<endl;
    cout<<setw(4)<<*year<<setw(6)<<*dYear
            <<setw(9)<<*balance<<setw(9)<<interest<<endl;
    
    //Loop and Display for all years
    for(int cnt=1;cnt<NYEARS;cnt++){
        interest=*(balance+cnt)*intRate;
        cout<<setw(4)<<*(year+cnt)<<setw(6)<<*(dYear+cnt)
            <<setw(9)<<*(balance+cnt)<<setw(9)<<interest<<endl;
    }
}

void savings(float *balance,int *year,int *dYear,int NYEARS,float &intRate){
    //Process or map Inputs to Outputs
    intRate/=CNVDCML;
    
    //Loop and Calculate for all years
    for(int cnt=1;cnt<NYEARS;cnt++){
        *(year+cnt)=*(year+cnt-1)+1;
        *(dYear+cnt)=*(dYear+cnt-1)+1;
        *(balance+cnt)=*(balance+cnt-1)*(1+intRate);
    }
}