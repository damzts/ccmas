/*
    A header file contains only typedefs and prototypes
*/
#ifndef EMPLEADOS
#define EMPLEADOS

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

void print_empleado(Empleado *empl);

#endif // EMPLEADOS


