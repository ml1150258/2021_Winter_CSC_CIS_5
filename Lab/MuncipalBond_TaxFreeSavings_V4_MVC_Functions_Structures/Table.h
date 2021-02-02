/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings with Structure
 */

#ifndef TABLE_H
#define TABLE_H

struct Table{
    int records;    //Number of Records
    float *balance; //Balance for each year
    int *year;      //Numbered Year
    int *dYear;     //Date Year
};

#endif /* TABLE_H */

