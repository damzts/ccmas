#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(int *, int);

/*
la teoria de este codigo es definir que los arrays en C, son punteros.
por como la arquitectura de memoria esta construida, C permite enviar un array como puntero, como parametro de una funcion.
puedes quitar int edades[], los corchetes, debido a que es puntero
debes pasar el tamano del array si estas enviando un puntero
*/

float media(int *edades, int tam)
{
    // puedes quitar los corchetes de int edades[], para enviarlo como puntero.
    // debes pasar el tamano del array porque de un puntero no hay manera de saber donde termina el array.
    int sum = 0;

    for (int i = 0; i < tam; i++)
    {
        sum = sum + edades[i];
    }
    return sum / tam;
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int edades[8];
    int len = sizeof(edades) / sizeof(edades[0]);

    printf("array = |");
    for (int i = 0; i < len; i++)
    {
        edades[i] = rand() % 11;
        printf("%d,", edades[i]);
    }
    printf("\n");
    // aqui se utilizo la funcion media(), y ni siquiera es necesario usar el & en &edades, ya que internamente se infiere como direccion.
    printf("la media de calficacion es: %f\n", media(edades, len));
    return 0;
}

/*
de esta forma se garantiza mayor velocidad de codigo y optimizacion de memoria, al no tener que copiar las variables dentro de todo el array.
se accede directamente a los valores y se retorna el resultado del procesamiento.

conocer la longitud de un array: datatype size = sizeof(array_name) / sizeof(array_name[index]);
generar num aleatorio entre 0 y 10: srand(time(NULL)); rand()%11;
*/
