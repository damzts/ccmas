/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>

void insertSort(int *, int);

int main(int argc, char const *argv[])
{
    int array[] = {6, 4, 2, 1, 3, 5};
    int arrayLen;
    arrayLen = sizeof(array) / sizeof(array[0]);

    insertSort(array, arrayLen);

    for (int i = 0; i < arrayLen; i++)
    {
        printf("[%d]", array[i]);
    }

    return 0;
}

void insertSort(int *array, int len)
{
    printf("hola entre\n");

    // recorre el array desde el 1
    for (int indexArray = 1; indexArray < len; indexArray++)
    {
        // guarda la posicion del elemento
        int pos = indexArray;

        // un elemento se puede mover a la izquierda, mientras no este ya en la primera posicion. pos > 0
        // y que el valor ala izquierda sea mayor array[pos - 1] > array[pos]

        // este while va desde el index hasta el 1 > utiliza la variable pos para irse reduciendo.
        while ((pos > 0) && (array[pos - 1] > array[pos]))
        {
            // intercambia los valores y resta 1 ala posicion.
            int temp = array[pos - 1];
            array[pos - 1] = array[pos];
            array[pos] = temp;
            pos--;
        }
    }
}