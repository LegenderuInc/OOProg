#if !defined(__EIENDOM_H)
#define __EIENDOM_H
#include "Globalefunksjoner.h"

class Eiendom : public Num_element {
	private:
		int datoInn;		// Dato for når oppdraget ble registrert.
		int oppdragsNr;		// Oppdragsnummer.
		int intsaksb;		// Nummer for intern saksbehandler.
		int bruksNr;		// Bruksnummer.
		int pris;			// Eiendomens/boligens pris.
		int arealTomt;		// Areal på tometen.
		char* kommune;		// Kommunen tomen ligger i.
		char* postAdr;		// Postadresse og std.
		char* gateAdr;		// Gateadresse.
		char* eier;			// Tomtens nåværende eier.
		char* beskrivelse;	// En kort bekrivelse av tomten/boligen.

	public:
		Eiendom();			// Default konstruktor
		Eiendom(int n);		// Konstruktor som tar oppdragsnummer som parameter.
		Eiendom(ifstream* innFil, int n);	// Konstuktor som brukes dersom det leses fra fil.
		virtual void display();
		void display_eiendom();	// Skriver ut informasjon om tomten.
		void skriv_til_fil();
		
		~Eiendom();			// Destructor.


};

#endif