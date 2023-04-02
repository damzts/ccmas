/*
 * =====================================================================================
 *
 *       Filename:  fibonaciseries.c
 *
 *    Description: printing fibonaci series 
 *
 *        Version:  1.0
 *        Created:  04/01/2023 01:25:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include	<stdlib.h>

void fibo(int);
void fiboArray(int);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    fibo(50);
    printf ( "saltodeliner\n" );
    fiboArray(50);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  fibo
 *  Description:  
 * =====================================================================================
 */
    void
fibo (int n )
{
    int a=0,b=1,temp;
    printf ( "%d,%d,",a,b);
    for ( int i = 0; i < n; i += 1 ) { 
         printf ( "%d,",a+b);
            
            temp=a; a=b;         
            b=temp+b;

    };
}		/* -----  end of function fibo  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  fiboArray
 *  Description:  
 * =====================================================================================
 */
    void
fiboArray (int n)
{
    int array[n];    
    array[0]=0;
    array[1]=1;

    printf ( "%d,%d,",array[0],array[1]);
    for (int i = 2; i < n; i += 1 ) {
        array[i]=array[i-1]+array[i-2];
        printf ( "%d,",array[i]);
    }
}		/* -----  end of function fiboArray  ----- */






