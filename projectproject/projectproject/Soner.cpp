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
	int soneNr = les_tall("\nHvilken sone: ", 1, 100);
	if (sonene[soneNr] != NULL) {
		cout << endl;
		sonene[soneNr]->add_oppdrag();
	}
	else {
		cout << endl;
		add_sone();
		sonene[siste]->add_oppdrag();
	}
}


void Soner::display_soneoppdrag(int n) {
	if (sonene[n] != NULL) {
		sonene[n]->display_list();
	}
	else {
		cout << "\n\nAngitt sone eksisterer ikke.\n";
	}
}

void Soner::display_oppdrag(int n) {
	for (int i = 1; i <= 100; i++) {
		if (sonene[i] != NULL && i < 2) {  // FIX Looper av en elle annen grunn en gang for mye. fixet me i < 2
			sonene[i]->display_oppdrag(n);
			
		}
	}
}

void Soner::slettEiendom(){
	int input;

	input = les_tall("\nOppgi oppdrags nummer på eiendomen du ønsker å slette: ", 1, 100000);
	for(int i = 1; i <= MAX_SONE; i++){
		if(sonene[i] != NULL){
			if(sonene[i]->listCheck(input)){
				sonene[i]->fjernEiendom(input);
				cout << "\n Removal success!!";
				i = MAX_SONE;
			}
		}else {
			cout << "\nFant ingen soner";
		}
	} 
}


