#ifndef VOLTAGEARRAY_HPP
#define VOLTAGEARRAY_HPP

#include <iostream>
using namespace std;

class VoltageArray {
protected:
    double* volts;
    int nodes;
    double lineDrop;

public:
    VoltageArray();
    VoltageArray(int count, double initVal, double extraVal);
    VoltageArray(const VoltageArray& other);
    virtual ~VoltageArray();
    VoltageArray& operator=(const VoltageArray& other);

    double getVolt(int index) const;
    virtual double netVoltage() const;
};

#endif
