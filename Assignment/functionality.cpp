#include "Car.cpp"
#include <vector>

class Functionality{


    public :

        std::vector<Car*> carList;

        Functionality(){

            Car* c1 = new Car(CarType::SUV,123.45,"red","v1",20203,VehicleType::PRIVATE,new Insurance("i1",1234,Type::ZERO_DEBT));
            Car* c2 = new Car(CarType::HATCHBACK,990.45,"blue","v2",20203,VehicleType::COMMERCIAL,new Insurance("i2",2000,Type::ZERO_DEBT));
            Car* c3 = new Car(CarType::HATCHBACK,890.45,"blue","v2",20203,VehicleType::COMMERCIAL,new Insurance("i3",1000,Type::ZERO_DEBT));
    
            carList.push_back(c1);
            carList.push_back(c2);
            carList.push_back(c3);

        }

        std::vector<Car*> getCarListForInsuranceAboveThreshold(float amount){
            std::vector<Car*> iCarList;

            for(Car* x : carList){
                if(x->vehicleInsurancePlan->insuranceAmount > amount){
                    iCarList.push_back(x);
                }
            }

            return iCarList;
        }


        std::vector<Car*> getCarListBasedOnType(std::string vehicleType){
            std::vector<Car*> iCarList;
            VehicleType vType;

            if(vehicleType == "COMMERCIAL"){
                vType = VehicleType::COMMERCIAL;
            }else if(vehicleType == "PRIVATE"){
                vType = VehicleType::PRIVATE;
            }else{
                vType = VehicleType::SPECIAL_PURPOSE;
            }

            for(Car* x : carList){
                if(x->vehicleType == vType){
                    iCarList.push_back(x);
                }
            }

            return iCarList;
        }


        std::vector<Car*> getPrivateCars(){
            std::vector<Car*> iCarList;
            for(Car* x : carList){
                if(x->vehicleType == VehicleType::PRIVATE){
                    iCarList.push_back(x);
                }
            }

            return iCarList;

        }


        float getAvg(){
            float sum;
            int cnt = 0;
            for(Car* x : carList){
                if(x->vehicleType == VehicleType::COMMERCIAL && x->vehicleRegisteration == 20203 && x->vehicleInsurancePlan->_insuranceType == Type::ZERO_DEBT){
                    cnt++;
                    sum+=x->vehicleInsurancePlan->insuranceAmount;
                }
            }
            return sum/cnt;
        }

};
