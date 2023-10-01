// Online C++ compiler to run C++ program online
#include <iostream>
#include "CopyConstructor.hpp"

// class Array{
//     public :
Array::Array(){
            data = new int[10];
            for(int i=0;i<10;i++){
                data[i] = i*i;
            }
        }
Array::~Array(){
            delete[] data;
        }
        
        //copy constructor
Array::Array(const Array &rhs){
            data = new int[10];
            for(int i=0;i<10;i++){
                data[i] = rhs.data[i];
            }
        }
        
        //Copy assignment operator 
        //Object is already constructed we are just making copy later (myArr2 = myArr1)
        
Array& Array::operator=(const Array& rhs){
            
            if(&rhs == this){ // myArr2 = myArr2 dont do anything
                return *this;
            }
            delete[] data;
            data = new int[10];
            for(int i=0;i<10;i++){
                data[i] = rhs.data[i];
            }

            return *this;
        }
        
void Array::printArr(){
            for(int i=0;i<10;i++){
                std::cout<< data[i]<<std::endl;
            }
        }
        
void Array::setData(int idx,int val){
            data[idx] = val;
        }
    // private :
    //     int* data;
// };

