/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    Big great mistake here.
    If you are using multiple header files, you must tell to the compiler to compile the three source files and link them together into an executable called "program".

    gcc file1.c file2.c main.c -o program
    ./program

*/
