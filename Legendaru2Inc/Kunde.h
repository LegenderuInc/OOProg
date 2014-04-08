#if !defined(__Kunde_H)
#define __Kunde_H

#include "Globalefunksjoner.h"
#include "const.h"
#include "Bokst.h"

using namespace std;

class Kunde : public Num_element {
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
    Kunde(int nr);
    Kunde(ifstream* infil, int nr);
    ~Kunde();
    void skriv_til_fil(ostream* ut);
    void display();

};
#endif