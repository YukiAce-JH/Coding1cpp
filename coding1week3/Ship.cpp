#include "Ship.h"

ship::ship() {
	name = "SS Minnow";
	fuel = 50;
	type = FRIGATE;
}


void ship::status() {
	cout << "The good ship " << name << " has " << fuel << ".\n";
	cout << "The ship's type is ";

	switch (type) {
	case FIGHTER: cout << "Fighter.\n";
		break;
	case FRIGATE: cout << "Frigate.\n";
		break;
	case FREIGHTER: cout << "Freighter.\n";
		break;
	case CRUISER: cout << "Cruiser.\n";
		break;
	default: cout << "unknown.\n";
		break;
	}
}
void writeShipToFile(ship givenShip) {
	ofstream file("ship_classes.txt");
	if (!file.is_open()) {

		cout << "Ship Name:" << givenShip.getName() << ".\n";
		cout << "Fuel level:" << givenShip.getFuel() << ".\n";
		cout << "Ship Type:" << givenShip.getshipType() << ".\n";

		cout << "ya did it yipeee.\n";
		return;
	}
	file.close();
}