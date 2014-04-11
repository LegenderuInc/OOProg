#include "bolig.h"

Bolig::Bolig() {

}

Bolig::Bolig(int i, EiendomsType type) : Eiendom(i, type) {	
	byggeAar = les_tall("Byggeaar: ", 1000, 2020);
	bruttoAreal = les_tall("Bruttoareal: ", 0, 999999);
	boAreal = les_tall("Boareal: ", 0, 99999);
	antSoverom = les_tall("Antall soverom: ", 0, 99);
    int temp = les_tall("Salg = 0, Leie = 1, Begge = 2",0 , 2);
    oenske = (Onske)temp; 
}

void Bolig::display() {
	display_eiendom();
	cout << "\n\tByggeaar: " << byggeAar
		<< "\n\tBrutoareal: " << bruttoAreal << "\n\tBoareal: " << boAreal
		<< "\n\tAntall soverom: " << antSoverom;
}

int Bolig::get_soverom(){
    return antSoverom;
}

int Bolig::get_boareal(){
    return boAreal;
}

Onske Bolig::get_onske(){
    return oenske;
}
