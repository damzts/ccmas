/*
    for every header, you write a headername.c which includes all the function implementation.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"

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