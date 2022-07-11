#include <stdio.h>
#include <ctype.h>

void get_chars(int arrs[], int calc)
{
    char current;
    while ((current = getchar()) != '\n')
        if (isalpha(current))
            arrs[tolower(current) - 97] += calc;
}

void main()
{
    int arrs[26] = {0};
    printf("Enter first word: ");
    get_chars(arrs, 1);
    printf("Enter second word: ");
    get_chars(arrs, -1);
    for (int i = 0; i < 26; i++)
    {
        if (arrs[i] != 0)
        {
            printf("The words are not anagrams.");
            break;
        }
        if (arrs[i] == 0 && i == 25)
            printf("The words are anagrams.");
    }
}