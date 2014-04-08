#if !defined(__KUNDE_H)
#define __KUNDE_H

#include "Globalevariabler.h"
#include "Bokst.h"
#include "Intersone.h"

using namespace std;

class Kunde : public Num_element {
private:
    int telefon;
    int postKode;
    int gateNr;
    char* filnavn;
    char* navn;
    char* adresse;
    char* poststed;
    char* mail;
    List* intSone;
public:
    Kunde();
    Kunde(int nr);
    Kunde(ifstream * infil, int nr);
    ~Kunde();
    void skriv_til_fil();
    virtual void display();
	void display_kunde();

};
#endif