#include "Car.h"
#include "CarType.h"

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

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _car_type: " << DisplayEnum(rhs._car_type);
    return os;
}


std::string DisplayEnum(const CarType value)
{
    if(value == CarType::HATCHBACK){
        return "HATCHBACK";
    }else if (value == CarType::SEDAN){
        return "SEDAN";
    }else {
        return "SUV";
    }
   return std::string();
}

