#include "Employee.h"

Employee::Employee(std::string _id, std::string _name, float _salary, Department _dept, Project* _project)
: _id(_id), _name(_name), _salary(_salary) , _dept(_dept), _project(_project)
{
    
}
