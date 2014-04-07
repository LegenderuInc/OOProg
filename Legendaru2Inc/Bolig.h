#if !defined(__Bolig_H)
#define __Bolig_H

#include "Globalefunksjoner.h"
#include "Eiendom.h"
enum EiendomsType {tomt, enebolig, rekkehus, leilighet, hytte};

class Bolig: public Eiendom {
private:
	int byggeAar;				// Året boligen ble bygd.
	int bruttoAreal;			// Boligens bruttoareal.
	int boAreal;				// Boligens boareal.
	int antSoverom;				// Antall soverom som finnes i boligen.
	EiendomsType eiendomsType;	// Bolig type (tomt, eneblog osv).

public:
	Bolig();					// Default konstruktor.
	Bolig(int i);				// Konstruktor som tar oppdragsnummer som parameter.
	virtual void display();
};

#endif