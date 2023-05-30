#ifndef BICYCLE_H
#define BICYCLE_H

#include "Vehicle.h"

class Bicycle : public Vehicle
{
public:
    void startEngine() override;
};

#endif