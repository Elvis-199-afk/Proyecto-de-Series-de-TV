#include <iostream>
#include<conio.h> //prueba si se puede sin esto
#include"SerieTV.h"
using namespace std;
int main() {
	// menu_inicial(); //¿como hacemos? verifica la funcionalidad
	
	setlocale(LC_ALL, "");// agregando funcion que permite el mostrar caracteres especiales
	SerieTV series[30]={
        {"Stranger Things", "Ciencia Ficcion", 2016, 4, "Netflix"},
        {"The Mandalorian", "Aventura", 2019, 2, "Disney+"},
        {"The Boys", "Accion", 2019, 3, "Amazon Prime"},
        {"Breaking Bad", "Drama", 2008, 5, "Netflix"},
        {"The Crown", "Historia", 2016, 4, "Netflix"},
        {"The Marvelous Mrs. Maisel", "Comedia", 2017, 4, "Amazon Prime"},
        {"WandaVision", "Superheroes", 2021, 1, "Disney+"},
        {"The Expanse", "Ciencia Ficcion", 2015, 6, "Amazon Prime"}
	};
    int op;
    int n=7;
    do{
        system("cls");
        const char *titulo = {"GESTION DE SERIES DE TELEVISION"};
		string opciones[] = {"Agregar serie", "Eliminar serie", "Mostrar lista general de series registradas", 
		"Mostrar lista de series ordenadas por plataforma", 
		"Salir del programa"};
		int n = 5; // esto se modifica dependiendo de la cantidad de opciones
		op = mostrarMenu(titulo, opciones, n);	
        
        
        
        switch (op){
            case 1:
                system("cls");
                if(n==30){
                    cout<<"Se ha llegado al limite de series\n";
                }else{
                    agregarSerie(series,n);
                }
                break;
            case 2:
                system("cls");
                eliminarSerie(series,n);
                cout<<"La lista despues de eliminar es: \n";
                mostrarLista(series,n);
                system("pause");
                break;
            case 3:
                system("cls");
                if(n==-1){
                    cout<<"No hay series registradas...\n";    
                }else{
                	mostrarLista(series,n);
                    cout<<endl;
                }
                system("pause");
                break;
            case 4:
                system("cls");
                if(n==-1){
                    cout<<"No hay series registradas...\n";
                }else{
                    cout<<"El listado de series existentes, ordenado por plataforma es:\n\n";
                	mostrarListaPorPlataforma(series,n);
                }
                system("pause");
                break;
            case 5:
                cout<<"\nFIN . . .\n";
                break;
            default :
                cout<<"\n\nINGRESE UNA OPCION VALIDA\n";
                system("pause");
                break;
        }
	} while(op != 5);

	return 0;
}
