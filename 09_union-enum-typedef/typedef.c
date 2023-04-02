#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum tipo_empleado{Analista, Programador};
struct empleado_t{
    char nombre[20];
    char apellido[20];
    char nif[10];
    char telefono[10];
    enum tipo_empleado tipo; 
};
typedef struct empleado_t Empleado;
/*
    //syntax para declarar un struct con typedef, puedes ahorrarte usar struct empleado_t para instanciar el objeto
    typedef struct empleado_t{
        char nombre[20];
        char apellido[20];
        char nif[10];
        char telefono[10];
        enum tipo_empleado tipo;
    }Empleado;
*/
void imprimir(struct empleado_t* empleado){
    // printf("%s %s\n",empleado->nombre,empleado->apellido);
    printf("%s\n",empleado->nombre);
}
int main(int argc, char const *argv[])
{
    struct empleado_t empleado;
    Empleado empleado2;
    strcpy(empleado.nombre,"david");
    strcpy(empleado2.nombre,"david - but struct declared with typedef");
    imprimir(&empleado);
    imprimir(&empleado2);
    //
    return 0;
}

