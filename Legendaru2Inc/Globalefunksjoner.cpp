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

char les_inn(char* text){
	char * data;
	cout << "\n" << text;
	char temp[STRLEN];
	cin.ignore();
	cin.getline(temp, STRELEN);
	data = new char(strelen(temp)+1);
	strcpy(data, temp);
	return data;
}


