// Online C++ compiler to run C++ program online
#include <iostream>
class UDT{
    public :
    // avoid implicit (automatic) convertions
    explicit UDT(int);
    private :
    int m_variable;
};

UDT::UDT(int i){
    m_variable = i;
}
int main() {
    
    // different ways of obj initialization;
    // 1 
    UDT u1(500);
    
    //2
    // UDT u2 = 500;
    
    //3 used while explicit keyword is used (list initialization)
    UDT u3{500}; // alowed
    
    UDT u4{500.27f}; // not allowed

    return 0;
}