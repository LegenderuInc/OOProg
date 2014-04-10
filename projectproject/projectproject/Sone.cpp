#include "Sone.h"
#include "Globalevariabler.h"

Sone::Sone(int siste) {

    beskrivelse = les_text("Gi en kort beskrivelse av sonen: ");
    eiendomene = new List(Sorted);
    char* filNavn = new char[50];
    lagNavn(filNavn, "SONE", ".DTA", siste, 7);
    ofstream *utFil = new ofstream(filNavn);
    *utFil << beskrivelse << endl;
}

Sone::Sone(ifstream* inn) {

 }

void Sone::skriv_til_fil(ofstream * ut) {
    Eiendom* temp;
    *ut //<< number << "\n"
            << beskrivelse << "\n";

    int antEiendom = eiendomene->no_of_elements();
    *ut << antEiendom << "\n";

    for (int i = 1; i <= antEiendom; i++) {
        temp = (Eiendom*) eiendomene->remove_no(i);
        temp->skriv_til_fil();
        eiendomene->add(temp);
    }
}

void Sone::add_oppdrag() {
    EiendomsType eiendomsType = les_eiendomstype();

    if (eiendomsType == tomt) {
        Eiendom* temp;
        temp = new Eiendom(12000); //FIX sitebrukt + 1
        eiendomene->add(temp);
    } else {
        Bolig* temp;
        temp = new Bolig(23000, eiendomsType); //FIX sistebrukt + 1
        eiendomene->add(temp);
    }
}

void Sone::display_list() {
	eiendomene->display_list();
}

void Sone::display_oppdrag(int n) {
	if (eiendomene->in_list(n)) {
		eiendomene->display_element(n);
	}
	// FIX
}



bool Sone::listCheck(int n){
	return(eiendomene->in_list(n));
}

void Sone::fjernEiendom(int n){
	Eiendom* temp;
	temp = (Eiendom*) eiendomene->remove_no(n);
	delete temp;
}


