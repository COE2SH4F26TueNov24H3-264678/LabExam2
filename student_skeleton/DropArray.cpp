#include "DropArray.hpp"

DropArray::DropArray() : VoltageArray() {}

DropArray::DropArray(int count, double initVal, double extraVal) : VoltageArray(count, initVal, extraVal) {}

DropArray::DropArray(const DropArray& other) : VoltageArray(other) {}

DropArray::~DropArray() {}

DropArray& DropArray::operator=(const DropArray& other) {
    if (this != &other) {
        VoltageArray::operator=(other);
    }
    return *this;
}

// TODO 5: Override netVoltage() (Maximum 8 lines of implementation)
double DropArray::netVoltage() const {
    return static_cast<double>(0);
}
