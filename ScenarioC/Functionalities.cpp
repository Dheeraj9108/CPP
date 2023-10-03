#include "Functionalities.h"
#include "Bike.h"

void CreateCars(Vehicle* garage[3]){

    garage[0] = new Car("v1","BWM",VehicleType::CAR,870000.0f,CarType::SUV);
    garage[1] = new Bike("bk111","Bajaj",VehicleType::BIKE,31000.0f,31.0f,BikeType::SPORTS);
    garage[2] = new Car("v3","VOLVO XC 90",VehicleType::OTHER,127000000.0f,CarType::SEDAN);


    for(int i=0;i<3;i++){
        std::cout<< *(garage[i]) << std::endl;
    }
}


float AveragePrice(Vehicle* garage[3]){
    float total = 0.0f;
    for(int i=0;i<3;i++){
        total+=garage[i]->price();
    }

    return total;
}

void CallCalculateTax(Vehicle* garage[3])
{
        for(int i=0;i<3;i++){
            std::cout<< garage[i]->CalculateTax()<<std::endl;
        }
}

void FreeMemory(Vehicle* garage[3]){
    for(int i=0;i<3;i++){
        delete garage[i];
    }
}
