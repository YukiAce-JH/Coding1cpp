/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType {grunt, miniboss, boss};




struct enemy {
	int health = 10;
	int damage = 4;
	string name = "enemy";
	enemyType type = grunt;
};

struct address {
	string streetName;
	int streetNumber;
	string city;
	string state;
	string zipCode;
};

struct employee {
	int id = 0;
	string name;
	int age;

	address addr;
	float wage;
};
	
string AddressOneLine(address addr) {
	string oneLine = "";
	oneLine += to_string(addr.streetNumber);
	oneLine += " " + addr.streetName;
	oneLine += ", " + addr.city;
	oneLine += ", " + addr.state;
	oneLine += ", " + addr.zipCode;

	return oneLine;
}

int main() {
	cout << "Structures!\n";

	enemy brandon;
	brandon.health = 10;
	brandon.damage = 4;
	brandon.name = "Evil Brandon";
	brandon.type = grunt;

	cout << "here's " << brandon.name << "! His health is " << brandon.health << ". \n";

	enemy tom;
	tom.damage = 6;
	tom.name = "skinny tom";

	cout << tom.name << " is attacking " << brandon.name << "!!\n";

	if (brandon.health < 1) {
		cout << brandon.name << " has been killed!\n";
	}
	else {
		cout << brandon.name << " has " << brandon.health << " health left!\n";
	}

	vector<enemy> enemies;

	enemies.push_back(brandon);
	enemies.push_back(tom);

	cout << "status of all enemies:\n";
	for (int i = 0; i < enemies.size(); i++) {
		cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
		cout << "their damage is " << enemies[i].damage << " and their type is";
		switch (enemies[i].type)
		{
		case grunt:
			cout << "grunt";
			break;
		case miniboss:
			cout << "miniboss";
			break;
		case boss:
			cout << "boss";
			break;
		default:
			cout << "unknown";
			break;
		}
		cout << ".\n";
	}

	employee brian;
	brian.id = 2456;
	brian.name = "Brian Foster";
	brian.age = 35;
	brian.wage = 7.25f;
	brian.addr.streetNumber = 1234;
	brian.addr.streetName = "main street";
	brian.addr.city = "wichita";
	brian.addr.state = "KS";
	brian.addr.zipCode = 12345;
	
	cout << brian.name << " lives at " << AddressOneLine(brian.addr) << ".\n";

	return 0;
}*/