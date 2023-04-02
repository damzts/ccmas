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
    fputs("hola mundo", stdout);
    // int car = fgetc(stdin);
    // printf("ha dicho %c", car);

    puts("hola mundo ptus");
    putchar('h');
    // int car = getchar();
}