#include"Kunder.h"

using namespace std;

Kunder::Kunder() {
    char* temp_filnavn;
    kundelist = new List(Sorted);

    for (int i = foersteKunde; i <= sistInnlagt; i++) {
        temp_filnavn = new char[(strlen(dta) + strlen(k) + 7 + 1)];
        lagNavn(temp_filnavn, k, dta, i, 8);

        ifstream innfil(temp_filnavn);

        if (innfil) {
            Kunde * temp;
            temp = new Kunde(innfil, i);
            kundelist->add(temp);
        } else {
            cout << "\nDance";
        }
    }
}

void Kunder::skriv_til_fil(ofstream* ut) {
    getSisteInfo();
    for (int i = foersteKunde; i < sistInnlagt; i++) {
        char* filnavn;
        lagNavn(filnavn, k, dta, i, 7);
        ofstream utfil(filnavn);
        if (utfil) {
            Kunde->skriv_til_fil(utfil*);
        }

    }

}

