#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _type;

public:

   // Vehicle() = delete;                 // disabled default construcotr

    Vehicle(const Vehicle &) = default; // default copy constructor

    Vehicle(
        std::string _id,
        std::string _brand,
        VehicleType _type,
        float _price
    ) ;

    float CalculateTax();
    float CalculateTax(float tax_percentage);
    float CalculateTax(float cgst, float sgst);

    ~Vehicle()
    {
        std::cout << "Vehicle with ID:" << _id << "is destroyed" << std::endl;
    }

    // e1 + e2
        // name of the funtion
    //e1.magic(e2);
    float operator+ (Vehicle e2) {
        
        _price + e2.price();

        //current object's price PLUS passed objects price
        return this->price() + e2.price();

    }

    float operator+ (Vehicle* e2) {
        
        _price + e2->price();

        //current object's price PLUS passed objects price
        return this->price() + e2->price();

    }


    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
};

std::string DisplayEnum(VehicleType val);

#endif // VEHICLE_H
