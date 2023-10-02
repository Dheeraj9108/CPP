// Online C++ compiler to run C++ program online
#include <iostream>

// using friend function or class is considered as poor api design

class PrivateSecurityInfo{
    
    friend class UserdefinedType;  // now UserdefinedType can access private member of PrivateSecurityInfo
    private :
        int passcode;
};

class UserdefinedType{
    public :
       UserdefinedType(int val):privateMember(val){
           m_info.passcode = 10;
       } 
    //   friend void printPrivateMemberValiablesOfUDT(UserdefinedType instance);
    private :
    // can be public or private doesnt matter
    // friend :- allows access to all the private member variables
        friend void printPrivateMemberValiablesOfUDT(UserdefinedType instance);
        int privateMember;
        PrivateSecurityInfo m_info;
};

void printPrivateMemberValiablesOfUDT(UserdefinedType instance){
    std::cout<<instance.privateMember<<std::endl;
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!" << std::endl;
    
    UserdefinedType instance(10);
    printPrivateMemberValiablesOfUDT(instance);

    return 0;
}