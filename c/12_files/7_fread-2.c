/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:  Cómo volcar un array de estructuras usando el tercer parámetro de las primitivas fread y fwrite.
 */
#include <stdio.h>
#include <stdlib.h>
//
void loopy();
void printMedicion(struct medicion *medicion);
//
struct medicion
{
    unsigned short anio;
    unsigned char mes;
    unsigned char dia;
    float temperatura;
    unsigned char uv;
    unsigned char viento;
};
//
int main(int argc, char const *argv[])
{
    loopy();
    return 0;
}
//
void loopy()
{
    struct medicion medidas[] = {{.anio = 2020, .mes = 11, .dia = 9, .temperatura = 12.5, .uv = 4, .viento = 15}, {.anio = 2021, .mes = 12, .dia = 10, .temperatura = 29.5, .uv = 2, .viento = 30}};

    // printMedicion(&medidas[0]);

    FILE *fp = fopen("temperatura.bin", "wb"); // open temperatures.bin - write binary file
    int total = fwrite(&medidas, sizeof(struct medicion), 2, fp);
    if (total != 2)
    {
        printf("algo ha salido mal\n");
    }
    printf("se hizo el nuevo archivo con 2 medidas\n");
    fclose(fp);

    struct medicion medidas2[2];

    FILE *fp2 = fopen("temperatura.bin", "rb"); // open temperatures.bin - read binary file
    int total2 = fread(&medidas2, sizeof(struct medicion), 2, fp2);
    if (total2 != 2)
    {
        printf("total: %d\n", total2);
        printf("algo ha salido mal en la leida\n");
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        printMedicion(&medidas2[i]);
    }
    fclose(fp2);
}
//
void printMedicion(struct medicion *medicion)
{
    printf("Fecha: %d-%d-%d, Registro %fC. UV %d, Viento %d, km/h\n", medicion->dia, medicion->mes, medicion->anio, medicion->temperatura, medicion->uv, medicion->viento);
}