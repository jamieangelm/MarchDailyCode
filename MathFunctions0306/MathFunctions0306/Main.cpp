#include <iostream>
using namespace std;

int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);

int main() {
	int room = 1;
	int input;

	int x;
	int y;

	switch (room) {
	case 1:
		cout << "do you wish to add (1), subtract (2) or multiply (3)?" << endl;
		cin >> input;
		if (input == 1)
			room = 2;
		if (input == 2)
			room = 3;
		if (input == 3)
			room = 4;
		else
			cout << "astiuashjskgg" << endl;
	
	case 2:
		cout << "2" << endl;
		cout << "enter your first number" << endl;
		cin >> x;
		cout << "enter your second number" << endl;
		cin >> y;
		cout << Add(x, y) << endl;
		break;
	
	case 3:
		cout << "3" << endl;
		cout << "enter your first number" << endl;
		cin >> x;
		cout << "enter your second number" << endl;
		cin >> y;
		cout << Subtract(x, y) << endl;
		break;

	case 4:
		cout << "4" << endl;
		cout << "enter your first number" << endl;
		cin >> x;
		cout << "enter your second number" << endl;
		cin >> y;
		cout << Multiply(x, y) << endl;
		break;
	}

}

int Add(int x, int y) {
	return x + y;
}
int Subtract(int x, int y) {
	return x - y;
}
int Multiply(int x, int y) {
	return x * y;
}