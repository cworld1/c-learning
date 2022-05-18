#include <stdio.h>

void main()
{
    int month, day, year;
    char *dayWords, *monthWords[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("Enter date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    if (month < 1 || month > 12 || day < 1 || day > 31 || year < 1 || year > 99)
    {
        printf("What you enter is wrong. Please check carefully.");
        return;
    }
    switch (day)
    {
    case 1:
        dayWords = "st";
        break;
    case 2:
        dayWords = "nd";
        break;
    case 3:
        dayWords = "rd";
        break;
    default:
        dayWords = "th";
        break;
    }
    printf("Date this %d%s day of %s, %d", day, dayWords, monthWords[month - 1], year + 2000);
}