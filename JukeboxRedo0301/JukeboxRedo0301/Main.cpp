#include <iostream>
#include <Windows.h>
using namespace std;

void Jukebox(int noise);

int main() {

	char input;
	int noise;

	Jukebox(noise);
	switch (input) {
	case 'd':
		cout << "d";
		break;
	case 'c':
		cout << "c";
		break;
	case 'p':
		cout << "p";
		break;
	}
}

void Jukebox(int noise) {
	cout << "Dog (g), Cat (c), Pig (p) " << endl;

}