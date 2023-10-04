#include <iostream>
#include "funtioanlities.h"
#include "Car.h"
#include "CarType.h"

int main(){

    Car* arr[5];
    createCars(arr);

    // [1] functionality
    std::cout<<"Average :- "<<FindAverageFuelCapacity(arr)<<std::endl;

    // [2] functionality
    std::cout<<"Count :- "<<FindCountOfGivenBrand(arr,CarType::HATCHBACK)<<std::endl;

    // [3] functionality
    FindBestPassangerCar(arr,CarType::HATCHBACK);
    return 0;   
}