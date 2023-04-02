/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
/*
 *Prototypes
 */
void loopy();
void printMedicion(struct medicion *medicion);

struct medicion
{
    unsigned short anio;
    unsigned char mes;
    unsigned char dia;
    float temperatura;
    unsigned char uv;
    unsigned char viento;
};

void printMedicion(struct medicion *medicion)
{
    printf("Fecha: %d-%d-%d, Registro %fC. UV %d, Viento %d, km/h\n", medicion->dia, medicion->mes, medicion->anio, medicion->temperatura, medicion->uv, medicion->viento);
}

int main(int argc, char const *argv[])
{
    loopy();
    system("PAUSE");
    return 0;
}

void loopy()
{
    struct medicion m1 = {
        .anio = 2020,
        .mes = 11,
        .dia = 9,
        .temperatura = 12.5,
        .uv = 4,
        .viento = 15};

    struct medicion m2;
    printMedicion(&m2);

    FILE *fp = fopen("temperatura.bin", "rb");
    int total = fread(&m2, sizeof(struct medicion), 1, fp);
    if (total != 1)
    {

        printf("hay un error con la leida\n");
    }
    fclose(fp);

    printMedicion(&m2);
}