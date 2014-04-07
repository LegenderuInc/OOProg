#include <iostream>
#include "Sone.h"
#include "Globalefunksjoner.h"

Sone::Sone(int siste) {
	cout << "hei";
	beskrivelse = les_text("\nGi en kort beskrivelse av sonen: ");
	eiendomene = new List(Sorted);
	char* filNavn = new char[50];
	lagNavn(filNavn, "SONE", ".DTA", siste, 7);
	ofstream *utFil = new ofstream(filNavn);
}


Sone::Sone(ifstream* fil) {

}
void Sone::skriv_til_fil(ofstream* ut){
	Eiendom* temp;
	*ut //<< number << "\n"
		<< beskrivelse << "\n";

	int antEiendom = eiendomene->no_of_elements();
	*ut << antEiendom << "\n";

	for(int i = 1; i <= antEiendom; i++) {
		temp = (Eiendom*)eiendomene->remove_no(i);
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
	}
	else {
		Bolig* temp;
		temp = new Bolig(23000, eiendomsType);  //FIX sistebrukt + 1
		eiendomene->add(temp);
	}
}



