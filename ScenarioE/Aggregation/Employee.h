#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Department.h"
#include "Project.h"

class Employee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    Department _dept;
    Project *_project;

public:
    // now we cannot create object in stack
    Employee() = delete;
    Employee(const Employee &rhs) = default;
    Employee(
        std::string _id,
        std::string _name,
        float _salary,
        Department _dept,
        Project *_project);
    ~Employee()
    {
        std::cout << "Employee " << _id << "Destroyed" << std::endl;
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    Department dept() const { return _dept; }

    Project *project() const { return _project; }
};

#endif // EMPLOYEE_H
