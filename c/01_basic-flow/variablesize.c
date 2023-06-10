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
    return 0;
}

void loopy()
{
    /*
        Using and printing variables
    */
    char thisIsCharVariable;
    short thisIsShortVariable;
    int thisIsIntVariable;
    long thisIsLongVariable;
    double thisIsDoubleVariable;

    thisIsCharVariable = 'c';
    thisIsShortVariable = 123;
    thisIsIntVariable = 124;
    thisIsLongVariable = 125;
    thisIsDoubleVariable = 126;

    printf("This is a char variable: %c\n", thisIsCharVariable);
    printf("sizeof char variable: %d byte\n", sizeof(thisIsCharVariable));

    printf("This is a short variable: %d\n", thisIsShortVariable);
    printf("sizeof short variable: %d byte\n", sizeof(thisIsShortVariable));

    printf("This is an int variable: %d\n", thisIsIntVariable);
    printf("sizeof int variable: %d byte\n", sizeof(thisIsIntVariable));

    printf("This is a long variable: %d\n", thisIsLongVariable);
    printf("sizeof long variable: %d byte\n", sizeof(thisIsLongVariable));

    printf("This is a double variable: %d\n", thisIsDoubleVariable);
    printf("sizeof double variable: %d byte\n", sizeof(thisIsDoubleVariable));
}
