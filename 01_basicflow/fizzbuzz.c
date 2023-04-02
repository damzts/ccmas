/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   Refresh your knowledge of control structures, including if/else statements, loops, and switch statements
 */
#include <stdio.h>
#include <stdlib.h>
/*
 *Prototypes
 */
void fizzBuzz();

int main(int argc, char const *argv[])
{
    fizzBuzz();
    return 0;
}
/*
    from numbers 1 to 100, check the next:
    if a number %% 3, output shall be Fizz
    if a number %% 5, output shall be Buzz
    if a number %% 3 and also %% 5, output shall be FizzBuzz
*/
void fizzBuzz()
{
    int i;
    /*
        looping through 1 to 100
    */
    for (i = 1; i <= 100; i++)
    {
        /*
            implement if, else, else if statements
        */
        if (((i % 3) || (i % 5)) == 0) /* here, suppose 15 % 3, equals zero, 15 % 5, also equals zero: 0 OR 0 equals 0, so statement is triggered*/
            printf("%2d-> FizzBuzz\n", i);
        else if ((i % 3) == 0)
            printf("%2d-> Fizz\n", i);
        else if ((i % 5) == 0)
            printf("%2d-> Buzz\n", i);
        else
            printf("%2d\n", i);
    }
}
