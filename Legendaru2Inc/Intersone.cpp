#include "Intersone.h"


using namespace std;

InterSone::InterSone() {

}

InterSone::InterSone(int sonenr, int pris, int areal, int sove, int valg, int onske, int eiendom) : Num_element(sonenr) {
    maxPris = pris;
    minAreal = areal;
    minRom = sove;
    boliginfo = (Boliginfo) valg;
    oenske = (Onske) onske;
    type = (EiendomsType) eiendom;
}

InterSone::InterSone(ifstream & inn, int i) : Num_element(i) {
    int temp;
    inn >> temp;
    boliginfo = (Boliginfo) temp;
    inn >> temp;
    oenske = (Onske) temp;
    inn >> temp;
    type = (EiendomsType) temp;
    inn >> maxPris;
    inn >> minAreal;
    inn >> minRom;
}

InterSone::~InterSone() {

}

void InterSone::skriv_til_fil(ofstream & ut) {
    ut << number	<< "\n"
       << boliginfo << "\n"
       << oenske	<< "\n"
       << type		<< "\n"
       << maxPris	<< "\n"
       << minAreal	<< "\n"
       << minRom	<< "\n";
}