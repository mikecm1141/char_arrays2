#include <stdio.h>
#include <string.h>

/*
    Display a string in reverse order.
        Read input from the keyboard
        Need to use the strlen function

    Sorts the strings of an array using a bubble sort
        Need to use strcmp and strcpy functions

    "Input number of strings: " (user inputs 3)
    Loop and let the user input that many strings
*/


int main()
{
    char str[100];
    char name[25][50], temp[25];
    int i, l, n, j;

    printf("Enter string to display in reverse order: ");
    scanf("%s", str);

    l = strlen(str);

    printf("Your string, reversed: \n");

    for (i = l; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n\n");

    printf("Input number of strings: ");
    scanf("%d", &n);

    printf("Input string %d: \n", n);

    for (i = 0; i < n; i++)
        scanf("%s", name[i]);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (strcmp(name[j], name[j+1]) > 0)
            {
                strncpy(temp, name[j], sizeof(temp) - 1);
                strncpy(name[j], name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1], temp, sizeof(name[j] + 1) - 1);
            }
        }
    }

    printf("The strings after soorting: \n");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);

    return 0;
}
