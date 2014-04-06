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

char* les_text(char* text){
	char * data;
	cout << "\n" << text;
	char temp[STRLEN];
	cin.ignore();
	cin.getline(temp, STRELEN);
	data = new char[strelen(temp)+1];
	strcpy(data, temp);
	return data;
}

void lagNavn(char*t, char* s1, char* s2, int n, const int LEN) {
	char *temp;
	temp = new char[LEN];
	itoa(n, temp, 10);
	strcpy(t, s1);
	for (int i = 0; i < LEN - sizeof(temp); i++) {
		strcat(t, "0");
	}
	strcat(t, temp);
	strcat(t, s2);
}

char* les_text(ifstream* inn){
	char* data;
	char temp[STRLEN];
	inn.getline(temp, STRLEN);
	data = new char[strlen(temp)+1];
	strcpy(data, temp);
	return data;
}


int les_tall(ifstream* inn){
	int tall;
	inn >> tall;
	return tall;
}
