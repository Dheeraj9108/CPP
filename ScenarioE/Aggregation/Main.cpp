#include <iostream>
#include "Functionalities.h"
#include "Department.h"

int main(){

    Employee* emp[3];
    Project* p[3];

    CreateObjects(emp,p);


    // [1] funtionality
    EmployeeWithHighestSalary(emp);
    // [2] functionality
    CountEmployeWithGivenDepartment(emp,Department::DEVELOPMENT);
    // [3] funtionality
    AverageBudget(p);


    FreeMemory(emp);
    return 0;
}