#include "SerieTV.h"
#include<iostream>
#include<iomanip>
#include<string>
void mostrarUsuariosRegistrados(){
    cout<<left<<setw(35)<<"\nNombre Completo"<<setw(10)<<"Edad"<<setw(30)<<"Email"<<setw(20)<<"Nacionalidad"<<setw(15)<<"Preferencias"<<endl;
    for(int i=0;i<10;i++){
        if(usuarios[i].registrado){
            cout<<left<<setw(35)<<usuarios[i].nombreCompleto<<setw(10)<<usuarios[i].edad<<setw(30)<<usuarios[i].email<<setw(20)<<usuarios[i].nacionalidad<<setw(15)<<usuarios[i].preferencias<<endl;
        }
    }
    cout<<endl;
}
bool iniciarSesionTecnico(){
    string email;
    int password;
    cout<<"Email: ";
    cin>>email;
    cout<<"Password: ";
    cin>>password;
    for(int i=0;i<2;i++){
        if(tecnicosEmails[i]==email&&tecnicosPasswords[i]==password){
            return true;
        }
    }
    return false;
}
void registrarUsuario(){
    for(int i=0;i<10;i++){
        if(!usuarios[i].registrado){
            cout<<"Nombre Completo: ";
            cin.ignore();
            getline(cin,usuarios[i].nombreCompleto);
            cout<<"Edad: ";
            cin>>usuarios[i].edad;
            while(usuarios[i].edad<0){
                cout<<"Ingrese una edad valida\n";
                cin>>usuarios[i].edad;
            }
            cout<<"Email: ";
            cin.ignore();
            getline(cin,usuarios[i].email);
            cout<<"Contrasenia: ";
            getline(cin,usuarios[i].contrasenia);
            cout<<"Nacionalidad: ";
            getline(cin,usuarios[i].nacionalidad);
            usuarios[i].registrado=true;

            break;
        }
    }
}
bool iniciarSesionCliente(Usuario &usuarioActual){
	system("cls");
    string email,contra;
    cout<<"Email: ";
    cin>>email;
    cout<<"Contrasenia: ";
    cin>>contra;
    for(int i=0;i<10;i++){
        if(usuarios[i].email==email&&usuarios[i].registrado&&usuarios[i].contrasenia==contra){
            usuarioActual=usuarios[i];
            return true;
        }
    }
    return false;
}
void recuperarContrasenia(){
    string email,nacionalidad,nombre;
    bool comprobar=false;
    cout<<"Ingrese el nombre completo: ";
    cin.ignore();
    getline(cin,nombre);
    cout<<"Ingrese el Email: ";
    getline(cin,email);
    cout<<"Ingrese la nacionalidad: ";
    getline(cin,nacionalidad);
    for(int i=0;i<10;i++){
        if(usuarios[i].nombreCompleto==nombre&&usuarios[i].email==email&&usuarios[i].nacionalidad==nacionalidad){
            cout<<"Ingrese la nueva contrasenia: ";
            cin>>usuarios[i].contrasenia;
            comprobar=true;
            break;
        }
    }
    if(comprobar==false){
        cout<<"No se ha podido hacer una recuperacion de contrasenia\n\n";
    }
}
void establecerPreferencias(Usuario &usuarioActual){
    cout<<"Ingrese sus preferencias de generos las cuales son Drama, Ciencia Ficcion, Fantasia, Comedia, Accion, Animacion y Crimen (separados por comas): ";
    cin.ignore();
    getline(cin,usuarioActual.preferencias);
    for(int i=0;i<10;i++){
        if(usuarios[i].email==usuarioActual.email){
            usuarios[i].preferencias=usuarioActual.preferencias;
            break;
        }
    }
}
void mostrarSeriesPreferidas(Usuario &usuarioActual){
    string preferencias=usuarioActual.preferencias;
    cout<<"Series preferidas:"<<endl;
    cout<<left<<setw(25)<<"Nombre"<<setw(20)<<"Genero"<<setw(15)<<"Anio"<<setw(15)<<"Valoracion"<<setw(15)<<"Plataforma"<<endl;
    for(int i=0;i<n;i++){
        if(preferencias.find(series[i].genero)!=string::npos){
            cout<<left<<setw(25)<<series[i].nombre<<setw(20)<<series[i].genero<<setw(15)<<series[i].anioEstreno<<setw(15)<<series[i].valoracion<<setw(15)<<series[i].plataforma<<endl;
        }
    }
    cout<<endl;
}
void mostrarSeriesRecomendadas(Usuario &usuarioActual){
    cout<<"Las series recomendadas son las siguientes: "<<endl<<endl;
    for(int i=0;i<n;i++){
        if(series[i].valoracion>=8.5){
            cout<<left<<setw(25)<<series[i].nombre<<setw(20)<<series[i].genero<<setw(15)<<series[i].anioEstreno<<setw(15)<<series[i].valoracion<<setw(15)<<series[i].plataforma<<endl;
        }
    }
    cout<<endl;
}