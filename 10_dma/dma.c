#include <stdio.h>
#include <stdlib.h> // aqui estan las funciones de dma

/*
la memoria dinamica se gestiona manualmente
alojar,liberar

*/
int main(int argc, char const *argv[])
{
    int longitud;
    printf("Cuantos elementos quieres alojar:?");
    scanf("%d", &longitud);
    // numero de elementos que queremos alojar, multiplicado por el tamano del tipo de variable
    // ej int = 4bytes
    float *valores = (float *)malloc(longitud * sizeof(float));
    // la funcion malloc se debe castear como float puntero, ya que regresa un puntero
    // si la funcion malloc devuelve un null
    if (valores == NULL)
    {
        printf("no tienes tanta memoria\n");
        return 1;
    }
    //
    for (int i = 0; i < longitud; i++)
    {
        valores[i] = 5.5;
        printf("%.2f,",valores[i]);
    }
    printf("\ntodo esta correcto!.\n");
    // hay que liberar la memoria
    free(valores);
    // despues de un free, no puedes usar la misma variable amenos que hagas un malloc denuevo.
    return 0;
}
