#include <iostream>
#include <functional>

//typedef keyword in C++ is used for aliasing existing data types, user-defined data types, and pointers to a more meaningful name.
typedef int (*op)(int, int);

int add(int x,int y){
    return x+y;
}

int mul(int x,int y){
    return x*y;
}

int main() {
    
    //function pointer to functions: int name(int , int)
    // 1 int (*op)(int x,int y);
    // 2 op operations;
    // 3 std::function<>
    std::function<int(int,int)> operations;
    operations = add;
    std::cout<<operations(2,3)<<std::endl;
    operations = mul;
    std::cout<<operations(2,3)<<std::endl;
    
  
    return 0;
}