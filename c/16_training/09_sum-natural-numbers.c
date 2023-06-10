/*
 * =====================================================================================
 *
 *       Filename:  09_sum-natural-numbers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2023 10:56:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
//while, for, recursion y funciones
#include	<stdlib.h>
#include    <stdio.h>
void sumNaturalNumbersWhile(int);
void sumNaturalNumbersFor(int );
int sumNaturalNumbersRecursion(int);
void sumNaturalNumbersFormula(int);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int n = 100;
    int sum;
    sumNaturalNumbersWhile(n);
    sumNaturalNumbersFor(n);
    sum = sumNaturalNumbersRecursion(n);
    printf ( "NaturalSum:%d = %d\n",n,sum);
    sumNaturalNumbersFormula(n);
    return EXIT_SUCCESS;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sumNaturalNumbersWhile
 *  Description:  
 * =====================================================================================
 */
    void
sumNaturalNumbersWhile ( int n )
{
    int i=1;
    int sum = 0;
        while(i<=n){
           sum = sum + i; 
            i++;
        };
    printf ( "NaturalSum:%d = %d\n",n,sum);
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sumNaturalNumbersFor
 *  Description:  
 * =====================================================================================
 */
    void
sumNaturalNumbersFor ( int n)
{
    int i = 0, sum = 0;
    
    for ( i = 0; i <= n; i += 1 ) {
        sum = sum + i;
    }
    printf ( "NaturalSum:%d = %d\n",n,sum);
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sumNaturalNumbersRecursion
 *  Description:  
 * =====================================================================================
 */
   int 
sumNaturalNumbersRecursion ( int n )
{
    if(n==1) return n;
    else return (n+sumNaturalNumbersRecursion(n-1));
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sumNaturalNumbersFormula
 *  Description:  
 * =====================================================================================
 */
    void
sumNaturalNumbersFormula ( int n )
{
    int sum;
    sum =(int) (n*(n+1))/2;
    printf ( "NaturalSum:%d = %d\n",n,sum);
}
