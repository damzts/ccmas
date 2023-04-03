/*
 * =====================================================================================
 *
 *       Filename:  12_less-common-multiple.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/03/2023 12:38:58 PM
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
int* getPrimeFactors(int);
int getLCM(int,int);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    //encontrar los factores primos de both numbers
    //la union de ambos
    //la multiplacion de la union
    //el resultado
//    int a=15,b=20;
//    printf ( "el lcm de %d:%d es: %d\n",a,b,getLCM(a,b));
  int* a =  getPrimeFactors(15);
    return EXIT_SUCCESS;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  getPrimeNumbers
 *  Description:  
 * =====================================================================================
 */
   int* 
getPrimeFactors (int a)
{
    int primeNumbersArray[10];
    static int primeFactorsArray;
    int i;
    int counter=0;
    //primero encontrar los numeros primos del 2 al a
    for ( i = 2; i < a; i += 1 ) {
    
        for (int j = 2; j < i; j += 1 ) {
            //si el numero tiene divisores
            if(i%j == 0){
                //no es numero primo
                break;
            }
        }
        //        printf ( "%d,",i );
        while(counter<10){
            primeNumbersArray[counter]=i;
            counter++;
        }
    }
    for(int k=0;k<10;k++){
        if(a%primeNumbersArray[k]==0){

        }
        printf("%d,",primeNumbersArray[k]);
    }
    return primeNumbersArray;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  getLCM
 *  Description:  
 * =====================================================================================
 */
   int 
getLCM (int a, int b )
{
    int lcm=10;
    int* aPrimeFactors=getPrimeFactors(a);
    int* bPrimeFactors=getPrimeFactors(b);




    return lcm;
}
