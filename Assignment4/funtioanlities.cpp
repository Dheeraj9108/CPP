#include "funtioanlities.h"

void createCars(Car* arr[5])
{

    arr[0] = new Car("c1","BMW","cm1",CarType::HATCHBACK,12345.02f,5,34);
    arr[1] = new Car("c2","MASERATTI","cm2",CarType::HATCHBACK,42345.02f,8,67);
    arr[2] = new Car("c3","BUGATTI","cm3",CarType::SEDAN,4245.02f,2,67);
    arr[3] = new Car("c4","MARUTI","cm4",CarType::SPORTS,423445.0f,5,25);
    arr[4] = new Car("c5","TOYOTA","cm5",CarType::SUV,4225.02f,5,21);

}

float FindAverageFuelCapacity(Car * arr[5])
{
    float total = 0.0f;

    for(int i=0;i<5;i++){

        total+= arr[i]->carFuel_Capacity();

    }

    return total/5;
}

int FindCountOfGivenBrand(Car *arr[5], CarType ctype)
{
    int cnt = 0;
    for(int i=0;i<5;i++){
        if(arr[i]->carCategory() == ctype){
            cnt++;
        }
    }
    
    return cnt;
}

void FindBestPassangerCar(Car *arr[5], CarType ctype)
{
    int max = -1;
    int idx = -1;
    for(int i=0;i<5;i++){
        if(arr[i]->carCategory() == ctype && arr[i]->carSeat_Count() > max){
            idx = i;
            max = arr[i]->carSeat_Count();  
        }
    }

    std::cout<< "Car Brand :- " << arr[idx]->carBrand() << " " << "Car Model :- " << arr[idx]->carModel() << std::endl;
}
