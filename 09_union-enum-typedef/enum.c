#include <stdio.h>
#include <stdlib.h>

enum dias_semana{
    LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO
};

//conjunto de identificadores


int main(int argc, char const *argv[])
{
    int mes = 6; //junio
    int dialunes = 1; //lunes
    //
    enum dias_semana dia;
    dia = LUNES;
    printf("El dia Lunes es: %d\n",dia);
    dia = MARTES;
    printf("El dia Martes es: %d\n",dia);
    //
    return 0;
}
