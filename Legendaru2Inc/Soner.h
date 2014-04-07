#include"Globalefunksjoner.h"
#include<fstream>

using namespace std;

class Soner {
private:
    Sone* sonerlist[MAX_SONE];
public:
    void les_fra_fil(ifstream* inn, int n);
};