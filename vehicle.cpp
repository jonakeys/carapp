#include "vehicle.h"

Vehicle::Vehicle(int weight, int length, int maxspeed, string name) {
    setWeight(weight);
    setLength(length);
    setMaxSpeed(maxspeed);
    setName(name);
}
Vehicle::~Vehicle() {};
int Vehicle::getWeight() const { return itsWeight; }
void Vehicle::setWeight(int weight) { itsWeight = weight; }
int Vehicle::getLength() const { return itsLength; }
void Vehicle::setLength(int length) { itsLength = length; }
int Vehicle::getMaxSpeed() const { return itsMaxSpeed; }
void Vehicle::setMaxSpeed(int maxspeed) { itsMaxSpeed = maxspeed; }
string Vehicle::getName() const { return itsName; }
void Vehicle::setName(string name) { itsName = name; }
void Vehicle::printData() {
    cout << "Informatie van " << getName() << ":\n"
	 << "Gewicht:\t" << getWeight() << " kg\n"
	 << "Lengte:\t\t" << getLength() << " m\n"
	 << "Max snelheid:\t" << getMaxSpeed() << " km/u\n";
}
