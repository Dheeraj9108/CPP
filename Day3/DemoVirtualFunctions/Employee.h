#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
private:

public:
    Employee() =  default;

    void applyForLeaves(){
        std::cout<< "Employee applies for leave " <<std::endl;
    }
    virtual void payTax(){
        std::cout<< "Employee 15% tax " <<std::endl;
    }
    virtual void Display(){
        std::cout<< "Employee Display Called" <<std::endl;
    }
    virtual ~Employee() {
        std::cout<<"Employee destroyed"<<std::endl;
    }
};

#endif // EMPLOYEE_H
