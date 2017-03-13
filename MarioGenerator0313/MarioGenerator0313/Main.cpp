#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void BadGuy();
int main() {

	int num;

	srand(time(NULL));
	while (true) {
		BadGuy();
		system("pause");
	}
}

void BadGuy() {
	int num = rand() % 100 + 1;
	if (num <= 50)
		cout << "Goomba!" << endl;
	else if (num > 51 && num <= 80)
		cout << "Koopa!" << endl;
	else
		cout << "Shy Guy!" << endl;
}