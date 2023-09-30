#include <iostream>
#include "Type.h"

class Insurance
{
private:
    std::string _insuranceId;
    float insuranceAmount;
    Type _insuranceType;
public:

    Insurance()=default;
    Insurance(
        std::string insuranceId,
        float insuranceAmount,
        Type insuranceType
    ) {
        this->_insuranceId = insuranceId;
        this->insuranceAmount = insuranceAmount;
        this->_insuranceType = insuranceType;
    }
    ~Insurance() {}
};