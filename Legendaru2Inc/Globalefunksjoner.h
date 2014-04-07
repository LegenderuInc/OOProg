#include <iostream>
#include <cstring>
#include "listtool2.h"
#include"const.h"
#include"Bokst.h"
#include <fstream>
#include "listtool2.h"


using namespace std;



int les_tall(char*, int, int);	
int les_tall(ifstream* inn);        // returnerer ett heltall
char* les_text(char* text);			// returerer text input
char* les_text(ifstream* inn);
void lagNavn(char*t, char* s1, char* s2, int n, const int LEN);  // Lager navn i t.
void les_fra_fil();
void skrivMeny();



