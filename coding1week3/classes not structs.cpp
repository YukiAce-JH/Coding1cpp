/*#include <iostream>
#include <string>
using namespace std;

class robot {
private:
	string name;
	string phrase;
	int charge = 10, maxCharge = 100, minCharge = 0;

 public:
	robot(string givenName, string givenPhrase, int givenCharge) {
		name = givenName;
		phrase = givenPhrase;
		charge = givenCharge;

		cout << "A new robot has been constructed!\n";
	}

	robot() {
		cout << "using the DEFAULT constructor.\n";
		cout << " Hey programmer Dean, please fix this in the source code.\n";
	}


	void sayhello() {
		cout << "my name is " << name << " and my charge is " << charge << ".\n";
		cout << phrase << "\n";
	}

	void setCharge(int givenCharge) {
		if (givenCharge < 0) {
			charge = 0;
		}
		else if (givenCharge > 100) {
			charge = 100;
		} else {
			charge = givenCharge;
		}
	}
	void ChangeCharge(int by = -1) {
		charge += by;
		setCharge(charge);
	}

	int GetCharge() {
		return charge;
	}
	void SetName(string givenName) {
		if(givenName.size() < 2) {
			cout << "name is too short!\n";
			return;
		}
		else if (givenName.size() > 20) {
			cout << "name is too long!\n";
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
	cout << "classes, yeah?\n";

	robot bobert;
	bobert.SetName("bobert Jr.");
	bobert.setCharge(5);

	cout << "Have a look at my new robot! Their name is " << bobert.GetName() << ".\n";
	cout << "I am currently charging them, their charge is " << bobert.GetCharge() << ".\n";

	bobert.ChangeCharge(50);
	cout << "two hours later, bobert's charge is now " << bobert.GetCharge() << ".\n";

	robot rob("Roberto", "I can fix anything!", 25);
	cout << "my new robot was very expensive! they works on the nuclear reactor.\n";
	cout << "they can introduce themselves, watch.\n";
	rob.ChangeCharge(-200); 

	rob.sayhello();

	return 0;
}*/