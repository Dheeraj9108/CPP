#include <iostream>

int main(){
    int n1 = 10;
    int n2 = 20;
    // const is applied on 'int ' not on 'int*'
    // ptr is a pointer to a CONSTANT integer
    const int* ptr = &n1;

    //since pointer is not constant, its 'content' can be changed,
    //so address inside ptr can be changed
    ptr = &n2;

    //since int part is constant, I cannot use pointer to chanhge n1's value
    // *ptr = 100; // not allowed
    return 0;
}