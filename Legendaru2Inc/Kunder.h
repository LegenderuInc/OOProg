#include"kunde.cpp"

using namespace std;

class Kunder {
private:
	int forsteKunde;
	int sistInnlagt;
	List* Kunde;
private:
	Kunder();
	~Kunder();
	void skriv_til_fil();	
}
