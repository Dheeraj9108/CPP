#include <iostream>
#include "Employee.h"
#include "Manager.h"

int main(){

    Employee* arr[2];
    arr[0] = new Employee();
    arr[1] = new Manager();

    // Employee version of function is called because applyforleaves iv non-virtual
    arr[0]->applyForLeaves();
    arr[1]->applyForLeaves();

    //version specific to the type of object called because payTax is virtual
    arr[0]->payTax();
    arr[1]->payTax();

    //Employee version of function is called because there is no Display in Child class Manager
    arr[0]->Display();
    arr[1]->Display(); 

    delete arr[0];
    delete arr[1];

    return 0;
}
