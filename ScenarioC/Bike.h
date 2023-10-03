#ifndef BIKE_H
#define BIKE_H

#include <iostream>
#include "BikeType.h"
#include "Vehicle.h"

class Bike : public Vehicle
{
private:
    float _bike_milage;
    BikeType _bikeType;

public:

    Bike(
        std::string id,
        std::string brand,
        VehicleType type,
        float price,
        float milage,
        BikeType btype);

    Bike(
        std::string id,
        std::string brand,
        VehicleType type,
        float milage,
        BikeType btype);

    float CalculateTax() override;

    ~Bike() {
        std::cout << "Bike with ID:" << id() << "is destroyed" << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);

    
};

std::string DisplayEnum(const BikeType value);


#endif // BIKE_H
