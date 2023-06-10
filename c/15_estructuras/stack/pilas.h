#if !defined(pilas_h)
#define pilas_h

#include <stdio.h>

typedef char *URL;

typedef struct nodo
{
    URL url;
    struct nodo *siguiente;
} Nodo;

typedef struct pila
{
    Nodo *cima;
    int longitud;
} Pila;

Nodo *crearNodo(URL url);
void destruirNodo(Nodo *nodo);

Pila *crearPila();
void destruirPila(Pila *pila);

void apilar(Pila *pila, URL url);
void desapilar(Pila *pila);
URL seek(Pila *pila);

int longitud(Pila *pila);
int estaVacia(Pila *pila);

#endif // pilas_h
