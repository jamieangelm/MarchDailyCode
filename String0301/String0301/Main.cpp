#include <iostream>
using namespace std;
#include <string>

int main() {
	string input;
	cout << "What's your name?" << endl;
	getline(cin, input);
	if (input.compare("Ducle") == 0)
		cout << "go play" << endl;
	else
		cout << "have a nice day" << input << endl;
}