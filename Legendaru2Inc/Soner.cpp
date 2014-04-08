#include "Soner.h"


Soner::Soner() {
	siste = 0;
	for (int i = 0; i < 100; i++) {
		sonene[i] = NULL;
	}
}

void Soner::les_fra_fil(ifstream* inn, int n){
    
}

void Soner::add_sone() {
	sonene[siste+1] = new Sone(siste + 1);
	siste += 1;
}


void Soner::nytt_oppdrag() {
	int soneNr = les_tall("Hvilken sone: ", 1, 100);
	if (sonene[soneNr] != NULL) {
		cout << "yo";
		sonene[soneNr]->add_oppdrag();
	}
	else {
		cout << "do";
		add_sone();
		sonene[siste]->add_oppdrag();
	}
}