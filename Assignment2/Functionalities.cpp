#include "Functionalities.h"

void CreateObjects(Vehicle* container[3])
{

    // Vehicle* v1 = new Vehicle("v1","BWM",Type::CAR,87000.0f);
    // Vehicle* v1 = new Vehicle("v1","BWM",Type::CAR,87000.0f);
    // Vehicle* v1 = new Vehicle("v1","BWM",Type::CAR,87000.0f);
    // for(int i=0;i<3;i++){
    //     container[i] = new Vehicle();  // == Vehicle* v1 = new Vehicle();
    // }

    // container 
    container[0] = new Vehicle("v1","BWM",Type::CAR,870000.0f);
    container[1] = new Vehicle("v2","DUCATTI",Type::BIKE,45000.0f);
    container[2] = new Vehicle("v3","VOLVO",Type::OTHER,127000000.0f);

}


// loop over all locations of array acces _price attribute add it total ; divide total by 3
float AveragePrice(Vehicle* container[3])
{

    float total = 0.0f;
    for(int i =0;i<3;i++){

        // total is added with previous total and price value from address at i position
        total+=container[i]->price();
        // total = (*container[i]).price();
    }

    return total;
}

