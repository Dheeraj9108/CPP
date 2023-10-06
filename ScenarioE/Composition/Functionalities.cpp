#include "Functionalities.h"
#include "Employee.h"
#include "Project.h"
#include "limits.h"

#define SIZE 3

void CreateObjects(Employee *arr1[SIZE])
{
    arr1[0] = new Employee(
        "E1",
        "Dheeraj",
        12345.45f,
        Department::DEVELOPMENT,
        new Project("Proj1", 2, 1200));
    arr1[1] = new Employee("E2", "Niketh", 456.45f, Department::INTEGRATION, new Project("Proj2", 23, 200));
    arr1[2] = new Employee("E3", "Vinay", 4672.45f, Department::TESTING, new Project("Proj3", 5, 500));
}

bool CheckNull(Employee *arr[SIZE])
{

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] != nullptr)  
        {
            return false;
        }
    }

    return false;
}

Employee *EmployeeWithHighestSalary(Employee *arr1[SIZE])
{

    if (CheckNull(arr1))
    {
        throw std::runtime_error("Data is empty");
    }

    float max = INT_MIN; // float max = arr1[0]->salary();
    int idx = -1;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr1[0]->salary() > max)
        {
            max = arr1[i]->salary();
            idx = i;
        }
    }

    return arr1[idx];
}

int CountEmployeWithGivenDepartment(Employee *arr1[SIZE], Department dtype)
{
    int cnt = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr1[i]->dept() == dtype)
        {
            cnt++;
        }
    }
    return cnt;
}

float AverageBudget(Employee *arr1[SIZE])
{
    float avg = 0.0f;
    for (int i = 0; i < SIZE; i++)
    {
        avg += arr1[i]->project()->budget();
    }
    return avg / 3;
}

void FreeMemory(Employee *arr1[SIZE])
{
    // delete the inner project pointer
    for (int i = 0; i < SIZE; i++)
    {
        delete arr1[i]; // ensure this also deletes Project!!!
    }
}
