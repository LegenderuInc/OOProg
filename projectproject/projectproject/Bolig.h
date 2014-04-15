#if !defined(__Bolig_H)
#define __Bolig_H

#include "Globalevariabler.h"
#include "Eiendom.h"


class Bolig: public Eiendom {
private:
	int byggeAar;				// Året boligen ble bygd.
	int bruttoAreal;			// Boligens bruttoareal.
	int boAreal;				// Boligens boareal.
	int antSoverom;				// Antall soverom som finnes i boligen.
    Onske oenske;

public:
	Bolig();					// Default konstruktor.
	Bolig(int i, EiendomsType type);				// Konstruktor som tar oppdragsnummer som parameter.
	virtual void display();
    void skriv_bolig_ukentlig(char* temp_filnavn);
    int get_soverom();
    int get_boareal();
    Onske get_onske();
};

#endif