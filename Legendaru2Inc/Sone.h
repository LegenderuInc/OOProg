#if !defined(__SONE_H)
#define __SONE_H


class Sone{
private:
   	char* beskrivelse;
	List* Eiendom[MAXDRITT];

    
public:
	Sone();
	Sone(char* filnavn);
	void skriv_til_fil(ofstream* ut);
	void display();
};

#endif