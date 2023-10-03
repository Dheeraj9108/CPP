#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    VehicleType _type;
    float _price;
public:

    Vehicle() = default;
    Vehicle(
        std::string id,
        std::string brand,
        VehicleType type,
        float price
    );

    Vehicle(
        std::string id,
        std::string brand,
        VehicleType type
    );

    virtual float CalculateTax() = 0; //pure virtual function (known as Abstract method in Java)

    // default copy constructor 
    //no need to write , compiler will auto generate.
    Vehicle(const Vehicle&) = default;

    virtual ~Vehicle() {
        std::cout << "Vehicle with ID:" << _id << "is destroyed" << std::endl;
    }

    float price() const { return _price; }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
    
};


// I takes one enum value and prints its string form Based on the logic written inside the body

std::string DisplayEnum(const VehicleType value);

#endif // VEHICLE_H
