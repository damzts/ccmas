/*
 * =====================================================================================
 *
 *       Filename:  07_reversenumber.c
 *
 *    Description: given a 5 digits number, print the sum of all its digits, print the number in reverse, print a table of units.
 *
 *        Version:  1.0
 *        Created:  04/02/2023 07:56:19 PM
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
void printNumberDigitsSum(int);
void printReverseNumber(int);
void printNumberUnitsTable(int);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    printf ( "12345\n");
    printNumberDigitsSum(12345);
    printReverseNumber(12345);
    printNumberUnitsTable(13245);
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sumNumberDigits
 *  Description:  
 * =====================================================================================
 */
    void
printNumberDigitsSum(int n)
{
  int i;
  int sum = 0;

  for ( i = 0; i < 5; i += 1 ){
    sum = sum + (n%10);
    n = (n-(n%10))/10;
  }
  printf ( "la suma es:%d\n",sum);
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  reverseNumber
 *  Description:  
 * =====================================================================================
 */
    void
printReverseNumber( int n )
{
    int i;
    int sum=0;

    for ( i = 0; i < 5; i += 1 ) {
        sum = sum +((n%10)*pow(10,4-i));
        n=(n-(n%10))/10;
    }

    printf ( "El numero reverse:%d\n",sum);
    
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printNumberUnitsTable
 *  Description:  
 * =====================================================================================
 */
    void
printNumberUnitsTable (int n)
{
    int i;


    for ( i = 0; i < 5; i += 1 ) {
        printf ( "10^%d : %d\n",i,(n%10));
        n=(n-(n%10))/10;
    }
}












