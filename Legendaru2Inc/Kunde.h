#include'Globalefunksjoner.h"

using namespace std;

const int MAX_TLF = 99999999;
const int MIN_TLF = 10000000;
const int MAX_KUNDE = 10000000000;
const int MIN_KUNDE = 1000;
const int MAX_SONE = 100;
const int MIN_SONCE = 1;
const int MAX_POST = 9999;
const int MIN_POST = 100;
const int MAX_OPPDRAG = 10000000000;
const int MIN_OPPDRAG =  10000;
const int MAX_GATE = 69;
const int MIN_GATE = 1;

class Kunde ::  {
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
		kunde_nr = les_tall("\n\t Kunde nummer:", MIN_KUNDE, MAX_KUNDE);
		telefon = les_tall("\n\t Telefon nummer: ", MIN_TLF, MAX_TLF);
		gate_adr = les_inn("\n\t Gate adresse (navn)");
		gate_nr = les_tall("\n\t Gate adresse (nummer)", MIN_GATE, MAX_GATE);
		post_adr = les_inn("\n\t Poststed (navn)");
		post_nr = les_tall("\n\t Postkode: ", MIN_POST, MAX_POST);
		mail_adr = les_inn("\n\t E-post adresse: ");
	}
	Kunde(int num){
		kunde_navn = les_inn("\nOppgi følgende informasjon:\n\t Ny kundes navn: ");
		kunde_nr = num;
		telefon = les_tall("\n\t Telefon nummer: ", MIN_TLF, MAX_TLF);
		gate_adr = les_inn("\n\t Gate adresse (navn)");
		gate_nr = les_tall("\n\t Gate adresse (nummer)", MIN_GATE, MAX_GATE);
		post_adr = les_inn("\n\t Poststed (navn)");
		post_nr = les_tall("\n\t Postkode: ", 1000, 9999);
		mail_adr = les_inn("\n\t E-post adresse: ");
	}
	Kunde (char* text){
		kunde_navn = text;
		kunde_nr = les_tall("\nOppgi følgende informasjon: \n\t Kunde nummer:", MIN_KUNDE, MAX_KUNDE);
		telefon = les_tall("\n\t Telefon nummer: ", MIN_TLF, MAX_TLF);
		gate_adr = les_inn("\n\t Gate adresse (navn)");
		gate_nr = les_tall("\n\t Gate adresse (nummer)", MIN_GATE, MAX_GATE);
		post_adr = les_inn("\n\t Poststed (navn)");
		post_nr = les_tall("\n\t Postkode: ", MIN_POST, MAX_POST);
		mail_adr = les_inn("\n\t E-post adresse: ");

	}



}