#include"Globalevariabler.h";
#include"const.h"
#include"Kunde.h"

using namespace std;

Kunde::Kunde() {
   
}

Kunde::Kunde(int nr) : Num_element (nr){
	navn = les_text("navn");
    adresse = les_text("adresse");
    poststed = les_text("Sted");
    mail = les_text("mail");

    telefon = les_tall("tlf", MIN_TLF, MAX_TLF);
    gateNr = les_tall("Gate nr", MIN_GATE, MAX_GATE);
    postKode = les_tall("Postadr", MIN_POST, MAX_POST);
	}

Kunde::Kunde(ifstream * infil, int nr) : Num_element(nr) {
    int antSoner, soneNumb;

    navn = les_text(infil);
    adresse = les_text(infil);
    poststed = les_text(infil);
    mail = les_text(infil);

    *infil >> telefon;
    *infil >> gateNr; 
    *infil >> postKode;
    *infil >> antSoner;

    for (int i = 1; i <= antSoner; i++) {
        InterSone* temp;
        *infil >> soneNumb;
        temp = new InterSone(*infil, soneNumb);
        intSone->add(temp);
        delete temp;
    }

}

void Kunde::skriv_til_fil(){
	InterSone* temp;
	lagNavn(filnavn, "K", ".DTA", number, 8);

	ofstream utfil(filnavn);

    utfil << number << "\n"
			<< navn << "\n"
			<< adresse << "\n"
			<< poststed << "\n"
			<< mail << "\n"
			<< telefon << "\n"
			<< gateNr << "\n"
			<< postKode << "\n";
		
    int antSoner =	intSone->no_of_elements();
    utfil << antSoner << "\n";
    for(int i = 1; i <= antSoner; i++){
        temp = (InterSone*) intSone->remove_no(i);
        temp->skriv_til_fil(utfil);
        intSone->add(temp);
    }


}
void Kunde::display(){
	display_kunde();
}


void Kunde::display_kunde() {
    cout << "\nKundens navn: " << navn
            << "\nKundens filnavn:" << filnavn
            << "\nTelefon: " << telefon
            << "\nAdresse: " << adresse << " " << gateNr
            << "\n \t" << postKode << " " << poststed
            << "\nEpost adresse: " << mail;
	intSone->display_list();
}
