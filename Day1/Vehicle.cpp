#include <iostream>
#include "VehicleType.h"
#include "Insurance.cpp"

class Vehicle
{
private:
    std::string vehicleId;
    int vehicleRegisteration;
    VehicleType vehicleType;
    Insurance vehicleInsurancePlan;
public:
    Vehicle(/* args */) {}
    ~Vehicle() {}
};