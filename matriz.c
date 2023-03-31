// ctrl alt N for run
// ctrl shift B for build
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void loopy();

int main()
{

    srand(time(NULL));
    loopy();
    system("PAUSE");
    return 0;
}

void loopy()
{
    int ren = 10;
    int col = 6;
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
