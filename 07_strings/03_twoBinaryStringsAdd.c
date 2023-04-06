#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
char *addBinary(char *a, char *b);

int main()
{
    char a[MAX_LEN], b[MAX_LEN];
    strcpy(a, "110110");
    strcpy(b, "11");
    printf("The sum of %s and %s is %s\n", a, b, addBinary(a, b));
    return 0;
}
// Function to add two binary strings
char *addBinary(char *a, char *b)
{
    static char result[MAX_LEN]; // Resultant binary string
    int len_a = strlen(a);
    int len_b = strlen(b);
    int carry = 0;                           // Initialize carry to 0
    int i = len_a - 1, j = len_b - 1, k = 0; // Index variables

    // Loop through the binary strings from right to left
    while (i >= 0 || j >= 0 || carry == 1)
    {
        int sum = carry;
        if (i >= 0)
            sum += a[i] - '0'; // Convert character to integer
        i--;
        if (j >= 0)
            sum += b[j] - '0'; // Convert character to integer
        j--;

        result[k] = (sum % 2) + '0'; // Convert integer to character
        k++;
        carry = sum / 2;
    }

    // Reverse the resultant binary string
    int len_result = strlen(result);
    for (int i = 0; i < len_result / 2; i++)
    {
        char temp = result[i];
        result[i] = result[len_result - i - 1];
        result[len_result - i - 1] = temp;
    }

    return result;
}