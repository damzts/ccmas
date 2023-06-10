/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

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

Stack *crearStack()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = NULL;
    stack->longitud = 0;
    return stack;
}

void push(Stack *stack, Movie *movie)
{
    Nodo *nodo = crearNodo(movie);
    if (stack->top == NULL)
    {
        stack->top = nodo;
        stack->longitud++;
    }
    else
    {
        nodo->siguiente = stack->top;
        stack->top = nodo;
    }
}

void printStack(Stack *stack)
{
    if (stack->top == NULL)
    {
        printf("No hay nada en el stack\n");
    }
    else
    {
        Nodo *puntero = stack->top;
        while (puntero->siguiente)
        {
            printf("[%s] ", puntero->movie->title);
            puntero = puntero->siguiente;
        }
        printf("[%s] \n", puntero->movie->title);
    }
}

void pop(Stack *stack)
{
    if (stack->top == NULL)
    {
        printf("Nada para hacer pop\n");
    }
    else
    {
        Nodo *eliminado = stack->top;
        stack->top = eliminado->siguiente;
        free(eliminado);
    }
}

int main(int argc, char const *argv[])
{

    Movie movie1;
    Movie movie2;
    Movie movie3;

    strcpy(movie1.title, "elpadrino1");
    strcpy(movie2.title, "elpadrino2");
    strcpy(movie3.title, "elpadrino3");
    //
    Stack *comandas = crearStack();
    printf("Imprimimos el stack vacio\n");
    printStack(comandas);
    //
    printf("Hacemos un push\n");
    push(comandas, &movie1);
    printStack(comandas);
    //
    printf("Hacemos otro push\n");
    push(comandas, &movie2);
    printStack(comandas);
    //
    printf("Un ultimo push\n");
    push(comandas, &movie3);
    printStack(comandas);
    //
    printf("Hacemos un pop\n");
    pop(comandas);
    printStack(comandas);
    return 0;
}
