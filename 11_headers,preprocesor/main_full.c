/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum cargo_t
{
    ANALISTA,
    DESARROLLO,
    SISTEMAS
} Cargo;

typedef struct empleado_t
{
    char nombre[30];
    char apellido[30];
    char identificador[9];
    Cargo cargo;
} Empleado;

void print_empleado(Empleado *empl)
{
    char cargo[30];

    printf("---Empleado---|\n");
    printf("|Nombre:%-40s|\n", empl->nombre);
    printf("|Apellido:%-40s|\n", empl->apellido);
    printf("|PID:%-40s|\n", empl->identificador);

    switch (empl->cargo)
    {
    case ANALISTA:
        strncpy(cargo, "Analista", 30);
        break;
    case DESARROLLO:
        strncpy(cargo, "Desarrollador", 30);
        break;
    case SISTEMAS:
        strncpy(cargo, "Sistemas", 30);
        break;
    }

    printf("|Cargo:%-40s|\n", cargo);
    printf("----------------------\n");
}
int main(int argc, char const *argv[])
{

    Empleado e;
    strncpy(e.nombre, "Pepito", 30);
    strncpy(e.apellido, "Perez", 30);
    strncpy(e.identificador, "123456789", 9);
    e.cargo = ANALISTA;
    print_empleado(&e);
    return 0;
}
