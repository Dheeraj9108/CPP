#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "CustomerType.h"

class Customer
{
private:
    int _customer_id;
    std::string _customer_name;
    CustomerType _customer_type;
    int _customer_store_credit;

public:

    Customer(
        int _customer_id,
        std::string _customer_name,
        CustomerType _customer_type,
        int _customer_store_credit
    );

    Customer(const Customer& obj) = default; 
    ~Customer() {}

    int customerId() const { return _customer_id; }
    void setCustomerId(int customer_id) { _customer_id = customer_id; }

    std::string customerName() const { return _customer_name; }
    void setCustomerName(const std::string &customer_name) { _customer_name = customer_name; }

    CustomerType customerType() const { return _customer_type; }
    void setCustomerType(const CustomerType &customer_type) { _customer_type = customer_type; }

    int customerStoreCredit() const { return _customer_store_credit; }
    void setCustomerStoreCredit(int customer_store_credit) { _customer_store_credit = customer_store_credit; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};


std::string DisplayEnum(const CustomerType obj);

#endif // CUSTOMER_H
