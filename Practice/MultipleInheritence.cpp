// Online C++ compiler to run C++ program online
#include <iostream>

struct noncopy{
    noncopy()=default;
    noncopy(const noncopy& rhs) = delete;
    noncopy& operator=(const noncopy& rhs) = delete ;
};


struct Dog : public noncopy{
    virtual void Bark(){
        std::cout<<"Dog::Barking"<<std::endl;
    }
};

struct Golden : public Dog{
    virtual void Bark() override{
        std::cout<<"Golden::Barking"<<std::endl;
    }
};

struct BorderCollie : public Dog{
    virtual void Bark() override{
        std::cout<<"BorderCollie::Barking"<<std::endl;
    }
};

struct Coltriver : public Golden,BorderCollie{
    void Bark() override{
        std::cout<<"Coltriver::Barking"<<std::endl;
    }
};

int main() {
    
    Dog dog2 ;
    //Dog dog3 = dog2 ;// not allowed
    Dog dog3;
    
    //dog3 = dog2; //not allowed because even though it is of type dog it is derived from noncopy where the copy constructor and copy assignment operator is baned
    Dog* d = new Dog();
    d->Bark();
    Dog* golden = new Golden();
    golden->Bark();
    Dog* borderCollie = new BorderCollie();
    borderCollie->Bark();
    // Dog* coltriver = new Coltriver; // dimond problem
    // coltriver->Bark();
    
    // Dog dog;
    // dog.Bark();
    // Golden golden;
    // golden.Bark();
    // BorderCollie borderCollie;
    // borderCollie.Bark();
    // Coltriver coltriver;
    // coltriver.Bark();

    return 0;
}