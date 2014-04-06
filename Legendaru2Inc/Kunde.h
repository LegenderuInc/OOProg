#include'Globalefunksjoner.h"
#include<fstream>

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
	char* navn;
	char* adresse;
	char* poststed;
	char* mail;
	List* intSone[FIX];
public:
	Kunde();
	Kunde (string fil);
	~Kunde();
	void skriv_til-fil(ostream* ut);
	void display();
	char get_filnavn();




}