#include "/workspaces/CPP/ScenarioD/Vehicle.h"

#include <iostream>

/*
    use case 1: with variables of primitive types which are not pointers
*/

void Demo(){

    // n1 is a 'constant integer'
    const int n1 = 10;

    // grade is a 'constant character' 
    const char grade = 'A';

    // allowed 
    std::cout<< n1 <<"\t" << grade <<std::endl;

    // not allowed 

    // n1 = 20; since n1 is immutable(constant), it cannot be changed once initialized

    // grade = 'b'; since n1 is immutable(constant), it cannot be changed once initialized;
}

int main(){

    Demo();
    return 0;
}


/*
    Rule 1: const keyword is applied to the 'token' on its immediate left . If there is nothing to its left, const is applied to the token on its immediate right.

    Rule 2: while working with pointers, treat * symbol as a token too! (int * ptr;)
*/

