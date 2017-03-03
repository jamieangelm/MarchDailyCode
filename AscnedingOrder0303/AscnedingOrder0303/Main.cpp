#include <iostream>
using namespace std;

int output(int x, int y, int z);

int main() {

	int x, y, z;

	cout << "What is the first number" << endl;
	cin >> x;
	cout << "What is the second number" << endl;
	cin >> y;
	cout << "What is the third number" << endl;
	cin >> z;
	cout << "your numbers in ascending order are" << endl;
	output(x, y, z);
}

int output(int x, int y, int z) {
	if ((x < y) && (x < z)) {
		cout << x << endl;
		if (y < z) {
			cout << y << endl;
			cout << z << endl;
		}
		else {
			cout << z << endl;
			cout << y << endl;
		}
	}

	else if ((y < x) && (y < z)) {
		cout << y << endl;
		if (x < z) {
			cout << x << endl;
			cout << z << endl;
		}
		else {
			cout << z << endl;
			cout << x << endl;
		}

	}
	else if ((z < x) && (z < y)) {
		cout << z << endl;
		if (x < y) {
			cout << x << endl;
			cout << y << endl;
		}
		else {
			cout << y<< endl;
			cout << x << endl;
		}
	}
	return 0;
}