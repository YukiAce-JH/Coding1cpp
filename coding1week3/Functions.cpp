// Jesus Hernandez coding 1 week 10
// functions today
/*// global values are dangerous
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const bool debug = false;

void sayHello(string greeting = "hello!") {
	cout << greeting << "\n";
}

void sayGoodbye(string farewell = "Goodbye!") {
	cout << farewell << "\n";
}

int triple(int givenNumber) {
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";

	return givenNumber * 3;
}

double triple(double givenNumber) {
	if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";

	return givenNumber * 3;
}

int randomNumberInRange(int min = 0, int max = 10) {

	if (min >= max) {
		cout << "I can't use these numbers.\n";
		return -1;
	}
	int range = (max - min) + 1;
	return rand() % range + min;

}

bool randomBool() {
	int number = rand() % 10;

	if (number > 4) 
		return true;
	else
		return false;
	
}

string getPlayerName(int minSize = 5, int maxSize = 15) {
	string input;

	do {
		cout << "what do ya go by stranger?\n";
		getline(cin, input);

		if (input.size() < minSize) {
			cout << "that's name's not good enough. aim with smthn that's five characters long.\n";
		}
		else if (input.size() > maxSize) {
			cout << "that's gonna be hard to remember...tell ya wat. change it to somtthin shorter than 13 characters.\n";
		}
		else {
			string greeting = "hello " + input + "!";
			sayHello(greeting);
			return input;

		}
	} while (true);
}

int main() {

	string input;

	cout << "min = what?: ";
	getline(cin, input);
	int min = stoi(input);

	cout << "max = what?: ";
	getline(cin, input);
	int max = stoi(input);

	cout << "a random number between " << min << " and " << max;

		cout << " is " << randomNumberInRange(min, max) << ".\n";
	sayHello();
	sayHello("welcome to purgatory. not oten I get visitors.");

	string playerName = getPlayerName();
	
	cout << "triple of twelve is " << triple(12) << ".\n";
	cout << "triple of eight is " << triple(8) << ".\n";
	cout << "triple of six is " << triple(6.56) << ".\n";

	cout << "guhhh\n";
	cout << "please enter your top three favorite foods: \n";

	string faveFoods[11];

	for (int i = 0; i < 3; i++) {
		cout << "fave food #" << i + 1 << ":";
		getline(cin, input);

		faveFoods[i] = input;
	}

	cout << "here are your favorite foods: \n";
	for (int i = 0; i < 3; i++) {
		cout << faveFoods[i] << ".\n";
	}

	sayGoodbye();
	sayGoodbye("Alright let's run it back.");
	//getline(cin, input)
	//	int min = stoi(input);
	// srand(time(0));
	// rand() % (max - min) + min;
	// int range = (max - min) + 1;
	// rand() % range + min;








	cin >> playerCharinput;

			if (playerCharinput == 'y' || 'yes') {
				0 == true;
			}
			else if (playerCharinput == 'n' || 'no') {
				cout << "invalid input. continue? (y/n)";
			}

			if (health -= attack);
			else {
				(health <= 0);
				cout << "your health hit 0! everything goes black... GAME OVER!\n";
				return 0;
			}





}*/
