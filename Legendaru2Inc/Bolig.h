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
	EiendomsType eiendomsType;	// Bolig type (tomt, eneblog osv).

public:
	Bolig();					// Default konstruktor.
	Bolig(int i, EiendomsType t);				// Konstruktor som tar oppdragsnummer som parameter.
	virtual void display();
};

#endif