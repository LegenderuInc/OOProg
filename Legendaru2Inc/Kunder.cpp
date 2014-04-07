#include"Kunder.h"

using namespace std;


void Kunder::skriv_til_fil(ofstream* ut) {
	for(int i = foersteKunde; i < sistInnlagt; i++) {
		char* filnavn;
		lagNavn(filnavn, k, dta, i, 7);
		ofstream utfil(filnavn);
		if(utfil.is_open()){
			Kunde->skriv_til_fil(utfil*);
		}

	}

}
