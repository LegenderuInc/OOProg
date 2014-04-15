#include <iostream>
#include "Eiendom.h"

Eiendom::Eiendom() {

}

Eiendom::Eiendom(ifstream* innFil, int n) : Num_element(n) {
    *innFil >> oppdragsNr;
    *innFil >> datoInn;
    *innFil >> bruksNr;
    *innFil >> intsaksb;
	int eienType;
	*innFil >> eienType;
	eiendomsType == eienType;
    *innFil >> arealTomt;
    *innFil >> pris;
    innFil->ignore();
    eier = les_text(innFil);
    kommune = les_text(innFil);
    postAdr = les_text(innFil);
    gateAdr = les_text(innFil);
    beskrivelse = les_text(innFil);
}

Eiendom::Eiendom(int n, EiendomsType type) : Num_element(n) {
    oppdragsNr = n;
	eiendomsType = type;
    cout << "\nAngi informasjon for eiendommen.";
    datoInn = 18102012;
    bruksNr = les_tall("\nBruksnummer: ", 1000, 9999);
    intsaksb = les_tall("Nummer pï¿½ intern saksbehandler: ", 1, 10000);
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
            << "\n\tPris: " << pris << "\n\tBeskrivelse: " << beskrivelse 
			<< "\n\tEiendomstype: " << eiendomsType << endl;		
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
	*utFil << eiendomsType << endl;
    *utFil << arealTomt << endl;
    *utFil << pris << endl;
    *utFil << eier << endl;
    *utFil << kommune << endl;
    *utFil << postAdr << endl;
    *utFil << gateAdr << endl;
    *utFil << beskrivelse << endl;
}

void Eiendom::skriv_ukentlig(char* filnavn) {
    ofstream utfil(filnavn, ios::app);
    
    utfil << "\nOppdrags nummer: " << oppdragsNr << "\n"
            << "Lag inn: " << datoInn << "\n"
            << "Eiendoms katerogi: ";
    if(eiendomsType == 1) {
        utfil << "Tomt \n";
    }else if(eiendomsType == 2){
        utfil << "Enebolig \n";
    }else if(eiendomsType == 3){
        utfil << "Rekkehus \n";
    }else if(eiendomsType == 4){
        utfil << "Leilighet \n";
    }else if(eiendomsType == 5){
        utfil << "Hytte \n";
    }
    utfil << "Pris antyding: " << pris << "\n"
            << "Tomtens areal: " << arealTomt << "\n"
            << "Adresse: " << gateAdr << " " << "\n"
            << "\t\t" << postAdr << "\n"
            << "Tilleggsinfo om beligenheten: " << beskrivelse << "\n";
}

void Eiendom::add_hurtig(char* kunde){
    char* temp_filnavn;
    lagNavn(temp_filnavn, e, inf, number, 8);
    
    ofstream utfil(temp_filnavn, ios::app);
    
    utfil << "\n" << kunde ;
}

void Eiendom::ny_sjekk(Element* tilsendt, int n){
    Kunde* temp_kunde;
    Eiendom* temp_eiendom;
    List* temp_list = new List(Sorted);
    
    
    temp_eiendom = (Eiendom*) tilsendt;
    
    temp_list = mKunder->return_list();
    for(int i = 1; i <= temp_list->no_of_elements(); i++){
        temp_kunde = (Kunde*)temp_list->remove_no(i);
        temp_kunde->sjekk_interesser(temp_eiendom, n);
            }
        }
        

int Eiendom::get_eiendomsNr() {
	return oppdragsNr;
}

int Eiendom::get_postAdr() {
	// FIX
	return 5;
}

int Eiendom::get_pris(){
    return pris;
}

int Eiendom::get_areal(){
    return arealTomt;
}

Eiendom::~Eiendom() {

}

EiendomsType Eiendom::get_eiendom(){
    return eiendomsType;
}


