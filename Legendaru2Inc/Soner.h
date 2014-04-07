#include"Globalefunksjoner.h"
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
};