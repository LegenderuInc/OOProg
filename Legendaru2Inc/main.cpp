#include<iostream>

using namespace std;

#include "const.h"
#include "Globalefunksjoner.h"
#include "Eiendom.h"
#include "Soner.h

Soner* soner;
Kunder* kunder

int main() {
	soner = new Soner();
    kunder = new Kunder();

    char kommando;
    skrivMeny();
    kommando = ;
    
    while (kommando != 'Q') {
        switch (kommando) {
            case 'E':
                break;
            case 'S':
                break;
            case 'K':
                break;
            case 'U':
                break;
            default:    skrivMeny();
                break;
        }
        kommando = ;
    }
    return 0;
}