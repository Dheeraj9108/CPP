#include <iostream>

class Demo5
{
private:
    
public:
    Demo5() = default;
    void magic(){
        std::cout<< "something";
    }
    void display() const {
        std::cout << "this works";
    }
    ~Demo5() {}
};

int main(){
    const Demo5 e1; // no () if not data members ;; object on stack
    e1.display();
    // e1.magic(); // cannot call non-cost member function on a const object 
}