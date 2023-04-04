#if !defined(listamia_h)
#define listamia_h

#include <stdlib.h>

typedef struct movie_t
{
    int id;
    char title[50];
    char description[128];
    char genre[20];
    int year;
    char imageUrl[128];

} Movie;

typedef struct nodo_t
{
    Movie *movie;
    nodo_t *siguiente;

} Nodo;

typedef struct lista_t
{
    Nodo *cabeza;
    int longitud;
} Lista;

// operaciones de nodo
Nodo *crearNodo(Movie *movie);
void destruirNodo(Nodo *nodo);
// crear lista con los nodos
Lista *crearLista();
// inserciones a la lista
void anadirInicio(Lista *lista, Movie *movie);
void anadirFinal(Lista *lista, Movie *movie);
void anadirDespues(Lista *lista, int posicion, Movie *movie);
// eliminar de la lista
void eliminarFinal(Lista *lista);
// imprimir lista;
void imprimirLista(Lista *lista);
#endif // listamia_h
