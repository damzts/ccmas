/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: Learn the DMA basics - dynamic memory allocation
 */
#include <stdio.h>
#include <stdlib.h> // aqui estan las funciones de dma

/*
    la memoria dinamica se gestiona manualmente | alojar,realocar, liberar
*/
int main(int argc, char const *argv[])
{
    int longitud;
    printf("Cuantos elementos quieres alojar:?");
    scanf("%d", &longitud);
    float *valores = (float *)malloc(longitud * sizeof(float)); // numero de elementos que queremos alojar, multiplicado por el tamano del tipo de variable.
    // ej int = 4bytes
    // la funcion malloc devuelve un puntero, se debe castear como un puntero del datatype que almacena.
    // si la funcion malloc devuelve un null, algo salio mal
    if (valores == NULL)
    {
        printf("algo salio mal en la alocacion\n");
        printf("o no tienes tanta memoria\n");
        // segmentation core dump, memory overflow
        return 1;
    }
    // introducir algunos valores
    for (int i = 0; i < longitud; i++)
    {
        valores[i] = 1.0 + (1.1 * i);
        printf("%.2f,", valores[i]);
    }
    printf("\ntodo esta correcto!.\n");
    // hay que liberar la memoria
    free(valores);
    // despues de un free, no puedes usar la misma variable amenos que hagas un malloc denuevo.
    return 0;
}
