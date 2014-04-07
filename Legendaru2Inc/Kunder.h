#include"Globalefunksjoner.cpp"
#include"const.h"
#include"Bokst.h"

using namespace std;

class Kunder {
private:
    extern int forsteKunde;
	extern int sistInnlagt;
	List* kundelist;
private:
	Kunder();
	~Kunder();
	void skriv_til_fil();
    void les_fra_fil(ifstream* inn, int i)	;
};