#include "Globalefunksjoner.h"
#include "Kunde.h"

using namespace std;

Kunde::Kunde(){

}

Kunde::Kunde(string fil){
	ifstream infil(fil);
	if(infile.is_open()){

		
		navn = les_text(infil);
		adresse = les_text(infil);
		poststed = lest_text(infil);
		mail = lest_text(infil);
		filnavn = les_text(infil);

		telefon = les_tall(infil);
		gate_nr = les_tall(infil);
		postkode = les_tall(infil);
		intSoner = les_tall(infil);

		for( int i = 1; i <= intSoner; i++){
			FIX!
		}

	}


}

void Kunde::skriv_til_fil(ofstream* ut){

	intSone* temp;

	ut* << navn << "\n"
		<< adresse << "\n"
		<< poststed << "\n"
		<< mail << "\n"
		<< filnavn << "\n"
		<< telefon << "\n"
		<< gate_nr << "\n"
		<< postkode << "\n"
		
		int antSoner = list[list]->no_of_elements();
	ut* << antSoner << "\n";
	for(int i = 1; i <= antSoner; i++){
		temp = (list*) list[list]->remove_no(i);
		temp->skriv_til_fil();
		list[list]-> ass(temp)
	}


}


void Kunde::display(){
	cout << "\nKundens navn: " << navn
		<<"\nKundens filnavn:" << filnavn
		<<"\nTelefon: " << telefon
		<<"\nAdresse: " << adresse << " " << gate_nr
		<<"\n \t" << postkode << " " << poststed
		<<"\nEpost adresse: " << mail;

	for(int i = 1; i <= intSoner; i++){
		intsoner[i]->display();
	}

}




