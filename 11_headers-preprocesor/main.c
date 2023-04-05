/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:  Did you review main_notheaders? Then now we are going to implement headers to build up our system.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
with the #include directive, and using "" for local directory, we are telling the preprocessor that pastes the content of the header in our code.
but be carefull, multiple definitions of the same function can occur, if you dont make things right.
linker problem its something that really happens. so go inside sueldos.h and empleados.h
*/
#include "empleados.h"
#include "sueldos.h"

int main(int argc, char const *argv[])
{
    Empleado e;
    strncpy(e.nombre, "Pepito", 30);
    strncpy(e.apellido, "Perez", 30);
    strncpy(e.identificador, "123456789", 9);
    e.cargo = ANALISTA;
    print_empleado(&e);
    pagar_sueldo(&e);
    return 0;
}

/*
    Big great mistake, that I made while learning this

    If you are using multiple header files, you must tell the compiler to compile the three source files and link them together into an executable called "program".
    gcc main.c sueldos.c empleados.c -o program
    ./program
*/
