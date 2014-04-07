#include "bolig.h"

Bolig::Bolig() {

}

Bolig::Bolig(int i) : Eiendom(i) {
	int valg = les_tall("\nBoligtype:\n1 - tomt\n2 - enebolig\n3 - rekkehus\n4 - leilighet\n5 - hytte\n: ", 1, 5);
	
	switch (valg) {
	case 1: eiendomsType = tomt; break;
	case 2: eiendomsType = enebolig; break;
	case 3: eiendomsType = rekkehus; break;
	case 4: eiendomsType = leilighet; break;
	case 5: eiendomsType = hytte; break;
	default: valg = les_tall("\nBoligtype:\n1 - tomt\n2 - enebolig\n3 - rekkehus\n4 - leilighet\n5 - hytte\n: ", 1, 5); break;
	}
	
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