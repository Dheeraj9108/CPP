#include <iostream>
#include <list>

//alias for data type

class Employee
{
private:
    std::list<std::string> _skills;
    std::string _id;
    float _age;

public:
    Employee(
        std::list<std::string> _skills,
        std::string _id,
        float _age
    ) : _skills(_skills), _id(_id),_age(_age){}
    ~Employee() {
        std::cout << "Employee with Id :" << _id << "is destroyed"<< std::endl;
    }

    
};

int main()
{
    // object of class Employee of list of strings
    std::list<std::string> skils = {"coding","AI","version control"};
    Employee* e1 = new Employee(skils,"emp101",28.2f);
    std::cout<<e1<<std::endl;
}