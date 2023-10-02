// Online C++ compiler to run C++ program online
#include <iostream>

class Irender{  // now irender is interface or abstract class
    public :
        //pure virtual functions
        virtual void Draw() = 0;
        virtual void Update() = 0;
        virtual void DrawOptimized() = 0;
        virtual void fun(){
            std::cout<<"foo"<<std::endl;
        }
        // all these must be implemented by the class that inherits this class
};

class OPenGL : public Irender{
    
    public :
        void Draw() override{
            std::cout<<"Draw OPenGL"<<std::endl;
        }
        
        void Update() override {
            std::cout<<"Update OPenGL"<<std::endl;
        }
        
        void DrawOptimized() override {
            std::cout<<"Draw OPenGL Optimized"<<std::endl;
        }
};

int main() {

    //Irender* r = new Irender(); since the irender has pure virtual funtion without defination this cannot be instatiated
    Irender* r = new OPenGL();
    r->Draw();
    r->DrawOptimized();
    return 0;
}