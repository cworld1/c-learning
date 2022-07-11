#include <stdio.h>

int main()
{
    char sentence[100];
    int end, flag = 0;

    printf("Enter a sentence(please end with ? or . or ! ): ");
    gets(sentence);

    for (int i = 0; i < 100; i++)
        if ((sentence[i] == '?') || (sentence[i] == '.') || (sentence[i] == '!'))
            flag = i;
    end = flag;

    for (int i = flag; i >= 0; i--)
    {
        if (sentence[i] == ' ')
        {
            for (int j = i + 1; j < flag; j++)
                printf("%c", sentence[j]);
            flag = i;
            printf(" ");
        }
        if (i == 0)
            for (int j = 0; j < flag; j++)
                printf("%c", sentence[j]);
    }
    printf("%c", sentence[end]);
}