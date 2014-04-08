#include <iostream>
#include "Eiendom.h"

Eiendom::Eiendom() {

}

Eiendom::Eiendom(ifstream* innFil, int n) : Num_element(n) {
    *innFil >> oppdragsNr;
    *innFil >> datoInn;
    *innFil >> bruksNr;
    *innFil >> intsaksb;
    *innFil >> arealTomt;
    *innFil >> pris;
    innFil->ignore();
    eier = les_text(innFil);
    kommune = les_text(innFil);
    postAdr = les_text(innFil);
    gateAdr = les_text(innFil);
    beskrivelse = les_text(innFil);
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
    skriv_til_fil();
}

void Eiendom::display_eiendom() {
    cout << "\n\tOppdragsnummer: " << oppdragsNr << "\n\tDato registrert: " << datoInn
            << "\n\tBruksnummer: " << bruksNr << "\n\tIntern saktsbehandler: " << intsaksb
            << "\n\tEier: " << eier << "\n\tKommune: " << kommune << "\n\tPostadresse: " << postAdr
            << "\n\tGateadresse: " << gateAdr << "\n\tTomtens areal: " << arealTomt
            << "\n\tPris: " << pris << "\n\tBeskrivelse: " << beskrivelse << endl << endl;;
}

void Eiendom::display() {
    display_eiendom();
}

void Eiendom::skriv_til_fil() {
    char* filNavn = new char[50];
    lagNavn(filNavn, "E", ".DTA", oppdragsNr, 7);
    ofstream *utFil = new ofstream(filNavn);
    *utFil << oppdragsNr << endl;
    *utFil << datoInn << endl;
    *utFil << bruksNr << endl;
    *utFil << intsaksb << endl;
    *utFil << arealTomt << endl;
    *utFil << pris << endl;
    *utFil << eier << endl;
    *utFil << kommune << endl;
    *utFil << postAdr << endl;
    *utFil << gateAdr << endl;
    *utFil << beskrivelse << endl;
}

int Eiendom::get_eiendomsNr() {
	return oppdragsNr;
}

int Eiendom::get_postAdr() {
	// FIX
	return 5;
}

Eiendom::~Eiendom() {

}