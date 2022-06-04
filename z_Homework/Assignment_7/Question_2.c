#include <stdio.h>

void main()
{
    char string[] = "This is a cat.",
         target[] = "cat";
    int pos = 0;

    printf("Enter a source string: ");
    gets(string);
    printf("Enter a target string: ");
    gets(target);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (target[pos] == string[i])
            pos++;
        else
            pos = 0;
        if (target[pos] == '\0')
        {
            printf("We found it at pos %d.\n", i - pos + 2);
            return;
        }
    }
    printf("Sorry we couldn't found it.\n");
}