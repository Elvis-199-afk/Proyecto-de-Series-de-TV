#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h> //permite usar getch()
#include"SerieTV.h"

// este primer codigo se usa para mover la flechita
int mostrarMenu(const char *titulo, const string opciones[], int n) {  
    int opcionSeleccionada = 1;  
    bool repite = true;  
    int tecla;
    do {
        // Mostrar el menú  
        system("cls");// Limpiar la pantalla para que el menú se muestre de forma limpia
		cout << "\t\t" <<titulo << endl;
        for (int i = 0; i < n; ++i) {  
            if (i + 1 == opcionSeleccionada) {  
                cout << "==> "; 
            }  
            cout << "\t"<<(i + 1) << ") ";  
            cout << opciones[i] << endl;  
        }
        // Solo permite que se ingrese ARRIBA, ABAJO o ENTER  
        tecla = getch(); // Captura la tecla  
        switch (tecla) {  
            case 72: // Flecha arriba  
                opcionSeleccionada--;  
                if (opcionSeleccionada < 1) {  
                    opcionSeleccionada = n;  
                }  
                break;  
            case 80: // Flecha abajo  
                opcionSeleccionada++;  
                if (opcionSeleccionada > n) {  
                    opcionSeleccionada = 1;  
                }  
                break;  
            case 13: // Enter  
                repite = false;  
                break;  
        }  
    } while (repite);  
    return opcionSeleccionada;  
}
