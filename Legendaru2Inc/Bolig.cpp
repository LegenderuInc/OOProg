#include "bolig.h"

Bolig::Bolig() {

}

Bolig::Bolig(int i, EiendomsType t) : Eiendom(i) {	
	byggeAar = les_tall("Byggeaar: ", 1000, 2020);
	bruttoAreal = les_tall("Bruttoareal: ", 0, 999999);
	boAreal = les_tall("Boareal: ", 0, 99999);
	antSoverom = les_tall("Antall soverom: ", 0, 99);
}

void Bolig::display() {
	display_eiendom();
	/*cout << "\nBoligtype: " << eiendomsType << "\nByggeaar: " << byggeAar
		<< "\nBrutoareal: " << bruttoAreal << "\nBoareal: " << boAreal
		<< "\nAntall soverom: " << antSoverom;*/
}