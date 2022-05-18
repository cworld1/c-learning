#include <stdio.h>

void main()
{
    // 读取/创建文件 & 创建变量
    FILE *read = fopen("./days.dat", "r"),
         *write = fopen("./days.out", "w");
    int num, month, day, days = 0, monthDays[12];
    char *monthWords[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // 计算数组
    monthDays[0] = 0;
    for (int i = 1; i < 12; i++)
    {
        switch (i)
        {
        case 1:
            days += 31;
            break;
        case 2:
            days += 28;
            break;
        case 3:
            days += 31;
            break;
        case 4:
            days += 30;
            break;
        case 5:
            days += 31;
            break;
        case 6:
            days += 30;
            break;
        case 7:
            days += 31;
            break;
        case 8:
            days += 31;
            break;
        case 9:
            days += 30;
            break;
        case 10:
            days += 31;
            break;
        case 11:
            days += 30;
            break;
        }
        monthDays[i] = days;
    }

    // 读取并写入内容
    fprintf(write, "TABLE OF DATES AND DAYS FROM 1 JANUARY\n");
    fprintf(write, "DATE                DAYS FROM 1 JAN\n");
    fprintf(write, "----------          ----------------\n");

    fscanf(read, "%d", &num);
    for (int j = 0; j < num; j++)
    {
        fscanf(read, "%d%d", &month, &day);
        if (month < 1 || month > 12 || day < 1 || day > 31)
        {
            printf("Data in \"days.dat\" is wrong. Please check carefully.");
            return;
        }
        fprintf(write, "%-2d %-9s\t\t\t%d\n", day, monthWords[month - 1], monthDays[month - 1] + day - 1);
    }

    // 关闭文件
    fclose(read);
    fclose(write);
    printf("File generate complete.");
}