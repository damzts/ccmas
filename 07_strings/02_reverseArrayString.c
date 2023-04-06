/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Review C / C++ syntax and basic data types, such as int, float, char, bool, and void
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
void loopy();
void reverseArrayString(char *str);
//
int main(int argc, char const *argv[])
{
    loopy();
    return 0;
}

void loopy()
{
    int array[] = {5, 4, 3, 2, 1};
    char str[] = "hola";
    //
    for (int i = 0; i < strlen(str); i++)
    {
        printf("[%c]", str[i]);
    }
    printf("\n");
    //
    reverseArrayString(str);
    for (int j = 0; j < strlen(str); j++)
    {
        printf("[%c]", str[j]);
    }
}
void reverseArrayString(char *str)
{
    int lenstr = strlen(str);
    for (int i = 0; i < (lenstr / 2); i++)
    {
        char temp = str[i];
        str[i] = str[lenstr - i - 1];
        str[lenstr - i - 1] = temp;
    }
}
