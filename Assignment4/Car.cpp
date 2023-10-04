#include <iostream>
#include "Car.h"

std::ostream &operator<<(std::ostream &os, const Car &rhs)
{
    os << "_car_Chassis_Number: " << rhs._car_Chassis_Number
       << " _car_brand: " << rhs._car_brand
       << " _car_Model: " << rhs._car_Model
       << " _car_Category: " << DisplayEnum(rhs._car_Category)
       << " _car_Price: " << rhs._car_Price
       << " _car_Seat_Count: " << rhs._car_Seat_Count
       << " _car_Fuel_Capacity: " << rhs._car_Fuel_Capacity;
    return os;
}

std::string DisplayEnum(CarType val)
{

    if (val == CarType::HATCHBACK)
    {
        return "HATCHBACK";
    }
    else if (val == CarType::SEDAN)
    {
        return "SEDAN";
    }
    else if (val == CarType::SPORTS)
    {
        return "SPORTS";
    }
    else
    {
        return "SUV";
    }
}

Car::Car(std::string _car_Chassis_Number, std::string _car_brand, std::string _car_Model, CarType _car_Category, float _car_Price, int _car_Seat_Count, int _car_Fuel_Capacity)
: _car_Chassis_Number(_car_Chassis_Number), _car_brand(_car_brand), _car_Model(_car_Model), _car_Category(_car_Category), _car_Price(_car_Price) , _car_Seat_Count(_car_Seat_Count), _car_Fuel_Capacity(_car_Fuel_Capacity)
{
}

Car::Car(std::string _car_Chassis_Number, std::string _car_brand, std::string _car_Model, float _car_Price)
:_car_Chassis_Number(_car_Chassis_Number), _car_brand(_car_brand), _car_Model(_car_Model),_car_Price(_car_Price)
{
}

float Car::operator+(Car &rhs)
{
   return _car_Price + rhs._car_Price;
}
