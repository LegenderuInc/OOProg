#include"Kunder.h"

using namespace std;


void Kunder::skriv_til_fil(ofstream* ut) {
    getSisteInfo();
	for(int i = foersteKunde; i < sistInnlagt; i++) {
		char* filnavn;
		lagNavn(filnavn, k, dta, i, 7);
		ofstream utfil(filnavn);
		if(utfil.is_open()){
			Kunde->skriv_til_fil(utfil*);
		}

	}

}
void Kunder::les_fra_fil(ifstream* inn, int i){
    kundelist[i]-> new Kunde(inn)
}
