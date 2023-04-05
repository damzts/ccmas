/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:  Con la primitiva fgets podemos leer del tirón un montón de caracteres y depositarlos en un buffer.
 que luego podemos tratar como una cadena de caracteres.
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

    char buffer[80]; // buffer overflow

    // si fgets sale bien-> devuelve una referencia al mismo buffer, sino devuelve null
    // char *referencia = fgets(buffer,80,temperatures);

    do
    {
        if (fgets(buffer, 80, temperatures))
        {
            printf("%s", buffer); // fgets se detiene en saltos de linea \n
        }
    } while (!feof(temperatures)); // while not end of file

    fclose(temperatures); // cierra el archivo cuando lo uses
}