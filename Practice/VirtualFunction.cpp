// DYNAMIC METHOD DISPATCHING
#include <iostream>

class Base{
    
    public :
        Base(){
            std::cout<<"Base con"<<std::endl;
        }
        ~Base(){
            std::cout<<"Base des"<<std::endl;
        }
        
        virtual void fun(){  // by defaul this will be called unlike java child fun will be called. 
            std::cout<<"Int Base fun" << std::endl;
        }
    
};


class Derived : public Base{
    
    public :
        Derived(){
            std::cout<<"Derived con"<<std::endl;
        }
        ~Derived(){
            std::cout<<"Derived des"<<std::endl;
        }
        void fun() override { // if want this function to be called instead of parent class fun then use override and put virtual in parent class fun ; but its not neccesary to put ovverride keyword.
            std::cout<<"Int Derived fun" << std::endl;
        }
    
};
int main() {
    // Write C++ code here
    Base* d = new Derived(); // only in this case above this are required ; even if include no thing will happen for below cases
    // Base* b = new Base(); output :- in base fun
    // Derived* d = new Derived() ;  output :- in drived fun 
    //(*d).fun();
    //or 
    d->fun();
    
    // we can also explicity call base fun by
    d->Base::fun();
    
    delete d;

    return 0;
}