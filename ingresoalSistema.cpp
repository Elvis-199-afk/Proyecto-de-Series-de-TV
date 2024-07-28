#include<iostream>
#include<iomanip>
#include<string.h>
#include"SerieTV.h"
using namespace std;

void Ingresando_al_sistema() {
	string supemail;
	int supcontra;
	cout << "\tVerificando su identificación\n";
	cout << "Email: ";
	cin >> supemail;
	cout << "Contraseña: ";
	cin >> supcontra;
	if (supcontra == 123456789) {
		void tecnico();
	} else {
		cout << "Usted no es parte tecnica, por favor de retirarse\n";
	}
}
