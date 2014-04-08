#include <fstream>
#include <iostream>
#include <cstring>

#include "Intersone.h"
#include "const.h"

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

InterSone::InterSone(ifstream* inn, int i) : Num_element(i) {
    int temp;
    temp = les_tall(inn);
    boliginfo = (Boliginfo) temp;
    temp = les_tall(inn);
    oenske = (Onske) temp;
    temp = les_tall(inn);
    type = (EiendomsType) temp;
    maxPris = les_tall(inn);
    minAreal = les_tall(inn);
    minRom = les_tall(inn);
}

InterSone::~InterSone() {

}

void InterSone::skriv_til_fil(ofstream* ut) {
    *ut << number << "\n"
            << boliginfo << "\n"
            << oenske << "\n"
            << type << "\n"
            << maxPris << "\n"
            << minAreal << "\n"
            << minRom << "\n";
}