#include"SerieTV.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void eliminarSerie(){
    string nombre;
    cout<<"\nNombre de la serie a eliminar: ";
    cin.ignore();
    getline(cin,nombre);
    bool encontrada=false;
    for(int i=0;i<n;i++){
        if(series[i].nombre==nombre){
            for(int j=i;j<n-1;j++){
                series[j]=series[j+1];
            }
        	n--;
            encontrada=true;
        	break;
    	}
    }
    if(encontrada){
        cout<<"Serie eliminada correctamente"<<endl;
    }else{
        cout<<"Serie no encontrada"<<endl;
    }
    cout<<endl;
}