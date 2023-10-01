#ifndef COPYCONSTRUCTOR_HPP
#define COPYCONSTRUCTOR_HPP

class Array{
    public :
        Array();
        ~Array();
        
        //copy constructor
        Array(const Array &rhs);
        
        //Copy assignment operator 
        //Object is already constructed we are just making copy later (myArr2 = myArr1)
        
        Array& operator=(const Array& rhs);
        
        void printArr();
        
        void setData(int idx,int val);
    private :
        int* data;
};

#endif // COPYCONSTRUCTOR_HPP
