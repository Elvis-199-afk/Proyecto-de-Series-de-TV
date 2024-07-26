#ifndef SERIETV_H
#define SERIETV_H
struct SerieTV {
    char titulo[100];
    char genero[50];
    int anio;
    int temporadas;
    char plataforma[50];
};

void agregarSerie(SerieTV series[], int &n);
void eliminarSerie(SerieTV *series, int &n);
void mostrarLista(SerieTV *series, int n);
void mostrarListaPorPlataforma(SerieTV series[], int n);
//int mostrarMenu(const char *titulo, const string opciones[], int n) //no se si agregar aqui no es un void
//void menu_inicial()
#endif
