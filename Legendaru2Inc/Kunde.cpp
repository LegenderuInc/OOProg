#include"Globalefunksjoner.h"
#include"const.h"
#include"Kunde.h"

using namespace std;

Kunde::Kunde(){
	navn = les_text("navn");
		adresse = les_text("adresse");
		poststed = les_text("Sted");
		mail = les_text("mail");
		filnavn = les_text("Filnavn");

		telefon = les_tall("tlf", MIN_TLF, MAX_TLF);    
		kundeNr = les_tall("Kunde nr", MIN_KUNDE, MAX_KUNDE);
		gateNr = les_tall("Gate nr", MIN_GATE, MAX_GATE);
		postKode = les_tall("Postadr", MIN_POST, MAX_POST);
		
}

Kunde::Kunde(char* filnavn){
    int antSoner;
	ifstream infil(filnavn);
	if(infil.is_open()){

		
		navn = les_text(infil);
		adresse = les_text(infil);
		poststed = les_text(infil);
		mail = les_text(infil);
		filnavn = les_text(infil);

		telefon = les_tall(infil);
		kundeNr = les_tall(infil);
		gateNr = les_tall(infil);
		postKode = les_tall(infil);
		antSoner = les_tall(infil);

		/*for( int i = 1; i <= antSoner; i++){
			FIX!;
		}
*/
	}


}

/*void Kunde::skriv_til_fil(ofstream* ut){

	IntSone* temp;

	ut* << navn << "\n"
		<< adresse << "\n"
		<< poststed << "\n"
		<< mail << "\n"
		<< filnavn << "\n"
		<< telefon << "\n"
		<< kundeNr << "\n"
		<< gateNr << "\n"
		<< postKode << "\n";
		
	FIX int antSoner = list[list]->no_of_elements();
	ut* << antSoner << "\n";
	for(int i = 1; i <= antSoner; i++){
		FIX temp = (list*) list[list]->remove_no(i);
		FIX temp->skriv_til_fil();
		FIX list[list]-> add(temp);
	}


}*/


void Kunde::display(){
	cout << "\nKundens navn: " << navn
		<<"\nKundens filnavn:" << filnavn
		<<"\nTelefon: " << telefon
		<<"\nAdresse: " << adresse << " " << gateNr
		<<"\n \t" << postKode << " " << poststed
		<<"\nEpost adresse: " << mail;
}

	/*for(int i = 1; i <= IntSoner; i++){
		intsoner[i]->display();
	}

}

char Kunde::get_filnavn() {
	les_navn(filnavn*, sone, dta, kundeNr, 4);
	return filnavn;
}
*/




