#pragma once
#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& s);
    ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    
    void honk();

    void pullOver();
};
