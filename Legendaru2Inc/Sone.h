#if !defined(__SONE_H)
#define __SONE_H
#include "Globalefunksjoner.h"
#include "Eiendom.h"
#include "Bolig.h"


class Sone {
private:
   	char* beskrivelse;
	List* eiendomene;
    
public:
	Sone(int siste);
	Sone(ifstream* inn);
	void skriv_til_fil(ofstream* ut);
	void add_oppdrag();
	/*void display();*/
};

#endif