#include "Globalevariabler.h"
#include "Eiendom.h"
#include "Bolig.h"
#include "Soner.h"
#include "Sone.h"
#include "Enum.h"
#include "Kunder.h"

Soner* mSoner;
Kunder* mKunder;




void eiendomMeny();
void soneMeny();
void kundeMeny();
Sone* mSone;

int main() {
	mSoner = new Soner();
	mKunder = new Kunder();

    char kommando;
    skrivMeny();
    kommando = lesK();

    while (kommando != 'Q') {
        switch (kommando) {
            case 'E': eiendomMeny();
                break;
			case 'S': soneMeny();
                break;
			case 'K': kundeMeny();
                break;
            case 'U':
                skrivRaport = true;
                mKunder.skrivUkentlig();
                skrivRaport = false;
                break;
            default: skrivMeny();
                break;
        }
        kommando = lesK();
    }
    return 0;
}










void eiendomMeny() {

	skrivMeny_Eiendom();

    char kommando;
    
    kommando = lesK();
    
    while (kommando != 'Q') {
        switch (kommando) {
		case 'D': mSoner->display_oppdrag(12000);  // les tall i parameter
            break;
		case 'N': mSoner->nytt_oppdrag(); 
            break; 
		case 'S': mSoner->slettEiendom();
            break;
        case 'E':
            break;
        default: skrivMeny_Eiendom();
            break;
        }
		skrivMeny_Eiendom();
		kommando = lesK();
	}	
}


void kundeMeny() {

	skrivMeny_Kunde();

    char kommando;
    
    kommando = lesK();
    
    while (kommando != 'Q') {
        switch (kommando) {
		case 'D': // mKunder->display();
            break;
		case 'N': 
            break;
        case 'S':
            break;
        case 'E':
            break;
        default: skrivMeny_Kunde();
            break;
        }
		skrivMeny_Kunde();
		kommando = lesK();
	}
}

void soneMeny() {

	skrivMeny_Sone();

    char kommando;
    
    kommando = lesK();
    
    while (kommando != 'Q') {
        switch (kommando) {
		case 'D': mSoner->display_soneoppdrag(les_tall("\nAngi sonenummer: ", 1, 100)); 
            break;
		case 'N': 
            break;
        case 'S':
            break;
        case 'E':
            break;
		case 'Q': break;
		default: skrivMeny_Sone();
            break;

        }
		skrivMeny_Sone();
		kommando = lesK();
    }
}
