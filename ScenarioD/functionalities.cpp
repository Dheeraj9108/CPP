#include "functionalities.h"

void createObjects(Vehicle *arr[3])
{
    arr[0] = new Vehicle("v1", "BWM", VehicleType::CAR, 870000.0f);
    arr[1] = new Vehicle("v2", "DUCATTI", VehicleType::BIKE, 45000.0f);
    arr[2] = new Vehicle("v3", "VOLVO", VehicleType::OTHER, 127000000.0f);
}

float AveragePrice(Vehicle *arr[3])
{

    float total = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        total += arr[i]->price();
    }

    return total / 3;
}

void MinPriceDetails(Vehicle *arr[3])
{
    static Vehicle *result;
    float min = arr[0]->price();
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]->price() < min)
        {
            min = arr[i]->price();
            result = arr[i];
        }
    }

}