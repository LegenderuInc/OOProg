#include "Intersone.h"
#include "Eiendom.h"


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

InterSone::InterSone(ifstream * inn, int i) : Num_element(i) {
    int temp;
    *inn >> temp;
    boliginfo = (Boliginfo) temp;
    *inn >> temp;
    oenske = (Onske) temp;
    *inn >> temp;
    type = (EiendomsType) temp;
    *inn >> maxPris;
    *inn >> minAreal;
    *inn >> minRom;
}

InterSone::~InterSone() {

}

void InterSone::skriv_til_fil(ofstream & ut) {
    ut << number << "\n"
            << boliginfo << "\n"
            << oenske << "\n"
            << type << "\n"
            << maxPris << "\n"
            << minAreal << "\n"
            << minRom << "\n";
}

int InterSone::get_number() {
    return number;
}

Boliginfo InterSone::sammenling(Element* tilsendt) {
    Eiendom* temp_eiendom;
    Bolig* temp_bolig;
  
    temp_eiendom = (Eiendom*) tilsendt;
    if (temp_eiendom->get_eiendom() == type) {
        if (temp_eiendom->get_eiendom() == tomt) {
            cout << "\n Test, tomt";
            if (maxPris < temp_eiendom->get_pris()) {
                if (minAreal > temp_eiendom->get_areal()) {
                    return boliginfo;
                }
            }
        } else if (temp_eiendom ->get_eiendom() != tomt) {
            temp_bolig = (Bolig*) temp_eiendom;
            if (maxPris > temp_bolig->get_pris()) {
                if (minAreal < temp_bolig->get_boareal()) {
                    if (minRom < temp_bolig->get_soverom()) {
                        if (temp_bolig->get_onske() == oenske || temp_bolig->get_onske == begge || oenske == begge) {
                            return boliginfo;
                        }
                    }
                }
            }
        } else {
            return NULL;
        }
    }
}
