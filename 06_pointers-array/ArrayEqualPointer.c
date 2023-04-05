/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: la teoria de este codigo es definir que los arrays en C, son punteros.
 *por como la arquitectura de memoria esta construida, C permite enviar un array como puntero, como parametro en una funcion.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(int *, int);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int edades[8];
    int len = sizeof(edades) / sizeof(edades[0]);

    // se llena el array con datos
    for (int i = 0; i < len; i++)
    {
        edades[i] = rand() % 11;
        printf("[%d]", edades[i]);
    }
    printf("\n");

    // se envia el array edades a la funcion media, no es necesario escribir &edades, ya un array se infiere como direccion.
    printf("la media de calficacion es: %f\n", media(edades, len));
    return 0;
}

/*
 *se remplaza int edades[] del argumento, y se deja int* edades, funcionara bien.
 *debes pasar el tamano del array, porque se pierde esta informacion.
 */
float media(int *edades, int tam)
{

    int sum = 0;

    for (int i = 0; i < tam; i++)
    {
        sum = sum + edades[i];
    }
    return sum / tam;
}

/*
*conclusion: al pasar un puntero se garantiza mayor velocidad de codigo y optimizacion de memoria
*al no tener que hacer una copia interna "stack memory" de las variables dentro de todo el array.
*se accede directo a los valores del array existente y se retorna el resultado del procesamiento.
//codigo util
conocer la longitud de un array: datatype array_name = sizeof(array_name) / sizeof(array_name[0]);
generar num aleatorio entre 0 y 10: srand(time(NULL)); rand()%11;
*/
