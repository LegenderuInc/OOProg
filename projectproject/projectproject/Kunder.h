#if !defined(__KUNDER_H)
#define __KUNDER_H
#include"Globalevariabler.h"
#include"const.h"
#include"listtool2.h"
#include"Kunde.h"

using namespace std;

class Kunder {
private:
	int forsteK;
    int sistI;
    List* kundelist;
private:
    Kunder();
    ~Kunder();
	void ny_kunde();
	void display();
    void skriv_til_fil();
    void les_fra_fil(ifstream* inn, int i);
};

#endif