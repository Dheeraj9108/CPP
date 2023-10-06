#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"
#include "Project.h"
/*
    
    - function to create 3 objects in an array Als create three object of employee in a sperate array ; link one project to ne Employee.
        --> Input : 2 array (onr for Employee) (second for project)
        --> Output : void 

*/

void CreateObjects(Employee* arr1[3], Project* arr2[3]);



/*
    funtion to return the pointer to the employee with highrst _salary
*/

Employee* EmployeeWithHighestSalary(Employee* arr1[3]);

// function to return count of all Employee in the array whose _dept value matches with the second parameter pased to this function.

int CountEmployeWithGivenDepartment(Employee* arr1[3], Department dtype);

// find the avg _budget for all the project.

float AverageBudget(Project* arr1[3]);

void FreeMemory(Employee* arr1[3]);

#endif // FUNCTIONALITIES_H
