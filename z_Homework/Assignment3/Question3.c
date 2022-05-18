#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *read, *write;
    if ((read = fopen("input.txt", "r")) == NULL || (write = fopen("output.txt", "w")) == NULL)
    {
        printf("File open error!\n");
        exit;
    }

    int c;
    int num = 0, letter = 0, space = 0, other = 0;
    while ((c = fgetc(read)) != EOF)
    {
        if (c >= '0' && c <= '9')
            num++;
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            letter++;
        else if (c == ' ')
            space++;
        else
            other++;
    }
    fprintf(write, "Digit:  %5d\nLetter: %5d\nSpace:  %5d\nOthers: %5d\n", num, letter, space, other);
    // fprintf(write, "numbers:%d\nletters:%d\nspace:%d\nothers:%d\n", num, letter, space, other);

    if (fclose(read) || fclose(write))
    {
        printf("Can not close the file!\n");
        exit;
    }
}
