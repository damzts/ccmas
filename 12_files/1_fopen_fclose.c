/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Open and Close files
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

    printf("abri el archivo\n");
    fclose(temperatures); // cierra el archivo cuando lo uses
}