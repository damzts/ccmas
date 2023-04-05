/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: Whats a typedef?
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum tipo_empleado
{
    Analista,
    Programador
};
struct empleado_t
{
    char nombre[20];
    char apellido[20];
    char nif[10];
    char telefono[10];
    enum tipo_empleado tipo;
};
typedef struct empleado_t Empleado;
/*Inline way to define a typedef struct.
    typedef struct empleado_t{
        char nombre[20];
        char apellido[20];
        char nif[10];
        char telefono[10];
        enum tipo_empleado tipo;
    }Empleado;
*/
void imprimir(struct empleado_t *);
//
int main(int argc, char const *argv[])
{
    struct empleado_t empleado; // usar todo el nombre
    Empleado empleado2;         // usar el typedef
    strcpy(empleado.nombre, "david");
    strcpy(empleado2.nombre, "david - but struct declared with typedef");
    imprimir(&empleado);
    imprimir(&empleado2);
    //
    return 0;
}
//
void imprimir(struct empleado_t *empleado)
{
    printf("%s\n", empleado->nombre);
}