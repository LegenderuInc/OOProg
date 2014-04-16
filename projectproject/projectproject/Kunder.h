#if !defined(__KUNDER_H)
#define __KUNDER_H
#include"Kunde.h"

using namespace std;

class Kunder {
private:
	int forsteK;
    int sistI;
    List* kundelist;
public:
    Kunder();
    ~Kunder();
	void ny_kunde();
	void display();
    void skriv_til_fil();
    void les_fra_fil(ifstream* inn, int i);
    void skrivUkentlig();
    void slettKunde();
    List* return_list();
};

#endif