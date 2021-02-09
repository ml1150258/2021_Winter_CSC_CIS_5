/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings for Retirement
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
#include <string.h>    //String Library
using namespace std;

int main(int argc, char argv[][10]) {
    string s1,s2,s3;
    
    s1="Jim";
    s2="Jill";
    s3="Jill";
    
    cout<<"String Comparison"<<endl;
    if(s1==s2){
        cout<<s1<<"="<<s2<<endl;
    }else{
        cout<<s1<<"!="<<s2<<endl;
    }
    
    if(s2==s3){
        cout<<s2<<"="<<s3<<endl;
    }else{
        cout<<s2<<"!="<<s3<<endl;
    }
    
    cout<<endl<<"Character Array Comparison"<<endl;
    char c1[]="Jim",c2[]="Jill",c3[]="Jill";
    
    if(!strcmp(c1,c2)){
        cout<<c1<<"="<<c2<<endl;
    }else{
        cout<<c1<<"!="<<c2<<endl;
    }
    
    if(!strcmp(c2,c3)){
        cout<<c2<<"="<<c3<<endl;
    }else{
        cout<<c2<<"!="<<c3<<endl;
    }

    return 0;
}

