/*
 * =====================================================================================
 *
 *       Filename:  11_neon-numbers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2023 11:50:32 AM
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
#include <stdbool.h>

bool isNeonNumber(int);
void printNeonNumbers(int);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int n = 100000;
    printNeonNumbers(n);
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isNeonNumber
 *  Description:  
 * =====================================================================================
 */
    bool
isNeonNumber (int n)
{
    int nSquare=n*n;
    int sumNSquareDigits=0;
    while(nSquare>0){
        sumNSquareDigits=sumNSquareDigits+(nSquare%10);
        nSquare=nSquare/10;
    }
    if(n==sumNSquareDigits) return true;
    else return false;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printNeonNumbers
 *  Description:  
 * =====================================================================================
 */
    void
printNeonNumbers (int limit )
{
    int i;

    for ( i = 0; i < limit; i += 1 ) {
       if(isNeonNumber(i)) printf ( "%d es un numero neon\n",i);
    }
}
