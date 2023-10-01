#include <iostream>
#include <numeric>
#include <array>

int main() {
    // Write C++ code here
    
    //raw array
    // int ids[100];
    
    //std:array (object oriented way; provides more specific errors)
    std::array<int,100> ids;

    std::iota(std::begin(ids),std::end(ids),10); // populating array
    
  
    
    // for(int i =0;i<100;i++){
    //     std::cout << ids[i] << std::endl;
    // }
    std::cout<<ids.data();
    std::cout << "Hello world!";

    return 0;
}