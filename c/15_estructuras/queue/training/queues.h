#if !defined(queues_h)
#define queues_h

#include <stdlib.h>

typedef struct movies_t
{
    int id;
    char title[50];
    char description[128];
    char genre[50];
    int year;
    char imageURL[50];
} Movie;

typedef struct nodo_t
{
    Movie *movie;
    struct nodo_t *siguiente;
} Nodo;

typedef struct queue_t
{
    Nodo *primero;
    Nodo *ultimo;
    int longitud;
} Queue;

Nodo *crearNodo(Movie *movie);
void destruirNodo(Nodo *nodo);
//
Queue *crearCola();
//
void encolar(Queue *cola, Movie *movie);
void desencolar(Queue *cola);
//
void imprimirCola(Queue *cola);

#endif // queues_h
