#include <iostream>
using namespace std;
int main() {

	int biggest = 0;
	int num;

	for (int i = 0; i < 3; i++) {
		cout << "enter a number" << endl;
		cin >> num;
		if (num > biggest)
			biggest = num;
	}
	cout << "the biggest number is " << biggest << endl;
}