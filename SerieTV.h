#ifndef SERIETV_H
#define SERIETV_H

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Serie{
    string nombre;
    string genero;
    int anioEstreno;
    float valoracion;
    string plataforma;
};
struct Usuario{
    string nombreCompleto;
    int edad;
    string email;
    string nacionalidad;
    string preferencias;
    string contrasenia;
    bool registrado=false;
};
extern Serie series[50];
extern int n;
extern Usuario usuarios[10];
extern string tecnicosEmails[1];
extern int tecnicosPasswords[1];

void mostrarSeries(Serie series[],int &n);
void agregarSerie(Serie series[],int &n);
void eliminarSerie();
void mostrarSeriesPorPlataforma();
void mostrarUsuariosRegistrados();
bool iniciarSesionTecnico();
void menuTecnico();
void registrarUsuario();
bool iniciarSesionCliente(Usuario &usuarioActual);
void recuperarContrasenia();
void establecerPreferencias(Usuario &usuarioActual);
void mostrarSeriesPreferidas(Usuario &usuarioActual);
void mostrarSeriesRecomendadas(Usuario &usuarioActual);
void menuCliente();
#endif