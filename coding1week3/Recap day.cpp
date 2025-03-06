// Jesus Hernandez coding 1b Spring 2025
//recap day!

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// this is where the program starts
int main() {
	srand(time(0));
	bool debug = false;
	// have the computer greet you, then run the program.
	cout << "hello!\n";
	// have the player ask for your name
	// use getline to get the player's name
	cout << "what is your name?\n";
	string input;
	getline(cin, input);

	//use an if statement to check to see if the player's name is your name
	//use and if it is have the player say hello creator.
	if (input == "Yuki") {
		cout << "Hiya Yuki!\n";
		debug = true;
		if (debug) cout << "debug mode is on\n";
	}

	//otherwise (else) have the computer greet the player with their given name.
	else {
		cout << "hello" << input << ".\n";
	}

	// build a guess the number game
	// where the computer picks a random number between 1 and 10 (inclusive)
	// and the player guesses. the computer then says. higher or loawer and that's it!

	// #include <ctime>
	// #include <cstdlib>
	// srand(time(0)); at the beginning of the program.
	// then we need a while loop to let the player keep playing

	// for setup
	// pick the random number
	int theNumber = rand() % 10 + 1;
	if (debug) cout << "the number is " << theNumber << ".\n";
	int guess = 0;
	cout << "I am thinking of a number between 1 and 10 (inclusive).\nCan you guess the number?\n";

	while (guess != theNumber) {
		cout << "what is your guess?\n>>";
		getline(cin, input);
		guess = stoi(input);

		if (guess == theNumber) {
			cout << "you guessed it!\n";
			break;
		}

		if (guess > theNumber) {
			cout << "too high!\n";
		}
		else {
			cout << "too low!\n";
		}
	}

	if (true) {


		vector<string> favBooks = { "Challenger deep", "the scythe series", "thirteen crows" };

		cout << "the first book is in my list of favbooks is " << favBooks[0] << ".\n";

		cout << "pleas add another book to the list.\n";
		getline(cin, input);

		favBooks.push_back(input);

		cout << "there are now " << favBooks.size() << " books in the list.\n";
		cout << "the last book in the list is " << favBooks[favBooks.size() - 1] << ".\n";

		cout << "here is the unsorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}

		cout << "let's sort the list!\n";
		(favBooks.begin(), favBooks.end());

		cout << "here is the sorted lis:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}




	}



}