#include <iostream>

class TopClass{
    public :
    TopClass(std::string arg){
        std::cout << "Top class" << std::endl;
    }
};

class derived : public TopClass{

    public :

    derived():TopClass("default"){

    }

    derived(std::string arg):TopClass(arg){
        std::cout << "derived class" << std::endl;
    }
};

class Base : public derived{

    public :
    Base(std::string arg):derived(arg){
        std::cout<< "base"<<std::endl;
    }
};

int main(){


    Base b("default");
    return 0;
}