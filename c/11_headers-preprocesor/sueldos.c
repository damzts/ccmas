/*
    for every header, you write a headername.c which includes all the function implementation.
*/
#include <stdio.h>
#include "empleados.h"

void pagar_sueldo(Empleado *e)
{
    int sueldo = 2000;
    printf("Pagando %d a %s %s. \n", sueldo, e->nombre, e->apellido);
}