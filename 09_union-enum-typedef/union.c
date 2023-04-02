#include <stdio.h>

union mi_union_t{
    int entero;
    float flotante;
};
//en una union ambas variables entero y flotante, comparten la misma direccion de memoria
//dos punteros que apuntan a la misma direccion
// acceder al mismo contenido de memoria de varias formas


int main(int argc, char const *argv[])
{
    union mi_union_t u;
    u.entero = 123456;
    u.flotante = 2.54E6;
    printf("entero:%d\n",u.entero);
    return 0;
}
