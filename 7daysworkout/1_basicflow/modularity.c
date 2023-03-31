/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Practice writing functions with arguments and return values
 */
#include <stdio.h>
#include <stdlib.h>
/*
 *Prototypes
 */
void foo();

int main(int argc, char const *argv[])
{
    foo();
    return 0;
}

void foo()
{
    const int ren = 10;
    const int col = 6;
    int x, i, numeros[ren][col];

    /* rellenamos la matriz */
    for (x = 0; x < ren; x++)
    {
        for (i = 0; i < col; i++)
        {
            numeros[x][i] = rand() % 11;
        }
    }

    /* visualizamos la matriz */
    for (x = 0; x < ren; x++)
    {
        for (i = 0; i < col; i++)
        {
            printf("%d|", numeros[x][i]);
        }
        printf("\n");
    }

    printf("el numero en 3,4 es:%d\n", numeros[0][3]);
}

void fullFillMatrix()
{
}

void printMatrix()
{
}
