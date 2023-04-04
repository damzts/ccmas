#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

Nodo *CrearNodo(Libro *libro)
{
	Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
	strncpy(nodo->libro.titulo, libro->titulo, 50);
	strncpy(nodo->libro.autor, libro->autor, 50);
	strncpy(nodo->libro.isbn, libro->isbn, 13);
	nodo->siguiente = NULL;
	return nodo;
}

void DestruirNodo(Nodo *nodo)
{
	free(nodo);
}

Lista *CrearLista()
{
	Lista *lista = (Lista *)malloc(sizeof(Lista));
	lista->cabeza = NULL;
	lista->longitud = 0;
	return lista;
}

void DestruirLista(Lista *lista)
{
	if (lista->cabeza != NULL)
	{
		printf("La lista no esta vacia\n");
	}
	else
	{
		free(lista);
	}
}

void InsertarPrincipio(Lista *lista, Libro *libro)
{
	Nodo *nodo = CrearNodo(libro);
	nodo->siguiente = lista->cabeza;
	lista->cabeza = nodo;
	lista->longitud++;
}

void InsertarFinal(Lista *lista, Libro *libro)
{
	Nodo *nodo = CrearNodo(libro);
	Nodo *puntero = lista->cabeza;
	if (lista->cabeza == NULL)
	{
		lista->cabeza = nodo;
	}
	else
	{
		while (puntero->siguiente)
		{
			puntero = puntero->siguiente;
		}
		puntero->siguiente = nodo;
	}
	lista->longitud++;
}

void InsertarDespues(int n, Lista *lista, Libro *libro)
{
	Nodo *nodo = CrearNodo(libro);
	if (lista->cabeza == NULL)
	{
		lista->cabeza = nodo;
	}
	else
	{
		Nodo *puntero = lista->cabeza;
		int posicion = 0;
		while (posicion < n && puntero->siguiente)
		{
			puntero = puntero->siguiente;
			posicion++;
		}
		nodo->siguiente = puntero->siguiente;
		puntero->siguiente = nodo;
	}
	lista->longitud++;
}

Libro *Obtener(int n, Lista *lista)
{
	if (lista->cabeza == NULL)
	{
		return NULL;
	}
	else
	{
		int posicion = 0;
		Nodo *puntero = lista->cabeza;
		while (posicion < n && puntero->siguiente)
		{
			puntero = puntero->siguiente;
			posicion++;
		}
		if (posicion != n)
		{
			return NULL;
		}
		else
		{
			return &puntero->libro;
		}
	}
}

int Contar(Lista *lista)
{
	return lista->longitud;
}

int EstaVacia(Lista *lista)
{
	return lista->cabeza == NULL;
}

void EliminarPrincipio(Lista *lista)
{
	if (lista->cabeza)
	{
		Nodo *eliminado = lista->cabeza;
		lista->cabeza = lista->cabeza->siguiente;
		DestruirNodo(eliminado);
		lista->longitud--;
	}
}

void EliminarUltimo(Lista *lista)
{
	if (lista->cabeza)
	{
		Nodo *puntero = lista->cabeza;
		while (puntero->siguiente->siguiente)
		{
			puntero = puntero->siguiente;
		}
		Nodo *eliminado = puntero->siguiente;
		puntero->siguiente = NULL;
		DestruirNodo(eliminado);
		lista->longitud--;
	}
}

int main(int argc, char const *argv[])
{

	return 0;
}
