/*
 *Author: Damzts
 *Date: 3-30-2023
 *Description:   A string is said to be palindrome if the reverse of the string is the same as the string.
Using the standard (simple) method
Using String library function of reverse and compare in C
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
void simpleMethod(char *);
void inBuiltFunctions(char *);
void reverseStr(char *);

int main(int argc, char const *argv[])
{
    char stringA[] = "geeks";
    char stringB[] = "aba";

    simpleMethod(stringB);
    inBuiltFunctions(stringA);
    inBuiltFunctions(stringB);
    return 0;
}

/*
 *Initialize 2 variables, l from the start and h from the end.
 *now while (h>l), we will check its equivalent character in the string.
 *if it’s not equal then it’s not a palindrome
 *else it will traverse half character and the string is a palindrome*/
void simpleMethod(char *str)
{
    int start = 0, end = strlen(str) - 1;
    int isPalindrome = 1; // suppose true

    while (end > start)
    {
        if (str[start] != str[end])
        {
            isPalindrome = 0; // it wasnt
            printf("%s:is not palindrome\n", str);
            return;
        }
        start++;
        end--;
    }

    printf("%s: is palindrome\n", str);
    return;
}
/*
 *Using String Library Function Compare in C
 *We can also check a palindromic string with the help of compare function in the C library.
 *Given string is reversed and then it is compared with the help of strcmp() which compares two strings in C.
 *If they are equal then the string will be a palindromic string else not.
 */
void inBuiltFunctions(char *str)
{
    int lenstr = strlen(str);
    char reversed[lenstr];
    // se copia en una nueva variable
    strcpy(reversed, str);
    // se reversa la nueva variable
    reverseStr(reversed);
    // se compara
    if (strcmp(str, reversed) == 0)
    {
        printf("%s:%s   is palindrome\n", str, reversed);
    }
    else
    {
        printf("%s:%s   not palindrome\n", str, reversed);
    }
}
//
void reverseStr(char *str)
{
    int lenstr = strlen(str);
    // from end to start
    for (int i = 0; i < (lenstr / 2); i++)
    {
        char temp = str[i];
        str[i] = str[lenstr - 1 - i];
        str[lenstr - 1 - i] = temp;
    }

    // for (int J = 0; J < lenstr; J++)
    // {
    //     printf("%c", str[J]);
    // }
}