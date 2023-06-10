/*
un .h es una version minificada del .c que solo tiene contiene definiciones de estructuras y prototipos de funcion.
*/

#ifndef lista_h
#define lista_h

#include <stdio.h>
#include "libro.h"

typedef struct Nodo_t
{
	Libro libro;
	struct Nodo_t *siguiente;
} Nodo;

typedef struct Lista
{
	Nodo *cabeza;
	int longitud;
} Lista;

// operaciones de los nodos
Nodo *CrearNodo(Libro *libro);
void DestruirNodo(Nodo *nodo);
// operaciones de la lista
Lista *CrearLista();
void DestruirLista(Lista *lista);
// anadir a la lista
void InsertarPrincipio(Lista *lista, Libro *libro);
void InsertarFinal(Lista *lista, Libro *libro);
void InsertarDespues(int n, Lista *lista, Libro *libro);
// eliminar de la lista
void EliminarPrincipio(Lista *lista);
void EliminarUltimo(Lista *lista);
// operaciones normales
Libro *Obtener(int n, Lista *lista);
int Contar(Lista *lista);
int EstaVacia(Lista *lista);

#endif
