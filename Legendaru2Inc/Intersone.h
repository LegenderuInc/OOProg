#if !defined(__Intersone_H)
#define __Intersone_H

#include "Enum.h"
#include "LISTTOOL2.H"
#include<fstream>

class InterSone : Num_element {
private:
   int soneNr, maxPris, minAreal, minRom;
   Boliginfo boliginfo;
   Onske oenske;
   EiendomsType type;

public:
    InterSone();
    InterSone(ifstream* inn);
    void skriv_til_fil(ofstream* ut);

};

#endif
