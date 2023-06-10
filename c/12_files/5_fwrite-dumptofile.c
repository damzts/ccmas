/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   En este vídeo vamos a ver cómo podemos usar la primitiva fwrite para transferir regiones de memoria a streams o archivos.
 para permitir serializar de forma pura estructuras o arrays complejos de una manera mucho más precisa que trabajando con cadenas de caracteres.
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
    system("PAUSE");
    return 0;
}
//
void loopy()
{
    struct medicion m1 = {
        .anio = 2020,
        .mes = 11,
        .dia = 9,
        .temperatura = 12.5,
        .uv = 4,
        .viento = 15};

    FILE *fp = fopen("temperatura.bin", "wb"); // b for binary

    // archivo binario no txt
    int total = fwrite(&m1, sizeof(struct medicion), 1, fp); // volcar buffer -> zona de memoria -> conjunto de bytes en memoria que representa una informacion. array de unsigned char
    if (total != 1)
    {
        printf("error de escritura");
        return;
    }

    printMedicion(&m1);
    printf("successfully wrote, temperature.bin created.\n");

    fclose(fp);
}
//
void printMedicion(struct medicion *medicion)
{
    printf("Fecha: %d-%d-%d, Registro %fC. UV %d, Viento %d, km/h\n", medicion->dia, medicion->mes, medicion->anio, medicion->temperatura, medicion->uv, medicion->viento);
}