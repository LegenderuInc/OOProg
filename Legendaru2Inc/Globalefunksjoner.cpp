#include "Globalefunksjoner.h"
#include "Bokst.h"
#include "Kunde.h"
#include "Kunder.h"


int les_tall(char* text, int min, int max) {
	int tall;
	cout << text;
	cin >> tall;
	while (tall < min || tall > max || (!cin.good())) {
		cin.clear();
		cin.ignore(100, '\n');
		cout << "(" << min << " - " << max << "): ";
		cin >> tall;
	}
	return tall;
}

char lesK(){
    char k;
    cin >> k; cin.ignore();
    return (toupper(k));
}

char* les_text(char* text){
	char * data;
	cout << "\n" << text;
	char temp[STRLEN];
	cin.ignore();
	cin.getline(temp, STRLEN);
}
char* les_text(char* text){
	char * data;
	cout << text;
	char temp[50];
	cin.ignore();
	cin.getline(temp, 50);

	data = new char[strlen(temp)+1];
	strcpy(data, temp);
	return data;
}


void lagNavn(char*t, char* s1, char* s2, int n, const int LEN) {
	char *temp;
	temp = new char[LEN];
	itoa(n, temp, 10);
	strcpy(t, s1);
	for (int i = 0; i < LEN - sizeof(temp); i++) {
		strcat(t, "0");
	}
	strcat(t, temp);
	strcat(t, s2);
}

char* les_text(ifstream* inn){
	char* data;
	char temp[STRLEN];
	inn->getline(temp, STRLEN);
	data = new char[strlen(temp)+1];
	strcpy(data, temp);
	return data;
}


int les_tall(ifstream* inn){
	int tall;
	inn >> tall;
	return tall;
}


void les_fra_fil() {
    char* navn;
    ifstream sistefil("SISTE.DTA");
    
    if (sistefil.is_open()){
        sistefil >> sisteEiendom;
        sistefil >> foersteKunde;
        sistefil >> sisteInnlagt;
    }
    
    for(int i = 1; i <= MAX_SONE; i++) {
        navn = new char[(strlen(sone)+strlen(dta) + 3 + 1)];
        lagNavn(navn, sone, dta, i, 3);
        ifstream innfil(navn);
        
        if(innfil.is_open()){
            sonelist->les_fra_fil(innfil, i);
        }
    }
    for(int j = foersteKunde; j <= sisteInnlagt; j++){
        navn = new char[(strlen(k) + strlen(dta) + 7 + 1)];
        lagNavn(navn, k, dta, j, 7);
        ifstream innkunde(navn);
        
        if(innkunde.is_open()){
            kundelist->les_fra_fil(innkunde, j);
        }
    }
   
}

void skrivMeny() {
    cout << "\n\t\tMenyvalg:";
    cout << "\n\n\tTilgjengelige kommandoer:";
    cout << "\n\n\tE D <oppdnr> | <pnr> Eiendom Display"
            << " <oppdragsnr> eller <postnr>";
    cout << "\nt E N <sonenr> Eiendom Ny <Sonenummer>";
    cout << "\n\tE S <oppdnr> Eiendom Slett <Oppdragsnr>";
    cout << "\n\tE E <oppdnr> Eiendom Endre <oppdragsnr>";
    cout << "\n\tS D <sonenr> Sone Display <sonenr>";
    cout << "\n\tK D <knr> | <knavn> Kunde Display"
           << " <kundenr> eller <kundenavn>";
    cout << "\n\tK N Kunde Ny";
    cout << "\n\tK S <knr> Kunde Slett <kundenr>";
    cout << "\n\tK E <knr> Kunde Endre <kundenr>";
    cout << "\n\tU Ukentlig utskrift/status/sending";
            
}

EiendomsType les_eiendomstype() {
	EiendomsType eiendomsType;
	int valg = les_tall("\nBoligtype:\n1 - tomt\n2 - enebolig\n3 - rekkehus\n4 - leilighet\n5 - hytte\n: ", 1, 5);
	
	switch (valg) {
	case 1: eiendomsType = tomt; break;
	case 2: eiendomsType = enebolig; break;
	case 3: eiendomsType = rekkehus; break;
	case 4: eiendomsType = leilighet; break;
	case 5: eiendomsType = hytte; break;
	default: valg = les_tall("\nBoligtype:\n1 - tomt\n2 - enebolig\n3 - rekkehus\n4 - leilighet\n5 - hytte\n: ", 1, 5); break;
	}
	return EiendomsType;
}