#include <iostream>
#include "VehicleType.h"
#include "Insurance.cpp"

class Vehicle
{
public:
    std::string vehicleId;
    int vehicleRegisteration;
    VehicleType vehicleType;
    Insurance* vehicleInsurancePlan;
public:
    Vehicle(std::string vehicleId,int vehicleRegisteration,VehicleType vehicleType,Insurance* vehicleInsurancePlan) : vehicleId(vehicleId), vehicleRegisteration(vehicleRegisteration),vehicleType(vehicleType),vehicleInsurancePlan(vehicleInsurancePlan){}
    ~Vehicle() {}
};