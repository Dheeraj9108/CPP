#include <iostream>
#include "functionality.cpp"
#include <vector>


std::ostream& operator<<(std::ostream& os, Car& obj){

    os << obj.carColor << " " << obj.carPrice << " " << std::endl;

    return os;

}


int main(){


    Functionality* fun = new Functionality();


    // [1] functionality

    float _insuranceAmount;
    
    std::cout<<"Enter the Insurance Amount"<<std::endl;

    std::cin>>_insuranceAmount;

    std::vector<Car*> carList = fun->getCarListForInsuranceAboveThreshold(_insuranceAmount);

    if(carList.size() == 0){
        std::cout<<"No Car Found"<<std::endl;
    }else{
        for(Car* car : carList){
            std::cout<< *car ;
            //or
            // std::cout<<(car->carColor);
        }
    }

//---------------------------------------------------------------------------------------------------

    // [2] functionality

    // std::string vehicleType;

    // std::cout<<"Enter the vechicle type"<<std::endl;
    // std::getline(std::cin,vehicleType);

    // std::vector<Car*> carList = fun->getCarListBasedOnType(vehicleType);

    // if(carList.size() == 0){
    //     std::cout<<"No Car Found"<<std::endl;
    // }else{
    //     for(Car* car : carList){
    //         std::cout<<(car->carPrice)<<std::endl;
    //     }
    // }

//---------------------------------------------------------------------------------------------------
    
    // [3] funtionality
    // std::vector<Car*> carList = fun->getPrivateCars();
    // if(carList.size() == 0){
    //     std::cout<<"No Car Found"<<std::endl;
    // }else{
    //     for(Car* car : carList){
    //         std::cout<<(car->carColor)<<std::endl;
    //     }
    // }

//---------------------------------------------------------------------------------------------------

    // [4] functionality

    // float avg = fun->getAvg();
    // std::cout<<"AVG :- "<<avg<<std::endl;

//---------------------------------------------------------------------------------------------------

    return 0;
}