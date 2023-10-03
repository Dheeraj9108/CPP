// Online C++ compiler to run C++ program online
#include <iostream>

struct Entity{
    Entity(): name(" Dheeraj"),collection(nullptr), x(0), y(0) {}
    Entity() = default; // in this case {} will work and initialize to zero 
    std::string name;
    int* collection; // 0 :- nullptr initialization
    int x;
    int y;
};

int main() {
    
    Entity e{}; // defafult initialization (zero initialization without constructor) this works only if construct is not (user) defined ; if constructor is defined then we have to explicity initialize the variables;
    std::cout<<e.name<<std::endl;
    std::cout<<e.collection<<std::endl;
    std::cout<<e.x<<std::endl;
    std::cout<<e.y<<std::endl;
    return 0;
}   