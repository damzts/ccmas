/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   pequena prueba de codigo para recordar como declarar punteros, que guardan y como acceder al valor de ellos al pasar como argumento un puntero, tu puedes alterar el valor de su campo, sin realizar copias de variable, por lo tanto mayor optimizacion de memoria.
 */

#include <stdio.h>
#include <stdlib.h>
/*
 *Prototypes
 */
void jugarPorArgumento(int n);
void jugarPorReferencia(int *n);
void intPointers();
void charPointers();
void functionPointers();

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
    /*pointerX -> points to x address*/
    int *pX = &x;
    printf("x value:%d\n", &x);
    printf("x value:%d\n", x);
    printf("x address:%x\n", pX);
    printf("x address:%p\n", pX);
}
/*
    0x5100 |'B'|  "name" is an address constant that has value hex 5100
    0x5101 |'i'|  char: 1 byte
    0x5102 |'l'|  char: 1 byte
    0x5103 |'l'|  char: 1 byte
    0x5104 |'s'|  char: 1 byte
    0x5105 |\0 |  char: 1 byte
    0x5106 |   |  p is a pointer: 1 word
    0x5109 |   |  q is a pointer: 1 word
*/
void charPointers()
{
    char name[] = "Bills"; // C knows by default, arrays and strings are pointers
    char *p;
    int *q; // q = name; // error q is a int pointer so jumps between 8 bytes
    /*always specify correctly the type of variable that the pointer is pointing*/
    p = name; // doesnt need &, arrays are pointers by default
    printf("%c\n", *p);
    ++p; // 0x5100 turns into 0x5101
    printf("%c\n", *p);
}
/*
 *Difference is that passing by argument, makes an internal copy inside the function, increases space-time complexity, reduces perfomance
 *Passing by Reference, sends the pointer that contains the direction, not needed to create a copy, and its value can be modified anywhere.
 */
void functionPointers()
{
    /*pointerX -> points to x address*/
    int x = 10;
    int *pX = &x;
    printf("initial x:%d\n", x);
    printf("----\n");
    //
    jugarPorArgumento(x);
    printf("x:%d\n", x);
    printf("----\n");
    jugarPorReferencia(pX);
    printf("x:%d\n", *pX);
}
/*
    pass pointer by argument
*/
void jugarPorArgumento(int n)
{
    n = n * 2 + 1;
    printf("jugar x_arg:%d\n", n);
}
/*
    pass pointer by reference
*/
void jugarPorReferencia(int *n)
{
    *n = *n * 2 + 1;
    printf("jugar x_ref:%u\n", *n);
}
