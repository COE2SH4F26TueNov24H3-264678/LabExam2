#ifndef DROPARRAY_HPP
#define DROPARRAY_HPP

#include "VoltageArray.hpp"

class DropArray : public VoltageArray {
public:
    DropArray();
    DropArray(int count, double initVal, double extraVal);
    DropArray(const DropArray& other);
    virtual ~DropArray();
    DropArray& operator=(const DropArray& other);

    virtual double netVoltage() const override;
};

#endif
