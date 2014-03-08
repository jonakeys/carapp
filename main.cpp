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
    bool GO = true;
    int choice = 0;
    vector<Car> Autos;
    vector<Car>::iterator it;
    int weight, length, maxspeed;
    string name;
    
    while(GO) {
	cout << "(1) Voeg auto toe\n"
	     << "(2) Print informatie\n"
	     << "(3) Stoppen\n" 
	     << "Maak je keuze: ";
	cin >> choice;
	switch (choice) {
	case 1:
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    cout << "Naam: ";
	    getline(cin, name);
	    cout << "Gewicht(kg): ";
	    cin >> weight;
	    cout << "Lengte(m): ";
	    cin >> length;
	    cout << "Max snelheid(km/u): ";
	    cin >> maxspeed;
	    Autos.push_back(Car(weight, length, maxspeed, name));
	    break;
	case 2:
	    if(Autos.size() != 0) {
		for (it = Autos.begin(); it < Autos.end(); ++it) {
		    cout << endl;
		    it->printData();
		    cout << endl;
		}
	    }
	    else
		cout << "Er zijn nog geen auto's toegevoegd.\n";
	    break;
	case 3:
	    cout << "Tot ziens!\n";
	    GO = false;
	    break;
	default:
	    break;
	}
    }

    return 0;
}
