/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description: Whats a enum?
 */

#include <stdio.h>
#include <stdlib.h>

enum dias_semana{
    LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO
};

/*
    it basically enumerates, starting by 0, a set of identifiers.
*/

int main(int argc, char const *argv[])
{
    int mes = 6; //junio
    int dia = 1; //martes
    //
    enum dias_semana dia;
    dia = LUNES;
    printf("El dia Lunes es: %d\n",dia);
    dia = MARTES;
    printf("El dia Martes es: %d\n",dia);
    //
    return 0;
}
