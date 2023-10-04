#include <iostream>

#include "Vehicle.h"
#include "VehicleType.h"

int main(){

    Vehicle v1("v1","Maruti",VehicleType::CAR,89000.0f);
    Vehicle v2("v2","Maruti",VehicleType::CAR,9000.0f);



    Vehicle* v3 = new Vehicle("v1","Maruti",VehicleType::CAR,89000.0f);
    Vehicle* v4 = new Vehicle("v2","Maruti",VehicleType::CAR,9000.0f);

    float ans = v1 + v2;
    std::cout<<ans<<std::endl;

    float res = (*v3) + (*v4);
    std::cout<<res<<std::endl;
    return 0;

}