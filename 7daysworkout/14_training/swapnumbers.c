/*
 * =====================================================================================
 *
 *       Filename:  swapnumbers.c
 *
 *    Description: swaping numbers with temp and pointer 
 *
 *        Version:  1.0
 *        Created:  04/01/2023 06:00:21 PM
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
void swap(int,int);
void swapP(int*,int*);
void swapNoTemp(int*,int*);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
   int x=10,y=5;
   printf ( "x:%d, y:%d\n",x,y);
   swap(x,y);
   swapP(&x,&y);
   printf ( "x:%d, y:%d\n",x,y);
   swapNoTemp(&x,&y);
   printf ( "x:%d,y:%d\n",x,y); 
   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  swap
 *  Description:  
 * =====================================================================================
 */
    void
swap ( int x, int y )
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    //but how you return back 2 values?, thats impossible in c unless, you use pointers, or return an array
    printf ( "x:%d , y:%d\n",x,y);
}		/* -----  end of function swap  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  swapP
 *  Description:  
 * =====================================================================================
 */
    void
swapP (int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}		/* -----  end of function swapP  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  swapNoTemp
 *  Description:  simple idea behind this code is to use arithmetic operators. We will take the sum of the two numbers and store it in one number and store the difference of both the numbers in the other number. Finally, we will store the difference of both the numbers in the first number. Since the values will be updated after the first two operations we will be able to swap the numbers.
 *======================================================================================
 */
    void
swapNoTemp (int *x, int *y )
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}		/* -----  end of function swapNoTemp  ----- */











