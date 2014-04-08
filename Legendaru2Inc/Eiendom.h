#if !defined(__EIENDOM_H)
#define __EIENDOM_H
#include "Globalevariabler.h"

class Eiendom : public Num_element {
private:
    int datoInn; // Dato for n�r oppdraget ble registrert.
    int oppdragsNr; // Oppdragsnummer.
    int intsaksb; // Nummer for intern saksbehandler.
    int bruksNr; // Bruksnummer.
    int pris; // Eiendomens/boligens pris.
    int arealTomt; // Areal p� tometen.
    char* kommune; // Kommunen tomen ligger i.
    char* postAdr; // Postadresse og std.
    char* gateAdr; // Gateadresse.
    char* eier; // Tomtens n�v�rende eier.
    char* beskrivelse; // En kort bekrivelse av tomten/boligen.

public:
    Eiendom(); // Default konstruktor
    Eiendom(int n); // Konstruktor som tar oppdragsnummer som parameter.
    Eiendom(ifstream* innFil, int n); // Konstuktor som brukes dersom det leses fra fil.
    virtual void display();
    void display_eiendom(); // Skriver ut informasjon om tomten.
    void skriv_til_fil();
	int get_eiendomsNr();
	int get_postAdr();
    ~Eiendom(); // Destructor.


};

#endif