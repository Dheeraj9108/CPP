#include "Employee.h"

Employee::Employee(std::string _id, std::string _name, float _salary, Department _dept, Project *_project)
    : _id(_id), _name(_name), _salary(_salary), _dept(_dept), _project(_project)
{
}

std::ostream &operator<<(std::ostream &os, const Employee &rhs)
{
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _dept: " << DisplayEnum(rhs._dept)
       << " _project: " << *rhs._project;
    return os;
}

std::string DisplayEnum(Department dtype)
{
    if (dtype == Department::DEVELOPMENT)
    {
        return "DEPARTMENT";
    }
    else if (dtype == Department::INTEGRATION)
    {
        return "INTERGRATION";
    }
    else
    {
        return "TESTING";
    }
}
