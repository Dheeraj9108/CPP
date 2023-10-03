#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "Type.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;
public:

    Vehicle() = default;
    Vehicle(
        std::string id,
        std::string brand,
        Type type,
        float price
    );

    Vehicle(
        std::string id,
        std::string brand,
        Type type
    );

    // default copy constructor 
    //no need to write , compiler will auto generate.
    Vehicle(const Vehicle&) = default;

    ~Vehicle() {
        std::cout << "Vehicle with ID:" << _id << "is destroyed" << std::endl;
    }

    float price() const { return _price; }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    Type type() const { return _type; }
};

#endif // VEHICLE_H
