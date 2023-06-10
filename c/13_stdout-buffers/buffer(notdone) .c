/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   funcionamiento de un buffer para que sepamos cómo controlar la forma en la que se vuelca contenido en un archivo.
 */
#include <stdio.h>
#include <stdlib.h>
/*
 *Prototypes
 */
void loopy();

int main(int argc, char const *argv[])
{
    loopy();
    system("PAUSE");
    return 0;
}

void loopy()
{
    fputs("hola mundo", stdout);
    // int car = fgetc(stdin);
    // printf("ha dicho %c", car);

    puts("hola mundo ptus");
    putchar('h');
    // int car = getchar();
}