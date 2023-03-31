/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: Use a (dynamically allocated) array of pointers to (dynamically allocated) arrays. This is used mostly when the array bounds are not known until runtime.
 *https://stackoverflow.com/questions/3911400/how-to-pass-2d-array-matrix-in-a-function-in-c
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
/*
 *Prototypes
 */
void func(int **array, int rows, int cols);
/*
    0x5100 |'B'|  "name" is an address constant that has value hex 5100
    0x5101 |'i'|  char: 1 byte
    0x5102 |'l'|  char: 1 byte
    0x5103 |'l'|  char: 1 byte
    0x5104 |'s'|  char: 1 byte
    0x5105 |\0 |  char: 1 byte
    0x5106 |   |  p is a pointer: 1 word
    0x5109 |   |  q is a pointer: 1 word
*/
int main()
{
    int rows, cols, i;
    int **x;
    srand(time(NULL));
    /* obtain values for rows & cols */
    rows = 10;
    cols = 6;
    /* allocate the array */
    x = (int **)malloc(rows * sizeof *x);
    for (i = 0; i < rows; i++)
    {
        x[i] = (int *)malloc(cols * sizeof *x[i]);
    }

    /* use the array */
    func(x, rows, cols);

    /* deallocate the array */
    for (i = 0; i < rows; i++)
    {
        free(x[i]);
    }
    free(x);

    return 0;
}

void func(int **array, int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 11;
            printf("%2d|", array[i][j]);
        }
        printf("\n");
    }
}
