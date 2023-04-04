/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queues.h"

Nodo *crearNodo(Movie *movie)
{
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->movie = movie;
    nodo->siguiente = NULL;
    return nodo;
}

void destruirNodo(Nodo *nodo)
{
    free(nodo);
}

Queue *crearCola()
{
    Queue *cola = (Queue *)malloc(sizeof(Queue));
    cola->primero = NULL;
    cola->ultimo = NULL;
    cola->longitud = 0;
    return cola;
}

void encolar(Queue *cola, Movie *movie)
{
    Nodo *nodo = crearNodo(movie);
    if (cola->primero == NULL)
    {
        // printf("inserte el primero en la cola\n");
        cola->primero = nodo;
        cola->ultimo = nodo;
        cola->longitud++;
    }
    else
    {
        Nodo *puntero = cola->primero;
        while (puntero->siguiente)
        {
            puntero = puntero->siguiente;
        }
        puntero->siguiente = nodo;
        cola->ultimo = nodo;
        cola->longitud++;
    }
}

void desencolar(Queue *cola)
{
    if (cola->primero == NULL)
    {
        printf("Ya no hay nada en la cola\n");
    }
    else
    {
        Nodo *eliminado = cola->primero;
        cola->primero = eliminado->siguiente;
        destruirNodo(eliminado);
    }
}

void imprimirCola(Queue *cola)
{
    if (cola->primero == NULL)
    {
        printf("No hay nada en la cola\n");
    }
    else
    {
        Nodo *puntero = cola->primero;
        while (puntero->siguiente)
        {
            printf("[%s] ", puntero->movie->title);
            puntero = puntero->siguiente;
        }
        printf("[%s] \n", puntero->movie->title);
    }
}

int main(int argc, char const *argv[])
{
    Movie movie1;
    Movie movie2;
    Movie movie3;

    strncpy(movie1.title, "el padrino 1", 50);
    strncpy(movie2.title, "el padrino 2", 50);
    strncpy(movie3.title, "el padrino 3", 50);
    //
    Queue *coladeestrenos = crearCola();
    printf("imprimimos la cola vacia\n");
    imprimirCola(coladeestrenos);
    //
    printf("encolamos algo\n");
    encolar(coladeestrenos, &movie1);
    imprimirCola(coladeestrenos);
    //
    printf("encolamos otra cosa\n");
    encolar(coladeestrenos, &movie2);
    imprimirCola(coladeestrenos);
    //
    printf("desencolamos\n");
    desencolar(coladeestrenos);
    imprimirCola(coladeestrenos);
    return 0;
}