#include"Globalefunksjoner.h"
#include<fstream>
#include "const.h"
#include"Bokst.h"

using namespace std;


class Kunde: public Num_element  {
private:
	int telefon;
	int kundeNr;
	int postKode;
	int gateNr;
        char* filnavn;
	char* navn;
	char* adresse;
	char* poststed;
	char* mail;
	List* intSone[MAXINTR];
public:
	Kunde();
	Kunde (char* filnavn);
	~Kunde();
	void skriv_til_fil(ostream* ut);
	void display();
		
};