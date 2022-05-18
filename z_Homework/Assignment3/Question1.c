#include <stdio.h>
#include <string.h>

void calculate(char str[])
{
    int i, letter = 0, digit = 0, space = 0, others = 0;
    while (str[i] != '\0')
    {
        char c = str[i];
        if (c >= '0' && c <= '9')
        {
            digit++;
        }
        else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        {
            letter++;
        }
        else if (c == ' ')
        {
            space++;
        }
        else
        {
            others++;
        }
        i++;
    }

    printf("\
    Letter: %5d\n\
    Digit:  %5d\n\
    Space:  %5d\n\
    Others: %5d\n\n",
           letter, digit, space, others);
}

void main()
{
    printf("----- Use getchar: -----\n");
    char str1[50];
    char c;
    int i = 0;
    printf("Please input string: ");
    while ((c = getchar()) != '\n')
    {
        str1[i++] = c;
    }
    calculate(str1);

    printf("----- Use fscanf: -----\n");
    fflush(stdin);
    char str2[50];
    printf("Please input string: ");
    scanf("%s", &str2);
    calculate(str2);

    printf("----- Use gets: -----\n");
    fflush(stdin);
    char str3[50];
    printf("Please input string: ");
    gets(str3);
    calculate(str3);
}