/*
 * =====================================================================================
 *
 *       Filename:  08_numberpalindrome-reverse2.c
 *
 *    Description: 
 *
 *        Version:  1.0
 *        Created:  04/02/2023 09:21:27 PM
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

bool isPalindrome(int);
int reverseNumber(int);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int n = 12345;
    isPalindrome(n)?printf ( "Si es palindromo\n" ):printf ( "No es palindromo\n" );
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isPalindrome
 *  Description:  
 * =====================================================================================
 */
    bool
isPalindrome (int n)
{
    int reverse=reverseNumber(n);
    if(n == reverse){
        return true;
    }else{
        return false;
    }
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  reverseNumber
 *  Description:  
 * =====================================================================================
 */
    int
reverseNumber (int n)
{
    int reverse = 0;
    while(n!=0){
        int r = n%10;
        reverse= reverse * 10 + r;
        n=n/10;
    }
    return reverse;
}
