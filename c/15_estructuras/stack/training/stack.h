#if !defined(stack_h)
#define stack_h

#include <stdlib.h>

typedef struct movie_t
{
    char title[50];
    char description[50];
    char genre[50];
    char imageURL[50];
    int year;
} Movie;

typedef struct nodo_t
{
    Movie *movie;
    struct nodo_t *siguiente;
} Nodo;

typedef struct stack_h
{
    Nodo *top;
    int longitud;
} Stack;

//
Nodo *crearNodo(Movie *movie);
void destruirNodo(Nodo *nodo);
//
Stack *crearStack();
//
void push(Stack *stack, Movie *movie);
void printStack(Stack *stack);
void pop(Stack *stack);

#endif // stack_h
