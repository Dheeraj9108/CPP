#include <iostream>
#include "CarType.hpp"
#include "Vehicle.cpp"

class Car : public Vehicle
{
public:
    CarType carType;
    float carPrice;
    std::string carColor; 
public:
    Car(CarType carType,float carPrice,std::string carColor,std::string vehicleId,int vehicleRegisteration, VehicleType vehicleType ,Insurance* vehicleInsurance): Vehicle(vehicleId,vehicleRegisteration,vehicleType,vehicleInsurance),carType(carType),carPrice(carPrice), carColor(carColor) {}
    ~Car() {}

};