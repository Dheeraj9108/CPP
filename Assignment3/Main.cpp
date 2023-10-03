#include <iostream>
#include "Customer.h"
#include "functinalities.h"
#include <vector>


int main(){
     
    Customer* arr[3];
    CreateCustomer(arr);
    std::string cType;

    // [1] functionality
    std::cout<<"Enter customer type: ";
    getline(std::cin,cType);
    std::vector<Customer*> ans = find_Customer_Based_On_Customer_Type(arr,cType);

    for(int i=0;i<ans.size();i++){
        std::cout<<*(ans[i])<<std::endl;
    }

//----------------------------------------------------------------------------

    // [2] functionality
    std::vector<Customer*> res = find_Customers_Based_On_Store_Credits(arr);

    for(int i=0;i<ans.size();i++){
        std::cout<<*(res[i])<<std::endl;
    }

//----------------------------------------------------------------------------

    // [3] functionality
    std::cout<<"Enter customer type: ";
    getline(std::cin,cType);
    std::cout<<find_Average_Of_Customer_Store_Credits(arr,cType)<<std::endl;
//----------------------------------------------------------------------------
    return 0;
}