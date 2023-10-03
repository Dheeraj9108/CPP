// A function to creat the 3 objects on the heap

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <iostream>
#include "Vehicle.h"
#include <vector>

// std::vector<Vehicle*> VehicleList;

// std::vector<Vehicle*>& functionToCreateThreeObjectsInHeap();


// Function to create 3 objects on the heap and store their address in the container array
void CreateObjects(Vehicle* container[3]);

// Function to find avg of price value of the object in the container array
float AveragePrice(Vehicle* container[3]);

#endif // FUNCTIONALITIES_H
