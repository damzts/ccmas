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

    char buffer[80]; // buffer overflow

    // char *ref = fgets(buffer,80,temperatures); // si sale bien devuelve una referencia, al mismo buffer, sino devuleve null

    do
    {
        if (fgets(buffer, 80, temperatures))
        {
            printf("%s", buffer); // fgets se detiene en saltos de linea \n
        }
    } while (!feof(temperatures));

    fclose(temperatures); // cierra el archivo cuando lo uses
}