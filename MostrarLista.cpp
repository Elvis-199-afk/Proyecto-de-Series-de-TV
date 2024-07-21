#include<iostream>
#include<iomanip>
#include<string.h>
#include"SerieTV.h"
using namespace std;
void mostrarLista(SerieTV *series, int n){
    cout<<left<<setw(30)<<"TITULO"<<setw(20)<<"GENERO"<<setw(10)<<"ANIO"<<setw(15)<<"TEMPORADAS"<<setw(30)<<"PLATAFORMA"<<endl<<endl;
    for(int i=0; i <= n; i++){
        cout<<setw(30)<<series[i].titulo;
        cout<<setw(20)<<series[i].genero;
        cout<<setw(10)<<series[i].anio;
        cout<<setw(15)<<series[i].temporadas;
        cout<<setw(30)<<series[i].plataforma<<endl;
    }
}
