/*
 * =====================================================================================
 *
 *       Filename:  10_armstrong-numbers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2023 11:18:25 AM
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
void printArmstrongNumbers(int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int n = 10000;
    printArmstrongNumbers(n);
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printArmstrongNumbers
 *  Description:  
 * =====================================================================================
 */
    void
printArmstrongNumbers (int n)
{
    for ( int i = 0; i <= n; i += 1 ) {
        int N=i;
        int countDigits=0;
        while(N>0){
            countDigits++;
            N = N/10;
        }
        //printf ( "digits:%d\n",countDigits);
        int M=i;
        int sum=0;
        while(M>0){
            sum = sum +pow((M%10),countDigits);
            M = M/10;
        }
        if(sum==i) printf ( "%d es un numero de armstrong\n",i);
    }

}
