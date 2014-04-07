#include "Soner.h"


Soner::Soner() {
	siste = 0;
}

void Soner::les_fra_fil(ifstream* inn, int n){
    
}

void Soner::add_sone() {
	sonene[siste+1] = new Sone(siste + 1);
	siste += 1;
}

