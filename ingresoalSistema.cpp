#include<iostream>
#include<iomanip>
#include<string.h>
#include"SerieTV.h"
using namespace std;

void Ingresando_al_sistema() {
	string supemail;
	int supcontra;
	cout << "\tVerificando su identificaci�n\n";
	cout << "Email: ";
	cin >> supemail;
	cout << "Contrase�a: ";
	cin >> supcontra;
	if (supcontra == 123456789) {
		tecnico();
	} else {
		cout << "Usted no es parte tecnica, por favor de retirarse\n";
	}
}
