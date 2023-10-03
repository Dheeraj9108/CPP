#include "Customer.h"

Customer::Customer(int _customer_id, std::string _customer_name, CustomerType _customer_type, int _customer_store_credit)
: _customer_id(_customer_id), _customer_name(_customer_name), _customer_type(_customer_type) , _customer_store_credit(_customer_store_credit)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_customer_id: " << rhs._customer_id
       << " _customer_name: " << rhs._customer_name
       << " _customer_type: " << DisplayEnum(rhs._customer_type)
       << " _customer_store_credit: " << rhs._customer_store_credit;
    return os;
}

std::string DisplayEnum(const CustomerType val)
{
    if(val == CustomerType::PREMIUM){
        return "PREMIUM";
    }else if (val == CustomerType::REGULAR){
        return "REGULAR";
    }else {
        return "VIP";
    }

}
