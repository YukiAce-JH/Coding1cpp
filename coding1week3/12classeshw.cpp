/*#include <iostream>
#include <string>
using namespace std;

class human {
private:
	string name;
	string phrase;
	int health = 10;
	int damage = 4;

 public:
	human(string givenName, string givenPhrase, int givenHealth, int baseDamage) {
		name = givenName;
		phrase = givenPhrase;
		health = givenHealth;
		damage = baseDamage;

		cout << "A new human enters the scene\n";
	}

	human() {
		cout << "using the DEFAULT constructor.\n";
		cout << " Hey programmer Dean, please fix this in the source code.\n";
	}

	void sayhello() {
		cout << "my name is " << name << " and my health is " << health << ".\n";
		cout << "My base damage is " << damage << ".\n";
		cout << phrase << "\n";
	}

	void setDamage(int baseDamage) {
		if (baseDamage < 0) {
			damage = 1;
		}
		else if (baseDamage > 10) {
			damage = 10;
		}
		else {
			damage = baseDamage;
		}
	}
	void ChangeDamage(int by = -1) {
		damage += by;
		setDamage(damage);
	}

	void setHealth(int givenHealth) {
		if (givenHealth < 0) {
			health = 0;
		}
		else if (givenHealth > 50) {
			health = 50;
		}
		else {
			health = givenHealth;
		}
	}
	void ChangeHealth(int by = -1) {
		health += by;
		setHealth(health);
	}
		int GetHealth() {
			return health;
		}

		int GetDamage() {
			return damage;
		}

		void SetName(string givenName) {
			if (givenName.size() < 2) {
				cout << "that's not even long enough to be a name-\n";
				return;
			}
			else if (givenName.size() > 20) {
				cout << "that's way too long to be a name!\n";
				return;
			}
			else {
				name = givenName;
			}
		}
		string GetName() {
			return name;
		}
};

int main() {
	cout << "welcome to human simulator, it's very human\n";

	human dave;
	dave.SetName("dave the 4th");
	dave.setHealth(5);
	dave.setDamage(8);

	cout << "take a look at this human. he's a real human by the name of " << dave.GetName() << ".\n";
	cout << "he got hit by a bus. his current health is " << dave.GetHealth() << ".\n";
	cout << "he just equipped a dagger his current damage that he can do is " << dave.GetDamage() << ".\n";

	human randy("I am Randy", "I don't get hit by cars!", 25, 4);
	cout << "Yeah this human doesn't get hit by cars and is pretty handy.\n";
	cout << "they can even introduce themselves, watch.\n";
	randy.ChangeHealth(-200);

	randy.sayhello();

	return 0;
}
*/