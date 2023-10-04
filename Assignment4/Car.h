#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "CarType.h"

class Car
{
private:
    std::string _car_Chassis_Number;
    std::string _car_brand;
    std::string _car_Model;
    CarType _car_Category;
    float _car_Price;
    int _car_Seat_Count;
    int _car_Fuel_Capacity;

public:
    Car() = delete;

    Car(
        std::string _car_Chassis_Number,
        std::string _car_brand,
        std::string _car_Model,
        CarType _car_Category,
        float _car_Price,
        int _car_Seat_Count,
        int _car_Fuel_Capacity
    );

    Car(
        std::string _car_Chassis_Number,
        std::string _car_brand,
        std::string _car_Model,
        float _car_Price
    );

    Car(const Car& rhs) = default;

    float operator+(Car& rhs);
    

    ~Car() {}

    std::string carChassis_Number() const { return _car_Chassis_Number; }
    void setCarChassis_Number(const std::string &car_Chassis_Number) { _car_Chassis_Number = car_Chassis_Number; }

    std::string carBrand() const { return _car_brand; }
    void setCarBrand(const std::string &car_brand) { _car_brand = car_brand; }

    std::string carModel() const { return _car_Model; }
    void setCarModel(const std::string &car_Model) { _car_Model = car_Model; }

    CarType carCategory() const { return _car_Category; }
    void setCarCategory(const CarType &car_Category) { _car_Category = car_Category; }

    float carPrice() const { return _car_Price; }
    void setCarPrice(float car_Price) { _car_Price = car_Price; }

    int carSeat_Count() const { return _car_Seat_Count; }
    void setCarSeat_Count(int car_Seat_Count) { _car_Seat_Count = car_Seat_Count; }

    int carFuel_Capacity() const { return _car_Fuel_Capacity; }
    void setCarFuel_Capacity(int car_Fuel_Capacity) { _car_Fuel_Capacity = car_Fuel_Capacity; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};


std::string DisplayEnum(CarType val);

#endif // CAR_H
