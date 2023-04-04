/*
 * =====================================================================================
 *
 *       Filename:  12_less-common-multiple.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/03/2023 12:38:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

typedef struct FactoresPrimos_t
{
    int *factoresPrimos; // puntero a un array
    int len;             // longitud del array al que apunta
} FactoresPrimos;

FactoresPrimos *getPrimeFactors(int);
int getLCM(int, int);
/*
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
    // algoritmo
    // descomponer ambos numeros en factores primos
    // hacer la union de los factores primos
    // multiplicar los factores primos
    // el resultado
    // getLCM(15, 20);
    int a=15,b=20;
    printf("\nEl lcm de %d:%d es: %d\n", a, b, getLCM(a, b));
    return EXIT_SUCCESS;
}
/*
 * ===  FUNCTION  ======================================================================
 *         Name:  getPrimeNumbers
 *  Description:
 * =====================================================================================
 */
FactoresPrimos_t *getPrimeFactors(int a)
{
    int resultn = a;
    int arrayFactor[10];
    int counter = 0;
    // decomposing
    while (resultn != 1)
    {
        for (int i = 2; i < a; i++)
        {
            if (resultn % i == 0)
            {
                int factor = i;
                // printf("%d,", factor);
                resultn = resultn / factor;
                arrayFactor[counter] = factor;
                counter++;
                break;
            }
        }
    }
    // printf("entre a get prime factors\n");
    FactoresPrimos *f = (FactoresPrimos *)malloc(sizeof(FactoresPrimos));
    f->len = counter;
    int *arrayFactorRezided = (int *)malloc(sizeof(int) * counter);
    for (int j = 0; j < counter; j++)
    {
        arrayFactorRezided[j] = arrayFactor[j];
        printf("%d:", arrayFactor[j]);
    }
    f->factoresPrimos = arrayFactorRezided;
    printf("\n");
    return f;
}
/*
 * ===  FUNCTION  ======================================================================
 *         Name:  getLCM
 *  Description:
 * =====================================================================================
 */
int getLCM(int a, int b)
{
    FactoresPrimos *arrayA = getPrimeFactors(a); // puntero a un array
    FactoresPrimos *arrayB = getPrimeFactors(b); // puntero a un array
    printf("nomames\n");
    // printf("\n%d\n",array->len);
    // printf("\n%d\n", array->factoresPrimos[2]);
    // 1.hacer la union
    // 5 5 : 5 3 = 5 5 3
    // 5 3 : 5 2 2 = 5 3 2 2
    int arrayUnion[20];
    int counter = 0;

    for (int indexArrayA = 0; indexArrayA < arrayA->len; indexArrayA++)
    {
        int notFound = 1;
        // pivot A
        for (int indexArrayB = 0; indexArrayB < arrayB->len; indexArrayB++)
        {
            if (arrayA->factoresPrimos[indexArrayA] == arrayB->factoresPrimos[indexArrayB])
            {
                arrayUnion[counter] = arrayA->factoresPrimos[indexArrayA];
                counter++;
                arrayA->factoresPrimos[indexArrayA] = 1;
                arrayB->factoresPrimos[indexArrayB] = 1;
                notFound = 0;
                break;
            }
        }

        if (notFound == 1)
        {
            arrayUnion[counter] = arrayA->factoresPrimos[indexArrayA];
            counter++;
        }
    }

    for (int indexArrayB2 = 0; indexArrayB2 < arrayB->len; indexArrayB2++)
    {
        int notFound = 1;
        // pivot B
        for (int indexArrayA2 = 0; indexArrayA2 < arrayA->len; indexArrayA2++)
        {
            if (arrayB->factoresPrimos[indexArrayB2] == arrayA->factoresPrimos[indexArrayA2])
            {
                arrayUnion[counter] = arrayB->factoresPrimos[indexArrayB2];
                counter++;
                arrayB->factoresPrimos[indexArrayB2] = 1;
                arrayA->factoresPrimos[indexArrayA2] = 1;
                notFound = 0;
                break;
            }
        }
        if (notFound == 1)
        {
            arrayUnion[counter] = arrayB->factoresPrimos[indexArrayB2];
            counter++;
        }
    }

    // multiplicar el array resultante
    int lcm = 1;
    for (int indexArrayUnion = 0; indexArrayUnion < counter; indexArrayUnion++)
    {
        printf("%d:", arrayUnion[indexArrayUnion]);
        lcm = lcm * arrayUnion[indexArrayUnion];
    }

    return lcm;
}
