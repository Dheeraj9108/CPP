#include "functinalities.h"
#include <vector>
#include "CustomerType.h"

void CreateCustomer(Customer *customerContainer[3])
{
    customerContainer[0] = new Customer(1,"Dheeraj",CustomerType::VIP,150);
    customerContainer[1] = new Customer(2,"John",CustomerType::REGULAR,500);
    customerContainer[2] = new Customer(3,"Don",CustomerType::PREMIUM,1000);
}

std::vector<Customer *> find_Customer_Based_On_Customer_Type(Customer *customerContainer[3], std::string cType)
{
    CustomerType customerType ;
    if(cType == "REGULAR") customerType = CustomerType::REGULAR;
    else if(cType == "PREMIUM") customerType = CustomerType::PREMIUM;
    else customerType = CustomerType::VIP;

    std::vector<Customer*> cusContainer;
    for(int i=0;i<3;i++){
        if(customerContainer[i]->customerType() == customerType){
            cusContainer.push_back(customerContainer[i]);
        }
    }

    return cusContainer;
    
}

std::vector<Customer*> find_Customers_Based_On_Store_Credits(Customer *customerContainer[3])
{
    std::vector<Customer*> cusContainer;
    for(int i=0;i<3;i++){
        if(customerContainer[i]->customerStoreCredit() >= 100 && customerContainer[i]->customerStoreCredit()<=200){
            cusContainer.push_back(customerContainer[i]);
        }
    }
    return cusContainer;
}

float find_Average_Of_Customer_Store_Credits(Customer *customerContainer[3], std::string cType)
{
    CustomerType customerType ;
    if(cType == "REGULAR") customerType = CustomerType::REGULAR;
    else if(cType == "PREMIUM") customerType = CustomerType::PREMIUM;
    else customerType = CustomerType::VIP;

    float total = 0.0f;

    for(int i=0;i<3;i++){
        if(customerContainer[i]->customerType() == customerType){
            total += customerContainer[i]->customerStoreCredit();
        }
    }

    return total;

}