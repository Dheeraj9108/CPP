#include <iostream>
#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"


// A) developer makes a container of objects is copied when create objects is called from CreateObject function to main function
// B) user create an empty container. User Passes its reference to the fuction developer access this reference puts the Object directly in that container


// printing arr
std::ostream& operator<<(std::ostream& os, Vehicle* arr[3]){
    for(int i=0;i<3;i++){
        os<<"Vehicle ID :-" + arr[i]->id()<<" "<<"Vehicle brand :- " + arr[i]->brand()<<" "<<"Vehicle Price :- "<<arr[i]->price()<<std::endl;
    }

    return os;
} 


int main()
{

    Vehicle* arr[3];
    CreateObjects(arr);
    std::cout<<arr<<std::endl;
    std::cout<<"Avg Price :- "<<AveragePrice(arr)<<std::endl;
    return 0;
    
}