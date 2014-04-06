#include"Globalefunksjoner.h"
#include<fstream>
#include "const.h"

using namespace std;


class Kunde: public Num_element  {
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