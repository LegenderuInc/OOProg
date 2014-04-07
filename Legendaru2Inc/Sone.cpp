#include <iostream>
#include<fstream>
#include"Eiendom.h"
#include "Sone.h"

Sone::Sone() {

}
Sone::Sone(ifstream & inn) {

}
void Sone::skriv_til_fil(ofstream* ut){
	Eiendom* temp;
	ut* << number << "\n"
		<< beskrivelse << "\n";

	int antEiendom = List*[Eiendomer]->no_of_elements();
	ut* << antEiendom << "\n";

	for(int i = 1; i <= antEiendom; i++) {
		temp = (list*) blabla(blabla)->remove_no(i);
		temp->skriv_til_fil();
		bla(bla)->add(temp);
	}

}



