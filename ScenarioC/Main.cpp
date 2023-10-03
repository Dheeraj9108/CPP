#include <iostream>
#include "Car.h"
#include "Functionalities.h"

int main(){
    //3 locations reserved ; each location can stroe 8 bytes
    // Car* arr[3]={nullptr,nullptr,nullptr};
    Vehicle* arr[3]; 
    // int* a = new int[10];
    // std::cout<<sizeof(arr)<<std::endl; 
    // std::cout<<sizeof(a)<<std::endl;  

    // std::cout<<arr[1]<<std::endl;
    CreateCars(arr);
    std::cout<<AveragePrice(arr)<<std::endl;
    CallCalculateTax(arr);
    FreeMemory(arr);

    std::cout<<arr;
    return 0;
    
}
