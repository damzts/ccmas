#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
en este codigo veremos como declarar una estructura, acceder a sus elementos para lectura y escritura
*/

struct cuenta
{
    char nombre[30];
    char apellido[40];
    int saldo;
    int identificador;
};
// necesario poner ; al final de una structura
void imprimir_datos(struct cuenta c)
{
    printf("El cliente %s %s, tiene %d pesos en su cuenta.\n", c.nombre, c.apellido, c.saldo);
}
// lo normal al pasar estructuras como argumento de una funcion es hacerlo como puntero, para no copiar toda la estructura de nuevo.
// por lo tanto la funcion queda
void imprimir_datos_p(struct cuenta *c)
{
    printf("El cliente %s %s, tiene %d pesos en su cuenta.\n", (*c).nombre, c->apellido, c->saldo);
    // se debe usar otra nomemclatura para acceder a los valores de la estructura por puntero
}
//
int main(int argc, char const *argv[])
{
    // para instanciar un objeto, del tipo struct cuenta, con nombre de variable c1
    //  con typedef se puede eliminar el struct cuenta, se vera mas adelante.
    struct cuenta c1;
    c1.identificador = 1235;
    strcpy(c1.nombre, "david");
    strcpy(c1.apellido, "torres");
    // es insegura la funcion stcpy porque no se le indica la longitud maxima del array.
    // en una cadena de caracteres, el char null indica el fin de la cadena.
    c1.saldo = 400;

    imprimir_datos(c1);
    imprimir_datos_p(&c1); // se envia & la direccion de la estructura
    return 0;
}
