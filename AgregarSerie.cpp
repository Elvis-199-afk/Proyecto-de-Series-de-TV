#include"SerieTV.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void agregarSerie(Serie series[],int &n){
	if(n<50){
		cout<<"\nNombre de la serie: ";
	    cin.ignore();
	    getline(cin,series[n].nombre);
	    cout<<"Genero: ";
	    getline(cin,series[n].genero);
	    cout<<"Anio de estreno: ";
	    cin>>series[n].anioEstreno;
	    cout<<"Valoracion: ";
	    cin>>series[n].valoracion;
	    cout<<"Plataforma: ";
	    cin.ignore();
	    getline(cin,series[n].plataforma);
	    n++;
	    cout<<"Se agrego correctamente\n\n";
	}else{
        cout<<"No se pueden agregar mas series. Capacidad maxima alcanzada.\n\n";
	} 
}