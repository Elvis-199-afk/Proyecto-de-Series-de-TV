#include"SerieTV.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	int opcion;
    do{	
        system("cls");
        cout<<"Menu Principal"<<endl;
        cout<<"1. Cliente"<<endl;
        cout<<"2. Tecnico"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
            	system("cls");
                menuCliente();
                break;
            case 2:
            	system("cls");
                if(iniciarSesionTecnico()){
                    menuTecnico();
                }else{
                    cout<<"Acceso denegado."<<endl;
                    system("pause");
                }
                break;
            default:
                if(opcion!=3){
                    cout<<"Ingrese una opcion valida\n\n";
                }
                system("pause");
                break;
        }
    }while(opcion!=3);
    return 0;
}