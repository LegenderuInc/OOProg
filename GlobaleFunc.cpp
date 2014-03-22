#include<Iostream>
#include<fstream>
#include<cctype>


void meny();
void skriv_meny();
char les_kommando();


int main(){


}

void skriv_meny(){
	cout<<"\nFølgende kommanoder er tillgjgengelig: "
		<<"\nA"
}
char les_kommando(){
	char b;
	cin.ignore();
	cin.getline(b, cin);
	return toupper(b);
}


