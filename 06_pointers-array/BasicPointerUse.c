/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:uso basico de punterosm, que son, que guardan y como acceder a su valor
 *usar punteros permite modificar directamente el valor de una variable, al no realizar copias de variable, se gana optimizacion de codigo y memoria.
 */

#include <stdio.h>
#include <stdlib.h>
/*
 *Prototypes
 */
void intPointers();
void charPointers();
void functionPointers();
void jugarPorValor(int n);
void jugarPorReferencia(int *n); // pasar por referencia o puntero? es casi lo mismo pero cambia el porque.

int main(int argc, char const *argv[])
{
    // intPointers();
    charPointers();
    // functionPointers();
    // system("pause");
    return 0;
}
void intPointers()
{
    int x = 10;

    int *pX = &x; // declaring pointerX -> points to x address
    printf("x value:%d\n", x);
    printf("x address:%d\n", &x);
    printf("x value(from pointer):%d\n", *pX); // this is called de-referencing
    printf("x address(from pointer):%x\n", pX);
    printf("x address(from pointer):%p\n", pX);
    // internet says you must use %p to print address, but with %x (hex) you get the idea.
}
//
void charPointers()
{
    char name[] = "Bills"; // C knows by default, arrays and strings are pointers

    /*always specify correctly the type of variable that the pointer is pointing*/
    char *p; // OK
    int *q;  // BAD

    p = name; // doesnt need &, arrays are pointers by default
    // q = name; // absolutely ERROR, q was declared int pointer, so jumps between 8 bytes "sizeof(int)"

    printf("%c\n", *p); // pointer address always points to first element 0x5100
    ++p;                // 0x5100 turns into 0x5101
    printf("%c\n", *p);

    /*
    0x5100 |'B'|  "name" is an address constant that has value hex 5100
    0x5101 |'i'|  char: 1 byte
    0x5102 |'l'|  char: 1 byte
    0x5103 |'l'|  char: 1 byte
    0x5104 |'s'|  char: 1 byte
    0x5105 |\0 |  char: 1 byte
    0x5106 |   |
*/
}

/*
 *Difference is that passing by argument, makes an internal copy inside the function, increases space-time complexity, reduces perfomance
 *Passing by (Pointer or Reference), does not need to create a copy, and its value can be modified anywhere.
 */
void functionPointers()
{
    int x = 10;
    int *pX = &x; // pointerX -> points to x address
    printf("initial x:%d\n", x);
    printf("----\n");
    //
    jugarPorValor(x);
    printf("outsidefunction x:%d\n", x); // internal x value wasnt modified
    printf("----\n");
    jugarPorReferencia(pX);
    printf("outsidefunction x:%d\n", *pX); // internal x value modified
}
/*
    pass argument by value
*/
void jugarPorValor(int n)
{
    n = n * 2 + 1;
    printf("insidefunction x:%d\n", n);
}
/*
    pass argument by reference
*/
void jugarPorReferencia(int *n)
{
    *n = *n * 2 + 1;
    printf("inside ref function x:%u\n", *n);
}
