#include <iostream>


// compile time polymorphism
template<typename T>

void display(T arr[3]){
    for(int i=0;i<3;i++){
        std::cout<< "Address : "<<arr[i]<<std::endl;
    }
}

// auto can only be used as type inference not parameter type hence error and auto cannot be used with array declaration
// void fun(auto a){
//     std::cout<<"a "<<std::endl;
// }

class Car
{
private:
    /* data */
public:
    Car(/* args */) {}
    ~Car() {}
};

class Employee
{
private:
    /* data */
public:
    Employee(/* args */) {}
    ~Employee() {}
};


int main(){

    Car* car[3];
    Employee* emp[3];

    for(int i=0;i<3;i++){
        emp[i] = new Employee(); 
        car[i] = new Car();
    }

    display(car);  //display<Car*>(car)  older versions
    display(emp);  //display<Emp*>(emp)  older versions

    // fun(10);
    return 0;
}