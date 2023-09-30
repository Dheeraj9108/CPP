#include <iostream>


class Student
{

private:
    int _id;
    std::string _name;
public:
    Student(int id, std::string name) {
        this->_id = id;
        this->_name = name;
    }
    ~Student
    () {}
};




class Engineer : public Student
{
private:
   std::string _cource_name;
public:
    Engineer(int id, std::string name, std::string cname)
    : Student(id,name) {
        this->_cource_name = cname;
    }
    ~Engineer() {}
};


// int main(){

//     Engineer* e1 = new Engineer(101,"Harshit","BTECH: CS");
//     Student* c1 = new Student(102,"harshit");

//     Student* arr[2] = {e1,c1};

// }



class DebitCard
{
private:
    int _cvv_number ;
    std::string _card_number;
public:
    DebitCard(int cvv, std::string number)
    : _card_number(number) , _cvv_number(cvv) {}

    ~DebitCard() {
        std::cout << "debit card destroyed\n";
    }
};


class Account
{
private:
    DebitCard* obj;
    std::string _name;
public:
    Account(DebitCard* card, std::string name) 
    :obj(card), _name(name){}

    ~Account() {}

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "obj: " << rhs.obj
           << " _name: " << rhs._name;
        return os;
    }

    

};

// call by value (copy)
// void magic(int data){
//     std::cout<<&data<< "\n";
//     std::cout<<data;
// }

//call by reference (address is aslo not copied) (no copy)
void magic(int& data){
    // std::cout<<&data<< "\n";
    std::cout<<data;
}

int main(){
    
    // method 1
    // Account* ac1 = new Account(new DebitCard(181,"1234567"),"Dheeraj");
    // std::cout << *ac1;

    // method 2 (wrong)
    // DebitCard* db = new DebitCard(201,"6781");
    
    // Account* ac2 = new Account(db,"Rohan");

    int n1 = 10;
    //magic(10); // 10 will be copied into scope of magic ; 10 is not allocated with memory
    magic(n1); // n1 will be copied into scope of magic
    std::cout<< n1;
    return 0;
}