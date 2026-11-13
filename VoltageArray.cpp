#include "VoltageArray.hpp"

VoltageArray::VoltageArray() : volts(nullptr), nodes(0), lineDrop(0.2) {}

VoltageArray::VoltageArray(int count, double initVal, double extraVal) : volts(nullptr), nodes(count), lineDrop(extraVal) {
    if (nodes > 0) {
        volts = new double[nodes];
        for (int i = 0; i < nodes; ++i) {
            volts[i] = initVal + static_cast<double>(i);
        }
    } else {
        nodes = 0;
    }
}

// TODO 1: Complete the Copy Constructor (Deep Copy)
VoltageArray::VoltageArray(const VoltageArray& other) {
    (void)other;
}

// TODO 2: Complete the Destructor (Release DMA)
VoltageArray::~VoltageArray() {
}

// TODO 3: Complete the Copy Assignment Operator (Deep Copy + Self-Assignment Guard)
VoltageArray& VoltageArray::operator=(const VoltageArray& other) {
    (void)other;
    return *this;
}

double VoltageArray::getVolt(int index) const {
    if (index >= 0 && index < nodes && volts != nullptr) {
        return volts[index];
    }
    return static_cast<double>(0);
}

// TODO 4: Implement netVoltage() (Maximum 8 lines of implementation)
double VoltageArray::netVoltage() const {
    return static_cast<double>(0);
}
