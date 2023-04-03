/*
 * =====================================================================================
 *
 *       Filename:  05_primenumbers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2023 05:45:28 PM
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
int isVowel(char);
int isVowelBitshift(char);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] ) {
    char array[]={'a','z','A','r','i','n','j','l','h','w','b','z'};
    int arrayLen = sizeof(array) / sizeof(array[0]);
    printf ( "La longitud del array es:%d\n",arrayLen);

        for ( int i = 0;i < arrayLen ;i++) {
            
            if(isVowelBitshift(array[i])){
                printf ( "%c: es vocal\n",array[i] );
            }else{
                printf ( "%c\n",array[i] );
            }

        }
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isPrime
 *  Description:  
 * =====================================================================================
 */
   int 
isVowel (char a)
{
    switch(a){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    return 1;
    break;
    default: return 0;
    }
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isPrimeBitshift
 *  Description:  
 * =====================================================================================
 */
   int 
isVowelBitshift (char a)
{
    return(0x208222 >> (a & 0x1f) & 1);
}
