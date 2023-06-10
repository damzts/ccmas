/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Con la primitiva fgetc podemos leer caracteres de un archivo.
 */
#include <stdio.h>
#include <stdlib.h>
//
void loopy();
//
int main(int argc, char const *argv[])
{
    loopy();
    return 0;
}

void loopy()
{
    // fopen returns-> descriptor , which is a pointer and its named FILE
    FILE *temperatures = fopen("temperaturas.txt", "r"); // read write r+ readwrite
    // in linux -> man stdio, opens stdio lib manual and syntax
    if (!temperatures)
    {
        printf("no he podido abrir el archivo\n");
        return;
    }

    do
    {
        int leido = fgetc(temperatures); // fgetc deuvelve un int, envez de un char, para discriminar si es un caracter o no
        printf("%c", leido);
    } while (!feof(temperatures)); // while not end of file
    // feof() recibe un descriptor, devuelve no 0 si el cursor esta al final del archivo

    fclose(temperatures); // cierra el archivo cuando lo uses
}