#include<iostream>
#include<iomanip>
#include<string.h>
#include"SerieTV.h"
using namespace std;

// primer nivel
void menu_inicial() {
	bool repite = true;
	int opcion, Contra;
	char Email;
	setlocale(LC_ALL, ""); // permite escribir con tildes y caracteres especiales
	const char *titulo = {"Bienvenido a ST"};
	string opciones[] = {"Cliente", "Tecnico", "Salida"};
	int n = 3;
	do {
		system("cls"); 
    	int opcion = mostrarMenu(titulo, opciones, n); 
		switch (opcion) {
			case 1:
				system("cls");
				//nuevo_cliente();
				break;
			case 2:
				system("cls");
				Ingresando_al_sistema();
				break;
			case 3:
				repite = false;
				break;
				
		}
	} while (repite);
}
