/*
// Jesus hernandez Coding 1 spring week 3
// variables, logic, and randomness

#include <iostream>  // in out stream sends text to and from the console
#include <string> // allows us to use variables
#include <cstdlib>
#include <ctime>

using namespace std; // so we don't have to type "std::" all the time.

// this is where the program starts running
// it's a function that returns an integer
int main() {
	srand(time(0));

	cout << "here's a random number for you." << rand() << ".\n";

	cout << "7 divided by 2 = " << 7 / 2 << "with a remainder of " << 7 % 2 << ".\n";

	cout << "a random number between 1 and 10 (inclusive). " << (rand() % 10) + 1 << ".\n";

	// 1-10 inclusive could be 1-10
	// 1-10 exclusive could not be 1 or 10, but 2 to 9

	cout << "here are this week's grades for the class. (between 50 and 100).\n";
	int counter = 0;
	// while the test is true. keep looping
	// while (test) { code block }
	while (counter < 10) {
		counter += 1;
		cout << (rand() % 50) + 50 << "\n";

	}

	cout << "hello! what is your name?\n";
	string input;			 // create a variable to hold player's input
	cin >> input;			//assign input from console into variable

	cout << "hello " << input << ".\n";

	if (input == "Yuki") {
		cout << "what is the password?\n";
		cin >> input;
		if (input == "Koro") {					//nested if statement
			cout << "hellos master :3\n";
		}
		else {
			cout << "HUUUAAGGHHH false! initiating self-destruct sequence!!! commencing the deletion of system 32!\n";
			return 0;							//quits out of the program early
		}
	}

	cout << "Are you ready to play a game?\n";
	// a character is a single character, anything you could type on your keyboard
	char playerCharInput = 'n';
	// a string is an ordered list of characters. you could say it's an array of characters.
	string name = "yuki";

	int totalTurns = 0;
	do {
		cout << "press 'y' to keep playing.\n";			//ask the player for input
		cin >> playerCharInput;							// get input
		totalTurns += 1;								/// explain increment and combined assignment operators
	} while (playerCharInput == 'y');					// test the input

	// all code insided a code block should be indented
	cout << "welcome to week 3!\n";
	cout << "we're talking about variables, logic, and Randomness today.\n";

	// variables are nicknames for data
	// creating a variation of the type integer.
	// named "age"
	// with the declared value of 22
	int age = 22; //declaring the variable. but not defining the variable.
	int score = 0;

	cout << "always initialized your variables.\n";

	// let's talk about camelcase
	// capitilase each new word after the first one.
	int playerOneFuelAmount = 42;
	
	// an integer is a whole number. positive or negative. between -2411 and +2411
	int oceanDepth = -234;

	// floats are point numbers. They have a decimal point
	// they're accurate to seven digits 
	//creating a constant cloat named "pi" with the value "3.1452"
	const float pi = 3.1452;

	double someNumberWithDecimalPlaces = 3456.75898455534;
	
	//your task. send these 4 numbers to the console. then run the program.
	cout << "player 1's fuel amount is " << playerOneFuelAmount << ".\n";

	cout << "player 1's age is " << age << ".\n";

	cout << "player 1's score is " << score << ".\n";

	cout << "player 1's depth is " << oceanDepth << ".\n";

	// when using random numbers don't forget to include c standard library
	// #include <cstdlib>			// for rand() and strand()
	// #include <ctime>				// for time()


} // end of main()

*/

/* #include <iostream>
using namespace std;

int main() {

	cout << "hello player! ready for some action?\n";
	int health = 10;
	int attack;
	int block;
	int turns = 0;
	char playerCharinput;

	cout << "You are but a whimsical and silly goblin fighting for goblin supremacy\n";
	cout << "you face your rival the clown goblin, it appears that you are left with no choice but to fight.\n";
	cout << "The clown goblin attacks.\n";
	while (true); {
		turns += 1;
		attack = (rand() % 5) + 0;
		block = (rand() % 5) + 0;
		cout << "you are assaluted with a balloon sword. what do you do? (atk/blk).\n";
		cin >> playerCharinput; 
		if (playerCharinput == 'atk') {
			cout << "you deal" << (rand() % 5) + 0 << ".\n";
		}
		if (playerCharinput == 'blk') {
			cout << "you block" << (rand() % 5) + 0 << ".\n";
		}
		if (block >= attack){
			cout << "you succesfully parry the clown's blade.\n";
		}
		else {
			health -= attack;
			if (health <= 0) {
				cout << "your health hit 0! everything goes black... GAME OVER!\n";
			}
		}
		if (turns >= 4) {
			cout << "the clown goblin implodes due to feeling inferior to your silliness! Victory is yours!\n";
			return 0;
		}
		cout << "you are at" << health << "continue?\n";
		while (1 == false) {
			cin >> playerCharinput;
			if (playerCharinput == 'y'||'yes') {
				0 == true;
			}
			else if (playerCharinput == 'n' || 'no') {
				cout << "invalid input. continue? (y/n)";
			}
		}
	}
}
*/