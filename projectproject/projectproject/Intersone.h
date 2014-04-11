#if !defined(__INTERSONE_H)
#define __INTERSONE_H

#include <iostream>
#include "Enum.h"
#include "listtool2.h"
#include <fstream>

using namespace std;

class InterSone : public Num_element {
private:
    int maxPris, minAreal, minRom;
    Boliginfo boliginfo;
    Onske oenske;
    EiendomsType type;

public:
    InterSone();
    InterSone(ifstream* inn, int i);
	InterSone(int sonenr, int pris, int areal, int sove, int valg, int onske, int eiendom);
    ~InterSone();
    void skriv_til_fil(ofstream & ut);
    Boliginfo sammenling(Element* tilsendt);
    int get_number();

};

#endif
