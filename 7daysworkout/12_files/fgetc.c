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

int main(int argc, char const *argv[])
{
    loopy();
    system("PAUSE");
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
        // EOF, end of file, error
        printf("%c", leido);
    } while (!feof(temperatures));
    // feof() // acepta descriptor, devuelve no 0 sie el cursor esta al final del archivo

    fclose(temperatures); // cierra el archivo cuando lo uses
}