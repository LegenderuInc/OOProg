#include "Globalevariabler.h"
#include "Sone.h"

using namespace std;

class Soner {
private:
	int siste;
	Sone* sonene[100];

public:
	Soner();
    void les_fra_fil(ifstream* inn, int n);
	void add_sone();
	void nytt_oppdrag();
	void display_soneoppdrag(int n);
	void display_oppdrag(int n);
	void slettEiendom();
};