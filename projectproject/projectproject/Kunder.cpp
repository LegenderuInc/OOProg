#include "Kunder.h"

using namespace std;

Kunder::Kunder() {
    char* temp_filnavn;
	int uselessJunk;
    kundelist = new List(Sorted);

	 ifstream sistefil("SISTE.DTA");

	 sistefil >> uselessJunk >> forsteK >> sistI;
	 
    for (int i = forsteK; i <= sistI; i++) {
        temp_filnavn = new char[50];
        lagNavn(temp_filnavn, "K", ".DTA", i, 8);

		ifstream* innfil = new ifstream(temp_filnavn);

        if (innfil) {
            Kunde * temp;
            temp = new Kunde(innfil, i);
            kundelist->add(temp);
        } else {
            cout << "\nDance";
        }
    }
}

Kunder::~Kunder(){

}

void Kunder::ny_kunde(){
	Kunde * temp;
	temp = new Kunde(++sistI);
	//Sammenlign funksjon kalles her.
	kundelist->add(temp);
}



void Kunder::skriv_til_fil() {
    int listLen = 0;
	Kunde* temp; 
	
	ofstream utfil("SISTE.DTA", ios::app);

	utfil	<< forsteK << '\n' 
			<< sistI << '\n';

	if (!(kundelist->is_empty())){
		listLen = kundelist->no_of_elements();
		for(int i = 1; i <= listLen; i++){
			temp = (Kunde*) kundelist->remove_no(i);
			temp->skriv_til_fil();
			kundelist->add(temp);
		}
	}else {
		cout << "\nSer ut til at denne listen er tom :(";
	}

}

