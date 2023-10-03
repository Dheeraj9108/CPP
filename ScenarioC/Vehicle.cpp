#include "Vehicle.h"
#include "VehicleType.h"
#include <iostream>

Vehicle::Vehicle(
    std::string id, 
    std::string brand, 
    VehicleType type, 
    float price) : _id(id), _brand(brand),_type(type), _price(price)
{}

Vehicle::Vehicle(
    std::string id, 
    std::string brand, 
    VehicleType type) : _id(id), _brand(brand),_type(type)
{}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _type: " << DisplayEnum(rhs._type)
       << " _price: " << rhs._price;
    return os;
}

std::string DisplayEnum(const VehicleType value)
{
    if(value == VehicleType::BIKE){
        return "BIKE";
    }else if (value == VehicleType::CAR){
        return "CAR";
    }else {
        return "OTHER";
    }
   return std::string();
}
