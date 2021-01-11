/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11, 2021, 11:23 AM
 * Purpose:  Purchase 5 items, Sum, Calculate the tax and then
 *           the total price out the door.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVDEC=100;//Conversion to Decimal

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   item,     //5 items to purchase in $'s
            purcSum,  //The sum of the 5 items purchased
            taxRate,  //The tax rate in %   
            taxCalc,  //Tax Calculation
            purcPrc;  //Purchase Price for all items in $'s
    char    count;    //Counter for the items
    
    //Initialize Variables
    taxRate=7.0f/CNVDEC;
    count=1;
    purcSum=0;
    
    //Map Inputs to Outputs -> Process
    //Format of the Dollar Items
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Input the 5 items to Purchase"<<endl;
    
    //Purchase item 1
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<setw(6)<<" = $"<<item<<endl;
    count=count+1;
    purcSum=purcSum+item;
    
    //Purchase item 2
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<setw(6)<<" = $"<<item<<endl;
    count=count+1;
    purcSum=purcSum+item;
    
    //Purchase item 3
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<setw(6)<<" = $"<<item<<endl;
    count=count+1;
    purcSum=purcSum+item;
    
    //Purchase item 4
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<setw(6)<<" = $"<<item<<endl;
    count=count+1;
    purcSum+=item;
    
    //Purchase item 5
    cin>>item;
    cout<<"The price of item "<<static_cast<int>(count)<<setw(6)<<" = $"<<item<<endl;
    purcSum+=item;
    
    //Final Calculation
    taxCalc=taxRate*purcSum;
    purcPrc=taxCalc+purcSum;
    
    //Display Inputs/Outputs
    cout<<"The total price before tax    = $"<<setw(6)<<purcSum<<endl;
    cout<<"The tax on the purchase price = $"<<setw(6)<<taxCalc<<endl;
    cout<<"The total cost                = $"<<setw(6)<<purcPrc<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}