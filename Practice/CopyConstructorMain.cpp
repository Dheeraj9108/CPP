#include "CopyConstructor.hpp"

int main() {
    
    
    
    // here both are pointing to same memory location hence when destructor is called for myArr1 it will deallocate the memory but since the myArr2 is also tring to delete same loc we get an error
    
    // so by default c++ copy constructor perform shallow copy
    // here we are poiting to same array but if we want to get new array then we should implement our own copy constructor to perform deep copy
    Array myArr1 ;
    
    // Array myArr2 = myArr1 ; //copy constructor
    
    myArr1.setData(0,10);
    
    Array myArr2 ;
    myArr2 = myArr1; // copy assignment operator
    myArr1.printArr();
    myArr2.printArr();
    
    
    // std::string str1 = "dheeraj";
    
    // std::string str2 = str1;
    
    // str2[2] = 't';
    
    // std::cout << &str1<<std::endl;
    // std::cout << &str2<<std::endl;

    return 0;
}