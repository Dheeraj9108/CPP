#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Employee.h"

class Manager : public Employee
{
private:

public:
    Manager() = default;

    void applyForLeaves(){
        std::cout<< "Manager applies for leave " <<std::endl;
    }
    void payTax(){
        std::cout<< "Manager 20% tax " <<std::endl;
    }
    // void Display(){
    //     std::cout<< "Manager Display Called" <<std::endl;
    // }
    ~Manager() {
        std::cout<<"Manager destroyed"<<std::endl;
    }
};



#endif // MANAGER_H
