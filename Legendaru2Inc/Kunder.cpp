#include"kunder.h"

using namespace std;


void Kunder:skriv_til_fil(ofstream* ut) {
	for(int i = foersteKunde; i < sisteKunde; i++) {
		char* filnavn;
		les_navn(filnavn, sone, dta, i, 4);
		ofstream utfil(filnavn);
		if(utfil.is_open()){
			kunde->skriv_til_fil(utfil*);
		}

	}

}
