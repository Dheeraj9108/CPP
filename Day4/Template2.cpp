#include <iostream>
#include <list>
#include <memory>

//alias for data type

typedef std::list<std::string> ls;
// using ls = std::list<std::string>;

template <typename T>  // please make this as template class where T is the type name  // we need to specify the value of T
class Employee
{
private:
    T _skills;
    std::string _id;
    float _age;

public:
    Employee(
        T _skills,
        std::string _id,
        float _age
    ) : _skills(_skills), _id(_id),_age(_age){}
    ~Employee() {
        std::cout << "Employee with Id :" << _id << "is destroyed"<< std::endl;
    }

    // we cannot use same symbol (friend function symbol and class must be different)
    template <typename A>
    friend std::ostream &operator<<(std::ostream &os, const Employee<A> &rhs) {
        os << "_skills: ";
        for(std::string ele: rhs._skills){
            os << ele << "\t";
        }
        os << " _id: " << rhs._id
           << " _age: " << rhs._age;
        return os;
    }
    
   
    // friend std::ostream& operator<<(std::ostream& os ,const Employee &rhs){
    //     os<< " _id: " << rhs._id
        
    //     return os;
    // }


    
};

int main()
{
    // object of class Employee of list of strings
    ls skils = {"coding","AI","version control"};
    Employee<ls>* e1 = new Employee<ls>(skils,"emp101",28.2f);

    std::cout<<*e1<<std::endl;

    // std::unique_ptr<std::string>* ptr = new std::string[8]; 
}



/*
    Rule 1: if we want ability to use infinite type ; use template
    Rule 2: while writting template code we use the concept of template parameter <T> (one symbol fo every thing) for each type compile will create that many type of classes internaly
    Rule 3: before the class is compiled template parameters must be initialized (main).
    Rule 4: 
*/


// Debug steps

/**
 * (A) Add a break point
 * (B) debug config file 
 * (C) use -g for debugging
*/

// Java book :- Spring boot in action (manning publications)
// Angular bokk :- ng-book