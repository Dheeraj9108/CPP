#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(
    std::string id, 
    std::string brand, 
    VehicleType type, 
    float price) : _id(id), _brand(brand),_type(type), _price(price)
{}


std::ostream &operator<<(std::ostream &os, const Vehicle &rhs)
{
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " << DisplayEnum(rhs._type);
    return os;
}

std::string DisplayEnum(VehicleType val)
{

    if (val == VehicleType::BIKE)
    {
        return "BIKE";
    }
    else if (val == VehicleType::CAR)
    {
        return "CAR";
    }
    else
    {
        return "OTHER";
    }
}


float Vehicle::CalculateTax()
{
    return 0.0f;
}

float Vehicle::CalculateTax(float tax_percentage)
{
    return 0.0f;
}

float Vehicle::CalculateTax(float cgst, float sgst)
{
    return 0.0f;
}
