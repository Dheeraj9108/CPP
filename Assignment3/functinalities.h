#ifndef FUNCTINALITIES_H
#define FUNCTINALITIES_H

#include <iostream>
#include "Customer.h"
#include <vector>

void CreateCustomer(Customer* customerContainer[3]);

//std::vector<Customer*> find_Customer_Based_On_Customer_Type(Customer* customerContainer[3], std::string cType );
Customer** find_Customer_Based_On_Customer_Type(Customer* customerContainer[3], std::string cType );


// std::vector<Customer*> find_Customers_Based_On_Store_Credits(Customer* customerContainer[3]);
Customer** find_Customers_Based_On_Store_Credits(Customer* customerContainer[3]);


float find_Average_Of_Customer_Store_Credits(Customer* customerContainer[3], std::string cType );

#endif // FUNCTINALITIES_H
