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
int findGCD(int, int);
//
int main(int argc, char const *argv[])
{
    int a = 98, b = 56;
    int gcd = findGCD(a, b);
    printf("The greatest common divisor of %d and %d : %d\n", a, b, gcd);
    return 0;
}

int findGCD(int a, int b)
{
    int min;
    int gcd;
    (a < b) ? min = a : min = b;
    for (int i = min; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}