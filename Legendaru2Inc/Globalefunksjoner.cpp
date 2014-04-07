#include "Globalefunksjoner.h"


int les_tall(char* text, int min, int max) {
	int tall;
	cout << text;
	cin >> tall;
	while (tall < min || tall > max || (!cin.good())) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "(" << min << " - " << max << "): ";
		cin >> tall;
	}
	return tall;
}

char* les_text(char* text){
	char * data;
	cout << text;
	char temp[50];
	cin.ignore();
	cin.getline(temp, 50);
	data = new char[strlen(temp)+1];
	strcpy(data, temp);
	return data;
}
