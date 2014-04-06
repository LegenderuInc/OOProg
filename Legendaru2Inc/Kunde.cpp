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

		telefon = les_tall(infil);
		post_nr = les_tall(infil);
		gate_nr = les_tall(infil);
		intSoner = les_tall(infil);

		for( int i = 1; i <= intSoner; i++){
			FIX!
		}

	}


}



