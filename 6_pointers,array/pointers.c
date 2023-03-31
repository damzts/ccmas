#include <stdio.h>
#include <stdlib.h>

void jugar(int* n);

int main(int argc, char const *argv[])
{
    /* code */
    int x = 10;
    int* pX = &x;
    printf("x=%d\n",x);
    printf("Direccion x=%u\n",pX);
    jugar(pX);
    printf("jugarx=%d\n", *pX);

    system("pause");
    return 0;
}

void jugar(int* n){
    *n = *n * 2 + 1;
    // printf("jugarn=%u\n", *n);
}

/*
pequena prueba de codigo para recordar como declarar punteros, que guardan y como acceder al valor de ellos

al pasar como argumento un puntero, tu puedes alterar el valor de su campo, sin realizar copias de variable, por lo tanto mayor optimizacion
de memoria.

*/
