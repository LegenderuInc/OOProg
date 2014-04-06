#include <iostream>
#include "Sone.h"

Sone::Sone() {

}
Sone::Sone(string fil) {

}
void Sone::skriv_til_fil(ofstram* ut){
	Eiendom* temp;
	ut* << number << "\n"
		<< beskrivelse "\n";

	int antEiendom = List*[Eiendomer]->no_of_elements();
	ut* << antEiendom << "\n";

	for(int i = 1; i <= antEiendom; i++) {
		FIX temp = (list*) blabla(blabla)->remove_no(i);
		FIX temp->skriv_til_fil();
		FIX bla(bla)->add(temp);
	}

}



