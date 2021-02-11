/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 9th, 2021, 10:30 AM
 * Purpose:  Mark Sort with a Class
 */


#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>
using namespace std;

class Array{
    private:
        unsigned int size;
        int *data;
    public:
        void setSize(int s){
            if(s>=1&&s<=1000)size=s;
            else size=2;
        }
        void setData(int indx,int val){
            if(indx>=0&&indx<=size){
                data[indx]=val;
            }
        }
        void iniData(){
            if(size>=1&&size<=1000){
                if(data==0){
                    data=new int[size];
                    for(int i=0;i<size;i++){
                        data[i]=0;
                    }
                }
            }
        }
        int getSize(){
            return size;
        }
        int getData(int indx){
            if(indx>=0&&indx<=size)return data[indx];
            else exit(-1);
        }
        ~Array(){
            delete [] data;
        }
};



#endif /* ARRAY_H */

