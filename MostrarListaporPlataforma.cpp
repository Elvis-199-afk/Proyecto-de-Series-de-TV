#include"SerieTV.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void mostrarSeriesPorPlataforma(){
    string plataforma;
    bool encontrar=false;
    cout<<"Ingrese la plataforma: ";
    cin.ignore();
    getline(cin,plataforma);
    cout<<left<<setw(35)<<"\nNombre"<<setw(20)<<"Genero"<<setw(15)<<"Anio"<<setw(15)<<"Valoracion"<<setw(15)<<"Plataforma"<<endl<<endl;
    for(int i=0;i<n;i++){
        if(series[i].plataforma==plataforma){
            cout<<left<<setw(35)<<series[i].nombre<<setw(20)<<series[i].genero<<setw(15)<<series[i].anioEstreno<<setw(15)<<series[i].valoracion<<setw(15)<<series[i].plataforma<<endl;
            encontrar=true;
        }
    }
    if(encontrar==false){
        cout<<"No se encontro una serie para la plataforma.\n";
    }
    cout<<endl;
}