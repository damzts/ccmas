/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:  Given two strings str1 and str2, our task is to concatenate these two strings.There are multiple ways to concatenate two strings in C language:
 *Without Using strcat() function:
 *    Using standard method
 *    Using function
 *    Using recursion
 *Using strcat() function
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
void goofyMode();
void concat_string(char *, char *);
void iThinkImCheating();
//
int main(int argc, char const *argv[])
{
    goofyMode();
    //
    char str1[] = "hello", str2[] = "world";
    concat_string(str1, str2);
    printf("Concat manual method: %s\n", str1);
    //
    iThinkImCheating();
    return 0;
}

void goofyMode()
{
    char str1[] = "hello", str2[] = "world";
    char result[50];

    int i = 0;
    int indexResult = 0;

    while (str1[i] != '\0')
    {
        result[indexResult] = str1[i];
        i++;
        indexResult++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        result[indexResult] = str2[i];
        i++;
        indexResult++;
    }
    result[indexResult] = '\0';
    //
    printf("Trash code: %s\n", result);
}
// not that goofy solution
void concat_string(char *receiver, char *donor)
{
    // cant use sizeof(*receiver) / sizeof(*receiver); array len got lost during sending so instead use strlen
    int i;
    int lenReceiver = strlen(receiver);

    // until donor end of character
    for (i = 0; donor[i] != '\0'; i++)
    {
        receiver[lenReceiver + i] = donor[i];
    }
    receiver[lenReceiver + i] = '\0';
}

// using strcat()
void iThinkImCheating()
{
    char str1[] = "Geeks";
    char str2[] = "forGeeks";

    // concatenating the string
    strcat(str1, str2);
    printf("Why dont you just use concat: %s ", str1);
}