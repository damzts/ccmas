#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "pilas.h"

Nodo *crearNodo(URL url)
{
	Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
	nodo->url = url;
	nodo->siguiente = NULL;
	return nodo;
}

void destruirNodo(Nodo *nodo)
{
	nodo->siguiente = NULL;
	free(nodo);
}

void apilar(Pila *pila, URL url)
{
	Nodo *nodo = crearNodo(url);
	nodo->siguiente = pila->cima;
	pila->longitud++;
	pila->cima = nodo;
}

void desapilar(Pila *pila)
{

	if (pila->cima == NULL)
	{
		printf("No hay nada en la pila\n");
	}
	else
	{
		Nodo *eliminado = pila->cima;
		pila->cima = pila->cima->siguiente;
		pila->longitud--;
		destruirNodo(eliminado);
	}
}

URL seek(Pila *pila)
{
	if (pila->cima == NULL)
	{
		printf("No hay nada en la cima\n");
	}
	else
	{
		return pila->cima->url;
	}
}

Pila *crearPila()
{
	Pila *pila = (Pila *)malloc(sizeof(Pila));
	pila->cima = NULL;
	pila->longitud = 0;
	return pila;
}

void destruirPila(Pila *pila)
{
	while (pila->cima != NULL)
	{
		printf("la pila no esta vacia\n");
		desapilar(pila);
	}
	free(pila);
}

int longitud(Pila *pila)
{
	return pila->longitud;
}

int estaVacia(Pila *pila)
{
	return pila->longitud == 0;
}

int main()
{

	return 0;
}
