#if !defined(__Intersone_H)
#define __Intersone_H

#include "Enum.h"
#include "LISTTOOL2.H"
#include<fstream>

class InterSone: public Num_element {
private:
   int maxPris, minAreal, minRom;
   Boliginfo boliginfo;
   Onske oenske;
   EiendomsType type;

public:
    InterSone();
    InterSone(int sonenr, int pris, int areal, int sove, int valg, int onske, int eiendom);
    InterSone(ifstream* inn, int i);
    ~InterSone();
    void skriv_til_fil(ofstream* ut);

};

#endif
