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
    kommando = lesK();

    while (kommando != 'Q') {
        switch (kommando) {
            case 'E': EiendomMeny();
                break;
            case 'S': SoneMeny();
                break;
            case 'K': KundeMeny();
                break;
            case 'U':
                break;
            default: skrivMeny();
                break;
        }
        kommando = lesK();
    }
    return 0;
}
