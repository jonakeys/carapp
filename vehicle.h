#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Vehicle
{
public:
    Vehicle(int weight, int length, int maxspeed, string name);
    ~Vehicle();
    int getWeight() const;
    void setWeight(int weight);
    int getLength() const;
    void setLength(int length);
    int getMaxSpeed() const;
    void setMaxSpeed(int maxspeed);
    string getName() const;
    void setName(string name);
    void printData();
    void saveToFile();
private:
    int itsWeight;
    int itsLength;
    int itsMaxSpeed;
    string itsName;
};

#endif
