/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 29, 2020, 10:40 AM
 * Purpose:  Convert Day to Date
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void read(unsigned char&, unsigned char&, unsigned short&);//Read inputs
int  width(char []);//Calculate the width of the day string -> d, or dd,
bool isLeap(unsigned short);//Is it a leap year
int  getCenturyValue(int);//Book/Wikipedia defined
int  getYearValue(int);//Book/Wikipedia defined
int  getMonthValue(int,int);//Book/Wikipedia defined
string dayOfWeek(int,int,int);//What day of the week
bool validDate(int,int,int);//Right days in the month?

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned char nMonth,nDay;
    unsigned short nYear;
    
    //Initialize the values
    read(nMonth,nDay,nYear);
    
    //Output the Day
    if(validDate(nMonth,nDay,nYear))
         cout<<"This day fell on a "<<dayOfWeek(nMonth,nDay,nYear)<<endl;
    
    //Exit stage right!
    return 0;
}


string dayOfWeek(int nMonth,int nDay,int nYear){
   //Defined by Savitch/Wikipedia
   int day=(nDay + getMonthValue(nMonth,nYear) + getYearValue(nYear)
                 + getCenturyValue(nYear))%7;
   switch(day){
       case 0:return "Sunday";
       case 1:return "Monday";
       case 2:return "Tuesday";
       case 3:return "Wednesday";
       case 4:return "Thursday";
       case 5:return "Friday";
       case 6:return "Saturday";
       default: return "The Twelfth of Never";
   }
}

int  getMonthValue(int nMonth,int nYear){
    //Defined by Savitch/Wikipedia
    return nMonth==1? (isLeap(nYear)?6:0):
           nMonth==2? (isLeap(nYear)?2:3):
           nMonth==3? 3:
           nMonth==4? 6:
           nMonth==5? 1:
           nMonth==6? 4:
           nMonth==7? 6:
           nMonth==8? 2:
           nMonth==9? 5:
           nMonth==10?0:
           nMonth==11?3:5;
}

int  getYearValue(int nYear){
    //Defined by Savitch/Wikipedia
    int temp=nYear%100;
    return temp/4+temp;
}

int  getCenturyValue(int nYear){
    //Defined by Savitch/Wikipedia
    return 2*(3-(nYear/100)%4);
}

bool isLeap(unsigned short nYear){
    //All equivalent outputs, use DeMorgans to Prove
    //return ((nYear%400==0)||((nYear%4==0)&&!(nYear%100==0)));
    //return ((nYear%400==0)||((nYear%4)||(nYear%100==0)));
    //return ((nYear%400)&&!((nYear%4)||(nYear%100==0)));
    return ((nYear%400)&&!((nYear%4)||!(nYear%100)));
}

void read(unsigned char& nMonth, unsigned char& nDay, unsigned short &nYear){
    //Declare Variables
    string month;
    const int SIZE=4;
    char day[SIZE];
    
    //Read in the Data
    cout<<"This program converts a Date to a Weekday"<<endl;
    cout<<"Input the date in this format \"Month Day, Year\""<<endl;
    cout<<"Input the date in this format like July 4, 2008 "<<endl;
    cin>>month>>day>>nYear;
    cout<<"Your input = "<<month<<" "<<day<<" "<<nYear<<endl;
    
    //Convert to numbers
    if     (month=="January")  nMonth=1;
    else if(month=="February") nMonth=2;
    else if(month=="March")    nMonth=3;
    else if(month=="April")    nMonth=4;
    else if(month=="May")      nMonth=5;
    else if(month=="June")     nMonth=6;
    else if(month=="July")     nMonth=7;
    else if(month=="August")   nMonth=8;
    else if(month=="September")nMonth=9;
    else if(month=="October")  nMonth=10;
    else if(month=="November") nMonth=11;
    else if(month=="December") nMonth=12;
    else{
        cout<<"Bad Month, try again"<<endl;
        exit(EXIT_FAILURE);
    }
    
    //Convert the string day to a number
    if(width(day)==2){
        nDay=day[0]-'0';//1's digit
    }else{
        nDay=(day[0]-'0')*10 + (day[1]-'0');//10's and 1's digit
    }
    
    //Output date in the form of MM\DD\YY
    //Include leading zeros
    cout<<month<<" "<<day<<" "<<nYear<<" = ";
    cout<<(nMonth<10?'0':'\0');
    cout<<static_cast<int>(nMonth)<<"\\";
    cout<<(nDay<10?'0':'\0');
    cout<<static_cast<int>(nDay)<<"\\";
    cout<<(nYear%100<10?'0':'\0');
    cout<<nYear%100<<endl;
}

int  width(char day[]){
    //Declare Variable and Initialize
    int count=0;
    //Determine length
    while(day[count++]!='\0');
    return --count;
}


bool validDate(int nMonth,int nDay,int nYear){
    if(nYear>12000){
        cout<<"Gregorian Correction Only Valid for 10,000 years"<<endl;
        exit(EXIT_FAILURE);
    }
    switch(nMonth){
        case 1:{
            if(nDay>31){
                cout<<"Too Many Days in January"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 2:{
            if(nDay>29){
                cout<<"Too Many Days in February"<<endl;
                exit(EXIT_FAILURE);
            }else if(nDay==29&&!isLeap(nYear)){
                cout<<"Too Many Days in February"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 3:{
            if(nDay>31){
                cout<<"Too Many Days in March"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 4:{
            if(nDay>30){
                cout<<"Too Many Days in April"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 5:{
            if(nDay>31){
                cout<<"Too Many Days in May"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 6:{
            if(nDay>30){
                cout<<"Too Many Days in June"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 7:{
            if(nDay>31){
                cout<<"Too Many Days in July"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 8:{
            if(nDay>31){
                cout<<"Too Many Days in August"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 9:{
            if(nDay>30){
                cout<<"Too Many Days in September"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 10:{
            if(nDay>31){
                cout<<"Too Many Days in October"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 11:{
            if(nDay>30){
                cout<<"Too Many Days in November"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        case 12:{
            if(nDay>31){
                cout<<"Too Many Days in December"<<endl;
                exit(EXIT_FAILURE);
            }
            return true;
        }
        default:{
            cout<<"How did you get here!?  You having a bad month"<<endl;
            return false;
        }
    }
}