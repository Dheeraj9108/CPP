#include <iostream>
#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"


// A)
// B) user create an empty container. User Passes its reference to the fuction developer access this reference puts the Object directly in that container

int main()
{

    Vehicle* arr[3];
    CreateObjects(arr);
    AveragePrice(arr);
    return 0;
    
}