/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:La entrada estándar y la salida estándar son vistos en C como archivos ya abiertos que permiten enviar lo que se escriba a stdout, y recibir de lo que se lea desde stdin. En este vídeo hablo de las primitivas getchar, putchar y puts, para escribir cosas directamente sobre estos descriptores.
 */
#include <stdio.h>
#include <stdlib.h>
//
void loopy();
//
int main(int argc, char const *argv[])
{
    loopy();
    system("PAUSE");
    return 0;
}
//
void loopy()
{
    fputs("hola mundo", stdout);
    // int car = fgetc(stdin);
    // printf("ha dicho %c", car);

    puts("hola mundo ptus");
    putchar('h');
    // int car = getchar();
}