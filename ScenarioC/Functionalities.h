#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"
#include "Bike.h"

void CreateCars(Vehicle* garage[3]);

float AveragePrice(Vehicle* garage[3]);

void CallCalculateTax(Vehicle* garage[3]); 

void FreeMemory(Vehicle* garage[3]);

#endif // FUNCTIONALITIES_H
