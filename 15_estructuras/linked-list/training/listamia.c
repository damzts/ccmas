/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h.>
#include "listamia.h"

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

Lista *crearLista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->cabeza = NULL;
    lista->longitud = 0;
    return lista;
}

void anadirInicio(Lista *lista, Movie *movie)
{
    Nodo *nodo = crearNodo(movie);
    nodo->siguiente = lista->cabeza;
    lista->cabeza = nodo;
    lista->longitud++;
}

void imprimirLista(Lista *lista)
{
    if (lista->cabeza == NULL)
    {
        printf("La lista esta vacia \n");
    }
    else
    {
        Nodo *puntero = lista->cabeza;
        while (puntero->siguiente)
        {
            printf("[%s] ", puntero->movie->title);
            puntero = puntero->siguiente;
        };
        printf("[%s]\n", puntero->movie->title);
    }
}

void eliminarFinal(Lista *lista)
{
    if (lista->cabeza == NULL)
    {
        printf("la lista esta vacia\n");
    }
    else
    {
        Nodo *puntero = lista->cabeza;
        while (puntero->siguiente->siguiente)
        {
            puntero = puntero->siguiente;
        }
        Nodo *eliminado = puntero->siguiente->siguiente;
        puntero->siguiente = NULL;
        destruirNodo(eliminado);
    }
}

int main(int argc, char const *argv[])
{
    Movie movie1;
    Movie movie2;

    strncpy(movie1.title, "el padrino", 50);
    strncpy(movie2.title, "el padrino 2", 50);

    // printf("%s\n", movie1.title);
    Lista *listadepeliculas = crearLista();
    printf("creamos la lista y no metemos nada;\n");
    imprimirLista(listadepeliculas);
    //
    printf("anadimos al principio e imprimimos;\n");
    anadirInicio(listadepeliculas, &movie1);
    imprimirLista(listadepeliculas);

    printf("anadimos otra cosa al principio\n");
    anadirInicio(listadepeliculas, &movie2);
    imprimirLista(listadepeliculas);

    printf("eliminamos del final\n");
    eliminarFinal(listadepeliculas);
    imprimirLista(listadepeliculas);
    return 0;
}
