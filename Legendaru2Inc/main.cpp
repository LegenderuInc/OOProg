#include<iostream>

using namespace std;

#include "const.h"
#include "Globalefunksjoner.h"

int main() {
    
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