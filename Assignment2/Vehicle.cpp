#include "Vehicle.h"
#include "Type.h"
#include <iostream>

Vehicle::Vehicle(
    std::string id, 
    std::string brand, 
    Type type, 
    float price) : _id(id), _brand(brand),_type(type), _price(price)
{

}

Vehicle::Vehicle(
    std::string id, 
    std::string brand, 
    Type type) : _id(id), _brand(brand),_type(type)
{

}
