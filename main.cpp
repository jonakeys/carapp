/*
  Carapp
  by Jonathan van der Steege (08.03.2014)
  
  Application lets you input info of a car and print the output to the screen
 */

#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "vehicle.h"
#include "car.h"

using namespace std;

int main()
{
    // Initializing variables
    bool GO = true;
    int choice = 0;
    vector<Car> Autos;
    vector<Car>::iterator it;
    int weight, length, maxspeed;
    string name;
    
    // Main application loop
    while(GO) {
	cout << "(1) Voeg auto toe\n" // Menu
	     << "(2) Print informatie\n"
	     << "(3) Stoppen\n" 
	     << "Maak je keuze: ";
	cin >> choice;
	switch (choice) {
	case 1:
	    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Enter the info of the car-item
	    cout << "Naam: ";
	    getline(cin, name);
	    cout << "Gewicht(kg): ";
	    cin >> weight;
	    cout << "Lengte(m): ";
	    cin >> length;
	    cout << "Max snelheid(km/u): ";
	    cin >> maxspeed;
	    Autos.push_back(Car(weight, length, maxspeed, name)); // Add the info the vector Autos
	    break;
	case 2:
	    if(Autos.size() != 0) { // Print the data to the screen
		for (it = Autos.begin(); it < Autos.end(); ++it) {
		    cout << endl;
		    it->printData();
		    cout << endl;
		}
	    }
	    else
		cout << "Er zijn nog geen auto's toegevoegd.\n";
	    break;
	case 3: // Exit the application
	    cout << "Tot ziens!\n";
	    GO = false;
	    break;
	default:
	    break;
	}
    }

    return 0;
}
