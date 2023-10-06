#ifndef PROJECT_H
#define PROJECT_H

#include <iostream>

class Project
{
private:
    std::string _name;
    int _duration;
    float _budget;

public:
    Project() = delete;
    Project(
        std::string _name,
        int _duration,
        float _budget
    ) ;
    Project(const Project& rhs) = default;
    ~Project() {
        std::cout<<"Project "<< _name <<" Destroyed " << std::endl;
    }

    std::string name() const { return _name; }

    int duration() const { return _duration; }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Project &rhs);

};

#endif // PROJECT_H
