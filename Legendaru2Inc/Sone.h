#if !defined(__SONE_H)
#define __SONE_H
#include<fstream>


class Sone{
private:
   	char* beskrivelse;

	Eiendom* eiendomene[MAXDRITT];
    
public:
	Sone();
	Sone(ifstream* inn);
	void skriv_til_fil(ofstream* ut);
	void display();
};

#endif