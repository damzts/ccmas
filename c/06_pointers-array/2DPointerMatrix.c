/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: To fill a matrix using pointers: Use a (dynamically allocated) array of pointers to (dynamically allocated) arrays.
 *This is used mostly when the array bounds are not known until runtime.
 *https://stackoverflow.com/questions/3911400/how-to-pass-2d-array-matrix-in-a-function-in-c
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
/*
 *Prototypes
 */
void func(int **array, int rows, int cols);

int main()
{
    int rows, cols, i;
    int **x; // double pointer
    srand(time(NULL));
    /* obtain values for rows & cols */
    rows = 10;
    cols = 6;
    /* allocate the array, length is rows, size is another pointer */
    x = (int **)malloc(rows * sizeof *x);
    /* for every row, which is a pointer also, allocate another array, length is cols, size is int*/
    for (i = 0; i < rows; i++)
    {
        x[i] = (int *)malloc(cols * sizeof *x[i]);
    }

    /* so you end up with:
        **x = malloc(rows * sizeof *x);
        0x5100 |'*x'|  ptr-> malloc(cols * sizeof *x[i]);   | int | int | int | int | int | int |
        0x5101 |'*x'|  ptr-> ...                            | int | int | int | int | int | int |
        0x5102 |'*x'|  ptr-> ...                            | int | int | int | int | int | int |
        0x5103 |'*x'|  ptr-> ...                            | int | int | int | int | int | int |
        0x5104 |'*x'|  ptr-> ...                            | int | int | int | int | int | int |
        0x5105 | \0 |  ptr-> ...                            | int | int | int | int | int | int |
        len = rows                                          len = cols
        size = ptr                                          size = *x[i] = *(*x) = pointer x dereferenced = int

        final result = x[rows][cols]
    */

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
