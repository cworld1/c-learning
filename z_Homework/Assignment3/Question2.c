#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f;
    if ((f = fopen("./f.txt", "r")) == NULL)
    {
        printf("Opps! File doesn't exsist :(");
        exit;
    };

    char name[20];
    long id;
    int grade;
    // for (int i = 0; i < 6; i++)
    while (!feof(f))
    {
        fscanf(f, "%d%s%d", &id, name, &grade);
        printf("StuID: %ld   Name: %-6s   Grade: %3d\n", id, name, grade);
    };

    if (fclose(f))
    {
        printf("Sorry. I can not close the file :(");
        exit;
    }
}