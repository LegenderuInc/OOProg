#include'Globalesunksjoner.h'
#include'Kunde.h'

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




