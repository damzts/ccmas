/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: Whats a union?
 */
#include <stdio.h>

/*
en una union, ambas variables comparten la misma direccion de memoria, dos punteros que apuntan a la misma direccion
se usa acceder al mismo contenido de memoria a traves de diferentes nombres
*/

union mi_union_t
{
    int entero;
    float flotante;
};

int main(int argc, char const *argv[])
{
    union mi_union_t u;
    u.entero = 123456;
    u.flotante = 2.54E6;
    printf("entero:%d\n", u.entero);
    return 0;
}
