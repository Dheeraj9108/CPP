#include "Functionalities.h"

void CreateCars(Car* car[3]){

    car[0] = new Car("v1","BWM",VehicleType::CAR,870000.0f,CarType::SUV);
    car[1] = new Car("v2","Maruti",VehicleType::BIKE,45000.0f,CarType::HATCHBACK);
    car[2] = new Car("v3","VOLVO XC 90",VehicleType::OTHER,127000000.0f,CarType::SEDAN);
}


float AveragePrice(Car* car[3]){
    float total = 0.0f;
    for(int i=0;i<3;i++){
        total+=car[i]->price();
    }

    return total;
}

void CallCalculateTax(Car *arr[3])
{
        for(int i=0;i<3;i++){
            std::cout<< arr[i]->CalculateTax()<<std::endl;
        }
}

void FreeMemory(Car* arr[3]){
    for(int i=0;i<3;i++){
        delete arr[i];
    }
}
