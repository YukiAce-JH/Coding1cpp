#include "Filez.h"
#include "Ship.h"

int main() {
	cout << "Let's write some new files!\n";

	ReadFromFile();

	WriteToFile("Guilty Gear?\n");

	ship minnow;
	minnow.type = CRUISER;
	minnow.status();

	return 0;
}
