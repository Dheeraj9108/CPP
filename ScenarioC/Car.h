#ifndef CAR_H
#define CAR_H


#include "Vehicle.h"
#include "CarType.h"
#include <iostream>

class Car : public Vehicle
{
private:
    CarType _car_type;
public:

    // 4 + 1
    Car(
        std::string id,
        std::string brand,
        VehicleType type,
        float price,
         CarType carType);
    // 3 + 1
     Car(
        std::string id,
        std::string brand,
        VehicleType type,
         CarType carType);
    float CalculateTax() override;
    ~Car() {
        // calling getter private property of parent cannot be accessed in child
        std::cout << "Car with ID:" <<  id()  << "is destroyed" << std::endl;
    }

    CarType carType() const { return _car_type; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
    
};

std::string DisplayEnum(const CarType value);

#endif // CAR_H
