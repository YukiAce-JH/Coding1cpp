/*#include <iostream>  // in out stream sends text to and from the console
#include <string> // allows us to use variables
#include <cstdlib>
#include <ctime>
using namespace std;
const bool debug = false;

int main() {

	cout << "hello player! ready for some action?\n";
	int health = 10;
	int attack;
	int block;
	int turns = 0;
	char playerCharinput;
	int minSize = 2;
	int maxSize = 3;

	cout << "You are but a whimsical and silly goblin fighting for goblin supremacy\n";
	cout << "Like many goblins before you one thing must be done.\n";
	cout << "You must climb ASCEND THE DUNGEON.\n";
	cout << "You venture forth unto the dungeon.\n";
	cout << "Upon entering the dungeon.\n";

	while (1 == true) {
		turns += 1;
		attack = (rand() % 5) + 0;
		block = (rand() % 5) + 0;

			string input;

			do {
				cout << "A gremlin appears. Take action. ('1' to atk, '4' to block)\n";
				getline(cin, input);

				if (input.size() < minSize) {
					cout << "you swing at the Gremlin.\n";
					(block <= attack);
					cout << "your blade stays true. \n";
					cout << "you deal " << (rand() % 5) + 0 << " damage.\n";
					cout << "you are at " << health << " health. do you venture deeper into the dungeon? (y/n) \n";
				}
				else if (input.size() > maxSize) {
					cout << "you block" << (rand() % 5) + 0 << " damage.\n";
					(block >= attack);
					cout << "you succesfully parry the Gremlin's attack. \n";
					cout << "you are at " << health << " health. do you venture guh into the dungeon? (y/n) \n";
				}
				else {
					cout << "that's not an option. \n";
					return 0;

				}
			} while (true);
	}
}
*/