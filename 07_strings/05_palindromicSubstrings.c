#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000
//
int is_palindrome(char *str, int start, int end);
void find_palindromic_substrings(char *text);

int main()
{
    char text[MAX_LENGTH];

    FILE *fp = fopen("text.txt", "r");
    if (!fp)
    {
        printf("no he podido abrir el archivo\n");
        return -1;
    }

    char buffer[200];
    do
    {
        if (fgets(buffer, MAX_LENGTH, fp))
        {
            // printf("%s", buffer); // fgets se detiene en saltos de linea
            strcat(text, buffer);
        }
    } while (!feof(fp)); // while not end of file

    printf("%s\n", text);

    find_palindromic_substrings(text);
    fclose(fp); // cierra el archivo cuando lo uses
    return 0;
}

int is_palindrome(char *str, int start, int end)
{
    // Check if the substring is a palindrome
    while (start < end)
    {
        if (tolower(str[start]) != tolower(str[end]))
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

void find_palindromic_substrings(char *text)
{
    int i, j, n = strlen(text);
    // Check each substring of length at least 2 for palindromic property
    for (i = 0; i < n - 1; i++)
    { // from 0 to end of text

        // from 1 to end of text.
        for (j = i + 1; j < n; j++)
        {
            if (is_palindrome(text, i, j))
            {
                printf("Found palindromic substring: %.*s\n", j - i + 1, text + i);

                /*
                %.*s is a format specifier used with the printf family of functions to print a substring of a character array or string.
                The first argument is an integer that specifies the maximum width of the substring to be printed.
                The second argument is a pointer to a character array or string that contains the substring to be printed.
                */

                // sprintf(buf, "%.*s", j - i + 1, text + i);
            }
        }
    }
}
