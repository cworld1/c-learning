#include <stdio.h>

void main()
{
    FILE *fp = fopen("./grade.dat", "r");

    int score;
    char *grade;
    printf(" Numerical   Grade\n   Score\n");
    printf("-------------------\n");
    while (!feof(fp))
    {
        fscanf(fp, "%d", &score);
        switch (score / 10)
        {
        case 10:
        case 9:
            grade = "A";
            break;
        case 8:
            grade = "B";
            break;
        case 7:
            grade = "C";
            break;
        case 6:
            grade = "D";
            break;
        default:
            grade = "F";
            break;
        }
        printf("    %3d        %s\n", score, grade);
    }

    fclose(fp);
}