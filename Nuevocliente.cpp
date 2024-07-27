#include<iostream>
#include<string.h>
#include"SerieTV.h"
using namespace std;

void nuevo_cliente() {
	bool repite = true;
	const char *titulo = {"Ingreso a la serie de televisión"};
	string opciones[] = {"Iniciar Seccion", "Registrarse", "Regresar"};
	int n = 3;
	do {
		system("cls"); 
    	int opcion = mostrarMenu(titulo, opciones, n); 
		switch (opcion) {
			case 1:
				system("cls");
				iniciar_secion();
				system("PAUSE");
				break;
			case 2:
				system("cls");
				Agregar_cliente();
				system("PAUSE");
				break;
			case 3:
				repite = false;
				break;
		}
	} while (repite);
}
