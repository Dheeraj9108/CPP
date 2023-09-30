#include <iostream>

#include "Department.h"

class student
{
private:

    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
    Department _dept; //IT, CS,AI_ML

public:

    student()= default;
    student (
        int rnum,
        std::string name,
        float fees,
        char grade,
        Department dept
    ){
        this->_name  = name;
        this-> _fees = fees;
        this-> _roll_number = rnum;
        this->_grade = grade;
        this->_dept = dept;
    }
    ~student() {
        std::cout <<"Student withh roll number: "
            << this->_roll_number  
            << "is now destroyed\n";
    }
};

int main(){
    //stack
    student s1(909,"Dheeraj",89743.0f,'A',Department::CS);

    //heap
    student* s2 = new student(901,"Dheeraj",89743.0f,'A',Department::CS);
    delete s2;


    // arr of student 
    student arr[2] = {s1};
    
    //arr of student pointer
    student* heapArr[2] = {s2};
}   