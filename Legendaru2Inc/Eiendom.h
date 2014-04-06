#if !defined(__EIENDOM_H)
#define __EIENDOM_H
#include <iostream>
#include <fstream>
#include "listtool2.h"


class Eiendom : public Num_element {
	private:
		int datoInn, bruksNr, saksb, pris, tomta;
		char* gateadr, * postadr, * eier, * kommune, * beskrivelse;

	public:
		Eiendom();
		Eiendom(ifstream & inn, int type, int i);
		Eiendom(int n);
		~Eiendom();
		virtual void display();
		void display_e();

};

#endif