#include "Bike.h"

Bike::Bike(
    std::string id, 
    std::string brand, 
    VehicleType type, 
    float price ,
    float milage,
    BikeType btype
    ): Vehicle(id, brand, type, price), _bike_milage(milage),_bikeType(btype) 
{}

Bike::Bike(
    std::string id, 
    std::string brand, 
    VehicleType type, 
    float milage,
    BikeType btype
    ): Vehicle(id, brand, type), _bike_milage(milage),_bikeType(btype) 
{}

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _bike_milage: " << rhs._bike_milage
       << " _bikeType: " << DisplayEnum(rhs._bikeType);
    return os;
}


float Bike::CalculateTax(){
    return 0.05f * price();
}


std::string DisplayEnum(const BikeType value)
{
    if(value == BikeType::COMMUTE){
        return "COMMUTE";
    }else if (value == BikeType::ATV){
        return "SEDAN";
    }else {
        return "SPORTS";
    }
   return std::string();
}