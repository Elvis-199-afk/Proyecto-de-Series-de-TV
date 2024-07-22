#include <iostream>
#include"SerieTV.h"
using namespace std;
int main() {
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
        cout<<"=== GESTION DE SERIES DE TELEVISION ===\n\n";
        cout<<" 1. Agregar serie\n";
        cout<<" 2. Eliminar serie\n";
        cout<<" 3. Mostrar lista general de series registradas\n";
        cout<<" 4. Mostrar lista de series ordenadas por plataforma\n";
        cout<<" 5. Salir del programa\n\n";
        cout<<"== SELECCIONA UNA DE LAS OPCIONES ==\n";
        cin>>op;
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