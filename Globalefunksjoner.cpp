#include "Globalefunksjoner.h"


int les_tall(char* text, int min, int max) {
	int tall;
	cout << text << ": ";
	cin >> tall;
	while (tall < min || tall > max || (!cin.good())) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "(" << min << " - " << max << "): ";
		cin >> tall;
	}
	return tall;
}

