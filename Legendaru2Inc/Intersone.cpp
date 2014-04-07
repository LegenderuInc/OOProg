#include <fstream>
#include <iostream>
#include <cstring>

#include "Intersone.h"
#include "const.h"

using namespace std;
InterSone::InterSone(){
    soneNr = les_tall("\nVennligst oppgi følgende informasjon:\n Sone Nummer: ", MIN_SONE, MAX_SONE);
    maxPris = les_tall("\nMax pris: ", MIN_ALL, MAX_PRIS);
    minAreal = les_tall("\nMinimal med ønske areal: ", MIN_ALL, MAX_AREAL);
    minRom = les_tall("\nMinst antall ønsket soverom: ", MIN_ALL, MAX_SOVE);
    boliginfo = EINARSMAGISKEFORMEL!!;
    oenske = EINARSMAGISKEFORMEL!!;
    type = EINARSMAGISKEFORMEL!!;
}

InterSone::InterSone(ifstream* inn){
    boliginfo = les_tall(inn);
    oenske = les_tall(inn);
    type = les_tall(inn);
    soneNr = les_tall(inn);
    maxPris = les_tall(inn);
    minAreal = les_tall(inn);
    minRom = les_tall(inn);
}

void InterSone::skriv_til_fil(ofstream* ut){
    if(ut.is_open()){
    *ut << boliginfo << "\n"
        << oenske << "\n"
            << type << "\n"
            << soneNr << "\n"
            << maxPris << "\n"
            << minAreal << "\n"
            << minRom << "\n";
    }
}