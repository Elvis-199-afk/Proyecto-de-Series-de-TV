#include<iostream>
#include<iomanip>
#include<string.h>
#include"SerieTV.h"
using namespace std;
void eliminarSerie(SerieTV *series, int &n){
    int indice;
    cout << "Lista de series:\n";
    for(int i=0;i<=n;i++){
        cout<<i+1<<". "<<series[i].titulo<<endl;
    }
    cout<<"Ingrese el numero de la posicion de la serie que desea eliminar: ";
    cin>>indice;
    for(int i=indice-1;i<n;i++){
        series[i]=series[i+1];
    }
    n--;
}
