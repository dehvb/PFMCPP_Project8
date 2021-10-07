#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& s) : Vehicle (s) {}

void SemiTruck::tryToEvade()
{
    std::cout << "nah man not today" << std::endl;
}

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
