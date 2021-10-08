#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& s) : Vehicle (s) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;

void SemiTruck::honk()
{
    setSpeed(65);
    std::cout << "doot doooot here I coooome" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << "g'morning officer, what's up?" << std::endl;
}
