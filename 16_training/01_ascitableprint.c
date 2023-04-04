/*
 * =====================================================================================
 *
 *       Filename:  ascitableprint.c
 *
 *    Description: print all the ascii table 
 *
 *        Version:  1.0
 *        Created:  04/01/2023 11:57:20 AM
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

int main ( int argc, char *argv[] )
{



    for (int i=0;i<=127 ;i++ ){
        printf ( "yea perdonen %d es igual al caracter %c\n",i,i);
    }
    
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
