#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    
    void honk();

    void pullOver();

    void tryToEvade() override;
};
