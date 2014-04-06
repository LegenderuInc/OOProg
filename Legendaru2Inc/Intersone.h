#include"Globalefunksjoner.h"

using namespace std;

enum info(ukentlig, hurtig);
enum onske(salgs, leie, begge);
enum type(tomt, enebolig, rekkehus, leilighet, hytte);

class IntSone: public Num_element() {
private:
	int sone_nr;
	int max_pris;
	int min_areal;
	int min_soverom;
	info tilsending;
	onske onske;
	type eiendom;

}

