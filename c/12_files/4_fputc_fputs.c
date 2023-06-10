/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Con las primitivas fputc y fputs podemos escribir cadenas de caracteres o caracteres sueltos en archivos.
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
    FILE *temp = fopen("temporal.txt", "w"); // read write r+ readwrite
    // in linux -> man stdio, opens stdio lib manual and syntax
    if (!temp)
    {
        printf("no he podido abrir el archivo\n");
        return;
    }

    fputc('h', temp); // if ok returns the char that wrote, if not return eof
    fputs("hola wenos dias", temp);
    fclose(temp); // cierra el archivo cuando lo uses
}