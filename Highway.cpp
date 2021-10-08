#include "Highway.h"
#include "Car.h"
#include "SemiTruck.h"
#include "Motorcycle.h"

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    if( auto* car = dynamic_cast<Car*>(v) )
    {
        car->closeWindows();
    }
    else if( auto* semiTruck = dynamic_cast<SemiTruck*>(v) )
    {
        semiTruck->honk();
    }
    else if( auto* motorcycle = dynamic_cast<Motorcycle*>(v) )
    {
        motorcycle->lanesplitAndRace(100);
    }
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    if( auto* car = dynamic_cast<Car*>(v) )
    {
        car->tryToEvade();
    }
    else if( auto* semiTruck = dynamic_cast<SemiTruck*>(v) )
    {
        semiTruck->pullOver();
    }
    else if( auto* motorcycle = dynamic_cast<Motorcycle*>(v) )
    {
        motorcycle->tryToEvade();
    }
    /*
    depending on the derived type, call the member function that tries to evade the cops. 

    trucks pull over, but cars and bikes try to evade!!
    */
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}
