#include"SerieTV.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void mostrarSeries(Serie series[],int &n){
    cout<<endl<<left<<setw(35)<<"Nombre"<<setw(20)<<"Genero"<<setw(15)<<"Anio"<<setw(15)<<"Valoracion"<<setw(15)<<"Plataforma"<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<left<<setw(35)<<series[i].nombre<<setw(20)<<series[i].genero<<setw(15)<<series[i].anioEstreno<<setw(15)<<series[i].valoracion<<setw(10)<<series[i].plataforma<<endl;
    }
    cout<<endl;
}