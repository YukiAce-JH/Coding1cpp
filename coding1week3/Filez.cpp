#include "Filez.h"

void WriteToFile(string givenString) {
	ofstream file("file.txt", ios::app);

	if (!file.is_open()) {
		cout << "could not open file.\n";
		return;
	}
	file << givenString;
	file.close();
}

void ReadFromFile() {
	string fileContents;

	ifstream file("file.txt");

	if (!file.is_open()) {
		cout << "could not open the file.\n";
	}
	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}
	file.close();
}