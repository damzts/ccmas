/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: To fill a matrix using pointers: Use a 1-dimensional array and fixup the indices.This can be used with both statically allocated (fixed-size) and dynamically allocated arrays.
 *https://stackoverflow.com/questions/3911400/how-to-pass-2d-array-matrix-in-a-function-in-c
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
/*
 *Prototypes
 */
void func(int *array, int rows, int cols);
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
    int rows, cols;
    int *x;
    srand(time(NULL));
    /* obtain values for rows & cols */
    rows = 10;
    cols = 6;
    /* allocate the array */
    x = (int *)malloc(rows * cols * sizeof *x); // un array 1D, donde cabe tanto renglones y columnas
    /* use the array */
    func(x, rows, cols);
    /* deallocate the array */
    free(x);
}
//
void func(int *array, int rows, int cols)
{
    int i, j;

    // renglones
    for (i = 0; i < rows; i++)
    {
        // columnas
        for (j = 0; j < cols; j++)
        {
            // j llena las columnas
            // el iterador i, salta a lo largo del array1D cambiando de renglon.
            array[i * cols + j] = rand() % 11;
            printf("%2d|", array[i * cols + j]);
        }
        printf("\n");
    }
}

/*

*/
