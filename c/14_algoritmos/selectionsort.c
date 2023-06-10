/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
void selectSort(int *, int);

int main(int argc, char const *argv[])
{
    int array[] = {5, 7, -1, 6, 8, 2, 4, 3, 9, 11, 12};
    int arrayLen = sizeof(array) / sizeof(array[0]);
    selectSort(array, arrayLen);

    for (int i = 0; i < arrayLen; i++)
    {
        printf("[%d]", array[i]);
    }
    return 0;
}

void selectSort(int *array, int len)
{
    // printf("hola entre %d\n", array[0]);

    // recorrer el array, encontrar el minimo
    for (int arrayIndex = 0; arrayIndex < len; arrayIndex++)
    {
        int min = array[arrayIndex];
        int minIndex = arrayIndex;

        for (int indexMin = arrayIndex + 1; indexMin < len; indexMin++)
        {
            // si el minimo que ya tengo es mayor a los siguientes numeros
            if (min > array[indexMin])
            {
                // ese index es el nuevo minimo
                min = array[indexMin];
                minIndex = indexMin;
            }
        }
        // aqui ya tengo el minimo de todo el array.
        //  intercambia el valor de array[arrayIndex] con el array[minIndex]
        int temp = array[arrayIndex];
        array[arrayIndex] = array[minIndex];
        array[minIndex] = temp;
    }
}
