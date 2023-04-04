/*
 * =====================================================================================
 *
 *       Filename:  3_primenumbers.c
 *
 *    Description: calcula los numeros primos desde el 1 al N
 *
 *        Version:  1.0
 *        Created:  04/01/2023 08:05:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int);
bool isPrimeEfficient(int);
/*
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:
 * =====================================================================================
 */
int main(int argc, char *argv[])
{
    int N = 50;

    for (int i = 0; i < N; i += 1)
    {
        if (isPrime(i))
        {
            printf("%d,", i);
        }
    }
    printf("\nSegunda Funcion\n");
    for (int i = 0; i < N; i += 1)
    {
        if (isPrimeEfficient(i))
        {
            printf("%d,", i);
        }
    }

    return EXIT_SUCCESS;
} /* ----------  end of function main  ---------- */
  /*
   * ===  FUNCTION  ======================================================================
   *         Name:  isPrime
   *  Description:
   * =====================================================================================
   */
bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i < n; i += 1)
    {

        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
} /* -----  end of function isPrime  ----- */
  /*
   * ===  FUNCTION  ======================================================================
   *         Name:  isPrimeEfficient
   *  Description:
   * =====================================================================================
   */
bool isPrimeEfficient(int n)
{

    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
} /* -----  end of function isPrimeEfficient  ----- */
