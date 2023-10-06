#include "Functionalities.h"
#include "Employee.h"
#include "Project.h"
#include "limits.h"

void CreateObjects(Employee *arr1[3], Project *arr2[3])
{
    arr2[0] = new Project("Proj1", 2, 1200);
    arr2[1] = new Project("Proj2", 23, 200);
    arr2[2] = new Project("Proj3", 5, 500);

    arr1[0] = new Employee("E1", "Dheeraj", 12345.45f, Department::DEVELOPMENT, arr2[0]);
    arr1[1] = new Employee("E2", "Niketh", 456.45f, Department::INTEGRATION, arr2[1]);
    arr1[2] = new Employee("E3", "Vinay", 4672.45f, Department::TESTING, arr2[2]);
}

Employee *EmployeeWithHighestSalary(Employee *arr1[3])
{

    float max = INT_MIN; // float max = arr1[0]->salary();
    int idx = -1;
    for (int i = 0; i < 3; i++)
    {
        if (arr1[0]->salary() > max)
        {
            max = arr1[i]->salary();
            idx = i;
        }
    }


    return arr1[idx];
}

int CountEmployeWithGivenDepartment(Employee *arr1[3], Department dtype)
{
    int cnt;
    for (int i = 0; i < 3; i++)
    {
        if (arr1[i]->dept() == dtype)
        {
            cnt++;
        }
    }
    return cnt;
}

float AverageBudget(Project *arr1[3])
{
    float avg = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        avg += arr1[i]->budget();
    }
    return avg / 3;
}

void FreeMemory(Employee *arr1[3])
{
    // delete the inner project pointer
    for (int i = 0; i < 3; i++)
    {
        delete arr1[i]->project();
        delete arr1[i];
    }
}
