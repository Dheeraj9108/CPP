#include <iostream>

int main(){
    int n1 = 10;
    int n2 = 20;
    // const is applied on 'int ' not on 'int*'
    // ptr is a consttant pointer to any integer
    const int * const  ptr = &n1;

    //int const  * ptr = &n1; case 5 integer constant pointer not constant

    //since pointer is not constant, its 'content' can be changed,
    //so address inside ptr can be changed
    //*ptr = n2;// works

    

    //ptr = &n2 wont work since ptr itself is constant

    //since int part is constant, I cannot use pointer to chanhge n1's value
    // *ptr = 100; // not allowed
    return 0;
}