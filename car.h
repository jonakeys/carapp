#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

class Car : public Vehicle
{
public:
    Car(int weight, int length, int maxspeed, string name);
    ~Car();
private:
};

#endif
