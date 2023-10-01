// Online C++ compiler to run C++ program online
#include <iostream>
#include <array>
#include <vector>

// when arr is passed to function c++ will treat it as pointer hence sizeof(arr) = 8
// hence we need to send addtional arg i.e, size
// size_t :- It is a type that may express the size of any object in bytes



// to avoid all these we can dynamically sized array i.e, VECTOR

void fun(std::array<int,5> arr, size_t size){  

    // void fun(int* arr){----}
    
    // std::cout<<arr<< std::endl;
    std::cout<<sizeof(arr)<< std::endl;
    
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<< std::endl;
    }
}

void vec(const std::vector<int>& arr){ // passbyref   
    
}

int main() {
   
    // int arr[] = {1,2,3,4,5}; 
    std::array<int,5> arr = {1,2,3,4,5};
    std::vector<int> brr = {1,2,3,4,5};
    
    // size is  sizeof(int) * numberof Ele = 4*5 = 20
    std::cout<<sizeof(arr) << std::endl;
    // std::cout<< *arr << std::endl;
    fun(arr,sizeof(arr)/sizeof(int));
    vec(brr);
    return 0;
}