#include "Project.h"
#include <iostream>

Project::Project(std::string _name, int _duration, float _budget)
: _name(_name) , _duration(_duration), _budget(_budget)
{
}
std::ostream &operator<<(std::ostream &os, const Project &rhs) {
    os << "_name: " << rhs._name
       << " _duration: " << rhs._duration
       << " _budget: " << rhs._budget;
    return os;
}
