#include"SerieTV.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void menuTecnico(){
    int opcion;
    do{
        system("cls");
        cout<<"Menu Tecnico"<<endl;
        cout<<"1. Agregar serie"<<endl;
        cout<<"2. Eliminar serie"<<endl;
        cout<<"3. Mostrar lista de series"<<endl;
        cout<<"4. Mostrar series por plataforma"<<endl;
        cout<<"5. Ver usuarios registrados"<<endl;
        cout<<"6. Regresar"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:
            	system("cls");
                agregarSerie(series,n);
                system("pause");
                break;
            case 2:
            	system("cls");
            	mostrarSeries(series,n);
            	cout<<endl;
                eliminarSerie();
                system("pause");
                break;
            case 3:
            	system("cls");
                mostrarSeries(series,n);
                system("pause");
                break;
            case 4:
            	system("cls");
                mostrarSeriesPorPlataforma();
                system("pause");
                break;
            case 5:
            	system("cls");
                mostrarUsuariosRegistrados();
                system("pause");
                break;
        }
    }while(opcion!=6);
}
void menuCliente(){
    int op;
    Usuario usuarioActual;
    do{
        system("cls");
        cout<<"Menu Cliente"<<endl;
        cout<<"1. Iniciar sesion"<<endl;
        cout<<"2. Registrarse"<<endl;
        cout<<"3. Recuperar contraseña"<<endl;
        cout<<"4. Regresar"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>op;
        switch(op){
            case 1:
                if(iniciarSesionCliente(usuarioActual)){
                    int op2;
                    do{
                        system("cls");
                        cout<<"Menu Preferencias"<<endl;
                        cout<<"1. Establecer preferencias"<<endl;
                        cout<<"2. Ver series preferidas"<<endl;
                        cout<<"3. Series recomendadas"<<endl;
                        cout<<"4. Regresar"<<endl;
                        cout<<"Seleccione una opcion: ";
                        cin>>op2;
                        switch(op2){
                            case 1:
                            	system("cls");
                                establecerPreferencias(usuarioActual);
                                system("pause");
                                break;
                            case 2:
                            	system("cls");
                                mostrarSeriesPreferidas(usuarioActual);
                                system("pause");
                                break;
                            case 3:
                                system("cls");
                                mostrarSeriesRecomendadas(usuarioActual);
                                system("pause");
                                break;
                            default:
                                if(op2!=4){
                                    cout<<"Ingrese una opcion valida\n\n";
                                    system("pause");
                                }
                                break;
                        }
                    }while(op2!=4);
                }else{
                    cout<<"Usuario no registrado."<<endl;
                    system("pause");
                }
                break;
            case 2:
            	system("cls");
                registrarUsuario();
                system("pause");
                break;
            case 3:
                system("cls");
                recuperarContrasenia();
                system("pause");
                break;
            default:
                if(op!=4){
                    cout<<"Ingrese una opcion valida\n\n";
                }
                system("pause");
                break;
        }
    }while(op!=4);
}