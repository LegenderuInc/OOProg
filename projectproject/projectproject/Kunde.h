#if !defined(__KUNDE_H)
#define __KUNDE_H

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
    void sjekk_interesser();
    void sjekk_interesser(Element* tilsendt, int n);
    void add_ukentlig();
 
    
};
#endif