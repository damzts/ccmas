/*
to avoid linker problems, you must use the "if not defined" preprocessor directive.
or #pragma once -> but i need to research more
 */
#ifndef sueldos_h
#define sueldos_h // if not defined, then define.

/*our header file needs the struct declaration of Empleado to properly work, so we include it.*/
#include "empleados.h" //problem can occur here, but inside our main.c

/*
our main.c, needs both declaration for Empleado and Sueldo., and Sueldo also includes Empleado.
so multiple declarations can happen if you dont tell the pre-compiler that somethings is already declared
*/

void pagar_sueldo(Empleado *e);

#endif // !sueldos_h
