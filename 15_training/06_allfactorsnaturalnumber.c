/*
 * =====================================================================================
 *
 *       Filename:  06_allfactorsnaturalnumber.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2023 07:32:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include	<stdlib.h>
#include    <stdio.h>
#include <math.h>
void printAllFactors(int);
void printDivisors(int);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    printAllFactors(100);
    printDivisors(100);
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printAllFactors
 *  Description:  
 * =====================================================================================
 */
    void
printAllFactors ( int n)
{
    
    for ( int i = 1; i <= n; i += 1 ) {
        if(n%i ==0){
            printf ( "%d es un numero divisible de %d\n",i,n);
        }
    }
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printAllFactors-tune
 *  Description:  
 * =====================================================================================
 */
void printDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                printf("%d ", i);
            else
                printf("%d %d ", i, n / i);
        }
    }
}
