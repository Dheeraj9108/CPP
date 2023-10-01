#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{ // user defined type

    public :
        //Actions
        Student();
        Student(std::string);
        ~Student();

        void PrintName();
    private :
        // Data
        std::string m_name; 
};

#endif // STUDENT_HPP
