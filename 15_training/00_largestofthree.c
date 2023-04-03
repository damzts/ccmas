/*
 * =====================================================================================
 *
 *       Filename:  06_largestoftreenumbers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2023 07:11:14 PM
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
int largestOfTree(int a,int b,int c);
int largestOfTree2(int a,int b,int c);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{   
    int a=5,b=1,c=10;
    printf ( "%d: is the largest number of %d:%d:%d\n",largestOfTree2(a,b,c),a,b,c);
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  largestOfTree
 *  Description:  
 * =====================================================================================
 */
    int
largestOfTree (int a, int b, int c )
{
    return a>b?(a>c?a:c):(b>c?b:c);
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  largestOfTree2
 *  Description:  
 * =====================================================================================
 */
    int
largestOfTree2 (int a,int b,int c)
{
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}
