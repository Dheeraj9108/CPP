// Online C++ compiler to run C++ program online
#include <iostream>

class Dog{
    public :
        void Bark(){
            std::cout<<"Barking";
        }
};


class Husky:public Dog{
    
    public :
        Husky(){
            Bark();
        }
    
};

// private :- features of Dog are only accesible within the GoldenRetriver class
class GoldenRetriver:private Dog{
    
    public :
        GoldenRetriver(){
            Bark();
        }
    
};


int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    
    GoldenRetriver g1;
   

    return 0;
}