#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"

void CreateCars(Car* car[3]);

float AveragePrice(Car* car[3]);

void CallCalculateTax(Car* arr[3]); 

void FreeMemory(Car* arr[3]);

#endif // FUNCTIONALITIES_H
