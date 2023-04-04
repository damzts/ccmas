/*
un .h es una version minificada del .c que solo tiene contiene definiciones de estructuras y prototipos de funcion.
*/

#ifndef lista_h
#define lista_h

#include <stdio.h>
#include "libro.h"

typedef struct Nodo
{
	Libro libro;
	struct Nodo *siguiente;
} Nodo;

typedef struct Lista
{
	Nodo *cabeza;
	int longitud;
} Lista;
#endif
