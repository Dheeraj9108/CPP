#ifndef FUNTIOANLITIES_H
#define FUNTIOANLITIES_H

#include "Car.h"

void createCars(Car* arr[5]);

float FindAverageFuelCapacity(Car* arr[5]);

int FindCountOfGivenBrand(Car* arr[5],CarType ctype);

void FindBestPassangerCar(Car* arr[5], CarType ctype);

#endif // FUNTIOANLITIES_H
