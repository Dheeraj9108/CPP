#include <iostream>

// since we are not creating this inside class we cannot use this operator hence we need to pass two parameters;
// std::ostream& operator<<(std::ostream os, ){

//     return os;
// }

class Complex
{
private:
    float _real;
    float _imag;
public:
    Complex(float real, float imag) : _real(real), _imag(imag){}
    ~Complex() {
        std::cout<<"Object destroyed" <<std::endl;
    }

    Complex operator+(Complex n2){
        float r = this->_real + n2._real;
        float i = this->_real + n2._real;

        Complex temp(r,i);
        return temp;
    }


    // friend function is a function that IS NOT A MEMBER OF THE CLASS BUT STILL HAS ACCESS TO PRIVATE ATTRIBUTES OF THE CLASS

    friend std::ostream &operator<<(std::ostream &os, const Complex &rhs) ;

};


std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
        os << "_real: " << rhs._real
           << " _imag: " << rhs._imag;
        return os;
    }