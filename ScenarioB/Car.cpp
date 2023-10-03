#include "Car.h"

Car::Car(
    std::string id,
    std::string brand,
    VehicleType type,
    float price,
    CarType carType) : Vehicle(id, brand, type, price), _car_type(carType) {}


Car::Car(
    std::string id,
    std::string brand,
    VehicleType type,
    CarType carType) : Vehicle(id, brand, type), _car_type(carType) {}

float Car::CalculateTax()
{
    return 0.1f * price();
}