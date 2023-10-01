#include <iostream>


// returning address of a memory that will be deallocated when the returnMemory() scope is completed
int* returnMemory(){
    int result = 42;
    return &result;
}

int main(){
    
    // 1. nullptr dereference
    int *ptr = nullptr;

    *ptr = 42;

    // 2. memory leaks allocated but not deallocated
    int* array = new int[100];

    // 3. dangling pointer  A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer. 
    int* ptr = returnMemory();


    // double free (deallocating memory twice)
     int* x = new int;

     *x = 42;

     delete x;
     delete x;



}