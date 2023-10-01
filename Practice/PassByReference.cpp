#include <iostream>


void fun(int& x){
    
    x = 99;
    
}

int main() {
    
    int x= 10;
    int *ptr = &x;
    std::cout<<x<<std::endl;
    fun(x);
    std::cout<<x<<std::endl;

    return 0;
}