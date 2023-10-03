#include "Functionalities.h"

void CreateObjects(Vehicle* container[3])
{
    for(int i=0;i<3;i++){
        container[i] = new Vehicle();  // == Vehicle* v1 = new Vehicle();
    }

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
