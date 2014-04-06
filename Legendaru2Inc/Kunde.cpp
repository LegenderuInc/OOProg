#include'Globalesunksjoner.h'

class Kunde {
private:
	int telefon;
	int kundeNr;
	int post_nr;
	int gate_nr;
	char* kunde_navn;
	char* gate_adr;
	char* post_st;
	char* mail_adr;
public:
	Kunde(){
		kunde_navn = les_inn("\nOppgi følgende informasjon:\n\t Ny kundes navn: ");
		kunde_nr = les_tall("\n\t Kunde nummer:", 1000, 99999999999);
		telefon = les_tall("\n\t Telefon nummer: ", 9999999, 100000000);
		gate_adr = les_inn("\n\t Gate adresse (navn)");
		gate_nr = les_tall("\n\t Gate adresse (nummer)", 1, 100);
		post_adr = les_inn("\n\t Poststed (navn)");
		post_nr = les_tall("\n\t Postkode: ", 1000, 9999);
		mail_adr = les_inn("\n\t E-post adresse: ");
	}
	Kunde(int num){
		kunde_navn = les_inn("\nOppgi følgende informasjon:\n\t Ny kundes navn: ");
		kunde_nr = num;
		telefon = les_tall("\n\t Telefon nummer: ", 9999999, 100000000);
		gate_adr = les_inn("\n\t Gate adresse (navn)");
		gate_nr = les_tall("\n\t Gate adresse (nummer)", 1, 100);
		post_adr = les_inn("\n\t Poststed (navn)");
		post_nr = les_tall("\n\t Postkode: ", 1000, 9999);
		mail_adr = les_inn("\n\t E-post adresse: ");
	}
	Kunde (char* text){
		kunde_navn = text;
		kunde_nr = les_tall("\nOppgi følgende informasjon: \n\t Kunde nummer:", 1000, 99999999999);
		telefon = les_tall("\n\t Telefon nummer: ", 9999999, 100000000);
		gate_adr = les_inn("\n\t Gate adresse (navn)");
		gate_nr = les_tall("\n\t Gate adresse (nummer)", 1, 100);
		post_adr = les_inn("\n\t Poststed (navn)");
		post_nr = les_tall("\n\t Postkode: ", 1000, 9999);
		mail_adr = les_inn("\n\t E-post adresse: ");

	}



}
