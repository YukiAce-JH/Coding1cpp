#pragma once

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeShipToFile(ship givenShip);


enum shipType {FIGHTER, FRIGATE, FREIGHTER, CRUISER};

class ship
{

public:
	string name;
	int fuel;
	shipType type;

	ship();
	void status();

	ship(string n, int getFuel, string st) : name(), fuel(), type() {}

		string getName()const { return name; }
		int getFuel()const { return fuel; }
		string getshipType()const { return name; }
	
};


