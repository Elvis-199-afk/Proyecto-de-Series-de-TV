#include<iostream>
#include<iomanip>
#include<string.h>
#include"SerieTV.h"
using namespace std;
void mostrarListaPorPlataforma(SerieTV series[], int n){
    cout<<"Netflix: "<<endl;
    for(int i=0;i<=n;i++){
        if (strcmp(series[i].plataforma,"Netflix")==0) {
            cout<<setw(30)<<series[i].titulo;
            cout<<setw(20)<<series[i].genero;
            cout<<setw(10)<<series[i].anio;
            cout<<setw(15)<<series[i].temporadas;
            cout<<setw(30)<<series[i].plataforma<<endl;
        }
    }
    cout<<"\nAmazon Prime: "<<endl;
    for(int i=0;i<=n;i++){
        if (strcmp(series[i].plataforma,"Amazon Prime")==0) {
            cout<<setw(30)<<series[i].titulo;
            cout<<setw(20)<<series[i].genero;
            cout<<setw(10)<<series[i].anio;
            cout<<setw(15)<<series[i].temporadas;
            cout<<setw(30)<<series[i].plataforma<<endl;
        }
    }
    cout<<"\nDisney+: "<<endl;
    for(int i=0;i<=n;i++){
        if (strcmp(series[i].plataforma,"Disney+")==0) {
            cout<<setw(30)<<series[i].titulo;
            cout<<setw(20)<<series[i].genero;
            cout<<setw(10)<<series[i].anio;
            cout<<setw(15)<<series[i].temporadas;
            cout<<setw(30)<<series[i].plataforma<<endl;
        }
    }
    cout<<"\nOtras plataformas: "<<endl;
    for(int i=0;i<=n;i++){
        if (strcmp(series[i].plataforma,"Netflix")!=0 && strcmp(series[i].plataforma,"Amazon Prime")!=0 && strcmp(series[i].plataforma,"Disney+")!= 0){
            cout<<setw(30)<<series[i].titulo;
            cout<<setw(20)<<series[i].genero;
            cout<<setw(10)<<series[i].anio;
            cout<<setw(15)<<series[i].temporadas;
            cout<<setw(30)<<series[i].plataforma << endl;
        }
    }
}
