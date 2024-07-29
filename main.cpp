#include"SerieTV.h"				//Se incluye para tener acceso a las estructuras y funciones
#include<iostream>
#include<iomanip>				//Se utiliza para el ordenamiento de informacion
#include<string>
using namespace std;
int main(){
	int opcion;
    do{	
        system("cls");
        cout<<"Menu Principal"<<endl;		//MENU PRINCIPAL
        cout<<"1. Cliente"<<endl;
        cout<<"2. Tecnico"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
            	system("cls");
                menuCliente();		//Esta funcion te llevara al menu del cliente que esta en menuTecnico.cpp
                break;
            case 2:
            	system("cls");
                if(iniciarSesionTecnico()){
                    menuTecnico();	//Esta funcion te llevara al menu del tecnico que esta en menuTecnico.cpp
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