// Online C++ compiler to run C++ program online
#include <iostream>

class Vector3f{
    
    public :
        Vector3f(){
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
            
        }
        
        //+
                            //rhs.x,y,z not modifiable
        Vector3f operator+(const Vector3f& rhs) const {
                                                //^x,y,z not modifiable
            Vector3f res;
            res.x = x+rhs.x;
            res.y = y+rhs.y;
            res.z = z+rhs.z;
            
            return res;
        }
        
        //prefix
        Vector3f operator++(){
            x++;
            y++;
            z++;
            
            return *this;
        }
        
        //postfix
        // (int) purpose is just to distinguish between pre and post increment
        Vector3f operator++(int){
            Vector3f old = *this;
            x++;
            y++;
            z++;
            
            return old;
        }
        
        //heighest priority
         bool operator==(const Vector3f& rhs){
             if(x == rhs.x && 
                y == rhs.y &&
                z == rhs.z ) {
                    return true;
            }
            return false;
        }
        
       
        
        float x,y,z;
    
};

//  output stream
std::ostream& operator<<(std::ostream& os, Vector3f& obj){
    
    os<<obj.x<<" "<<obj.y<<" "<<obj.z<<std::endl;
    
    return os;
    
}

// good practice
 bool operator==(const Vector3f& lhs , const Vector3f& rhs){
             if(lhs.x == rhs.x && 
                lhs.y == rhs.y &&
                lhs.z == rhs.z ) {
                    return true;
            }
            return false;
        }

int main() {
    // Write C++ code here
    
    // floating point numbers have problem with comparision eg:- v1.x = 0.99f and v2.x = 1.0f still they will equal 
   Vector3f v1;
    v1.x = 1.0f;
    v1.y = 2.0f;
    v1.z = 3.0f;
   
   Vector3f v2;
   v2.x = 1.0f;
    v2.y = 2.0f;
    v2.z = 3.0f;
    
    std::cout<<(v1==v2)<<std::endl;
   
   Vector3f v3 ;
   v3 = v1+v2;
    // v1 = v2+v1;
   
//   std::cout<<v3.x<<v3.y<<v3.z;

    // ++v1;
    v1++;
    
    std::cout<<v1.x<<v1.y<<v1.z<<std::endl;
    
    std::cout<<v1;
   
    return 0;
}