#include <iostream>
using namespace std;
int main() {

	char input;
	int total = 0;

	cout << "press 'B' however many times you want" << endl;
	cin >> input;

	while (input == 'b') {
		total = total + 1;
		cin >> input;
	cout << total << endl;

	}
	
}