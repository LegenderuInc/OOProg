#if !defined(__SONE_H)
#define __SONE_H

class Sone{
private:
   	char* beskrivelse;
	List* Eiendom;

public:
	Sone();
	Sone(string fil);
	void skriv_til_fil(oftream* ut);
	void display();
};

#endif