#include <iostream>
#include "Eiendom.h"

Eiendom::Eiendom() {

}

Eiendom::Eiendom(ifstream* innFil, int n) : Num_element(n) {
	*innFil >> oppdragsNr;
	*innFil >> datoInn;
	*innFil >> bruksNr;
	*innFil >> intsaksb;
	innFil->ignore();
	innFil->clear();
	*innFil >> eier;
	//innFil >> kommune;
	//innFil >> postAdr;
	//innFil >> gateAdr;
	//innFil >> arealTomt;
	//innFil >> pris;
	//innFil >> beskrivelse;
}

Eiendom::Eiendom(int n) : Num_element(n) {
	oppdragsNr = n;
	cout << "\nAngi informasjon for eiendommen.";
	datoInn = 18102012;
	bruksNr = les_tall("\nBruksnummer: ", 1000, 9999);
	intsaksb = les_tall("Nummer p� intern saksbehandler: ", 1, 10000);
	eier = les_text("Eierens navn: ");
	kommune = les_text("Kommune: ");
	postAdr = les_text("Postadresse og sted: ");
	gateAdr = les_text("Gateadresse: ");
	arealTomt = les_tall("Areal: ", 0, 10000000);
	pris = les_tall("Pris: ", 0, 100000000);
	beskrivelse = les_text("Kort beskrivelse: ");
}

void Eiendom::display_eiendom() {
	cout << "\nOppdragsnummer: " << oppdragsNr << "\nDato registrert: " << datoInn 
		<< "\nBruksnummer: " << bruksNr << "\Intern saktsbehandler: " << intsaksb
		<< "\nEier: " << eier << "Kommune: " << kommune << "\nPostadresse: " << postAdr
		<< "\nGateadresse: " << gateAdr << "\nTomtens areal: " << arealTomt 
		<< "\nPris: " << pris << "\nBeskrivelse: " << beskrivelse;
}

void Eiendom::display() {
	display_eiendom();
	return;
}

void Eiendom::skirv_til_fil(ofstream* utFil) {
	*utFil << oppdragsNr << endl;
	*utFil << datoInn << endl;
	*utFil << bruksNr << endl;
	*utFil << intsaksb << endl;
	*utFil << eier << endl;
	//utFil << kommune << endl;
	//utFil << postAdr << endl;
	//utFil << gateAdr << endl;
	//utFil << arealTomt << endl;
	//utFil << pris << endl;
	//utFil << beskrivelse << endl;
}

Eiendom::~Eiendom() {

}