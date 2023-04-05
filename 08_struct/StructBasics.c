/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: Como declarar una estructura, acceder a sus elementos para lectura y escritura
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cuenta
{
    char nombre[30];
    char apellido[30];
    int saldo;
    int identificador;
}; // necesario poner ; al final de una structura

void imprimir_datos(struct cuenta);
void imprimir_datos_p(struct cuenta *);
//  con typedef se puede referenciar mas facil una estructura, se vera mas adelante.

int main(int argc, char const *argv[])
{
    struct cuenta c1;        // instanciar un objeto, del tipo struct cuenta, con nombre de variable c1
    c1.identificador = 1235; // accedemos a sus campos internos con el operador punto ' . '
    c1.saldo = 400;
    strcpy(c1.nombre, "david");         // es insegura la funcion "strcpy" porque no se le indica la longitud maxima del array.
    strncpy(c1.apellido, "torres", 30); // a cambio usar "strncpy"

    /*en una cadena de caracteres, el char null indica el fin de la cadena.*/

    imprimir_datos(c1);
    imprimir_datos_p(&c1); // se envia & la direccion de la estructura
    return 0;
}
// pasar estructura por valor
void imprimir_datos(struct cuenta c)
{
    printf("El cliente %s %s, tiene %d pesos en su cuenta.\n", c.nombre, c.apellido, c.saldo);
}
// lo normal al pasar estructuras es hacerlo por puntero, para no hacer una copia de toda la estructura.
void imprimir_datos_p(struct cuenta *c)
{
    printf("El cliente %s %s, tiene %d pesos en su cuenta.\n", (*c).nombre, c->apellido, c->saldo);
    /*
    se debe usar el operador "->" para acceder a los valores de una estructura enviada por puntero, dereferencia y accesa.
    c->nombre == (*c).nombre
    */
}
