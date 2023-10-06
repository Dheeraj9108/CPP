#include <iostream>
#include "Functionalities.h"
#include "Department.h"
#define SIZE 3

int main()
{

    Employee *emp[SIZE] = {};

    try
    {
        int size = sizeof(emp) / sizeof(emp[3]);

        std::cout << size << std::endl;

        CreateObjects(emp);

        // [1] funtionality
        std::cout << *EmployeeWithHighestSalary(emp) << std::endl;
        // [2] functionality
        std::cout << CountEmployeWithGivenDepartment(emp, Department::DEVELOPMENT) << std::endl;
        // [3] funtionality
        std::cout << AverageBudget(emp) << std::endl;

        FreeMemory(emp);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}